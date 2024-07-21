import sys
import rclpy
from rclpy.node import Node
from customized_interfaces.srv import CheckStock

class StockCheckerServiceClient(Node):

    def __init__(self):
        super().__init__('stock_checker_service_client')
        #create the client 
        self.client = self.create_client(CheckStock, 'check_stock')
        #wait for service to be available 
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        #when service is available send request
        self.get_logger().info('Service available, sending request...')
    #send a request with the item name to the server
    def send_request(self, item_name):
        req = CheckStock.Request()
        req.item_name = item_name
        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
    #print item name and the stocklevel from the server 
        if future.result() is not None:
            self.get_logger().info(f'Stock level for {item_name}: {future.result().stock_level}')
        else:
            self.get_logger().error('Exception while calling service: %r' % future.exception())

def main(args=None):
    rclpy.init(args=args)
    # handling the usage of the client in case of error in providing the arguments
    if len(sys.argv) < 2:
        print("Usage: ros2 run warehouse_robot stock_checker_service_client <item_name>")
        return
    #client takes 1 argument which is the item name
    item_name = sys.argv[1]
    stock_checker_service_client = StockCheckerServiceClient()
    stock_checker_service_client.send_request(item_name)
    stock_checker_service_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
