import rclpy
from rclpy.node import Node 
from customized_interfaces.srv import CheckStock

class StockCheckerServiceServer(Node):
    def __init__(self):
        super().__init__('stock_checker_service_server')
        self.srv=self.create_service(CheckStock,'check_stock',self.check_stock_callback)
        self.get_logger().info('Stock Checker Service is running....')
        self.stock_levels = {'item1': 10, 'item2': 5, 'item3': 0}

    def check_stock_callback(self,request,response):
        item_name = request.item_name
        response.stock_level = self.stock_levels.get(item_name, 0)
        self.get_logger().info(f'Received stock check request for item: {item_name}. Stock level: {response.stock_level}')
        return response
def main(args=None):
    rclpy.init(args=args)
    stock_checker_service_server = StockCheckerServiceServer()
    rclpy.spin(stock_checker_service_server)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
        


