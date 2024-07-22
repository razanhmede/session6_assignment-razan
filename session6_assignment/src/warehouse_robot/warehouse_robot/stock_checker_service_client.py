import sys
import rclpy
from rclpy.node import Node
from customized_interfaces.srv import CheckStock
import matplotlib.pyplot as plt

class StockCheckerServiceClient(Node):

    def __init__(self):
        super().__init__('stock_checker_service_client')
        # Create the client
        self.client = self.create_client(CheckStock, 'check_stock')
        # Wait for service to be available 
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.get_logger().info('Service available, sending request...')
        self.request = CheckStock.Request()
        # Initialize item stock levels dictionary
        self.item_stock_levels = {}

    # Send a request with the item name to the server
    def send_request(self, item_name):
        req = CheckStock.Request()
        req.item_name = item_name
        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            stock_level = future.result().stock_level
            self.get_logger().info(f'Stock level for {item_name}: {stock_level}')
            self.item_stock_levels[item_name] = stock_level
            return stock_level
        else:
            self.get_logger().error('Exception while calling service: %r' % future.exception())
            return 0

    # Plotting the stock levels using matplotlib
    def plot_stock_levels(self, items):
        stock_levels = [self.send_request(item) for item in items]
        plt.figure(figsize=(10, 6))
        plt.bar(items, stock_levels)
        plt.xlabel('Items')
        plt.ylabel('Stock Levels')
        plt.title('Plot of Stock Levels of Different Items')
        plt.xlim(-1, len(items))
        plt.ylim(0, 90)
        plt.show()

def main(args=None):
    rclpy.init(args=args)
    node = StockCheckerServiceClient()

    # Handling the usage of the client in case of error in providing the arguments
    if len(sys.argv) < 2:
        print("Usage: ros2 run warehouse_robot stock_checker_service_client <item_name> [<item_name> ...]")
        return

    # Send requests and plot the results
    node.plot_stock_levels(['item1', 'item2', 'item3', 'item4', 'item5', 'item6'])
    
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
