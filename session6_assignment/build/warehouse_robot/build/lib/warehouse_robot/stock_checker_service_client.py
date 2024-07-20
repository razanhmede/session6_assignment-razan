import sys
import rclpy
from rclpy.node import Node
from customized_interfaces.srv import CheckStock

class StockCheckerServiceClient(Node):

    def __init__(self):
        super().__init__('stock_checker_service_client')
        self.cli = self.create_client(CheckStock, 'check_stock')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.get_logger().info('Service available, sending request...')

    def send_request(self, item_name):
        req = CheckStock.Request()
        req.item_name = item_name
        future = self.cli.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            self.get_logger().info(f'Stock level for {item_name}: {future.result().stock_level}')
        else:
            self.get_logger().error('Exception while calling service: %r' % future.exception())

def main(args=None):
    rclpy.init(args=args)
    if len(sys.argv) < 2:
        print("Usage: ros2 run warehouse_robot stock_checker_service_client <item_name>")
        return

    item_name = sys.argv[1]
    stock_checker_service_client = StockCheckerServiceClient()
    stock_checker_service_client.send_request(item_name)
    stock_checker_service_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
