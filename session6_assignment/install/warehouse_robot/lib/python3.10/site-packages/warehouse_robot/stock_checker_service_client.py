import rclpy
from rclpy.node import Node
import sys
from examples_interfaces.srv import 

class StockCheckerServiceClient(Node):
    def __init__(self):
        super().__init__('stock_checker_service_client')
        self.client=self.create_client(, 'check_stock')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.request = String.Request()
    def send_request(self, item_name):
        self.request.item_name = item_name
        self.future = self.client.call_async(self.request)
        rclpy.spin_until_future_complete(self, self.future)
        if self.future.result() is not None:
            response = self.future.result()
            self.get_logger().info(f'Stock level of {item_name}: {response.stock_level}')
        else:
            self.get_logger().error('Exception while calling service: %r' % (self.future.exception(),))

def main(args=None):
    rclpy.init(args=args)
    stock_checker_client = StockCheckerServiceClient()
    item_name = 'item1'
    stock_checker_client.send_request(item_name)
    rclpy.shutdown()

if __name__ == '__main__':
    main()