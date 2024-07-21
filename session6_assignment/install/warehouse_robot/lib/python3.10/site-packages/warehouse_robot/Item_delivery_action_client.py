import rclpy
from rclpy.node import Node
from customized_interfaces.action import DeliveryItem
from rclpy.action import ActionClient
import sys
class ItemDeliveryActionClient(Node):

    def __init__(self):
        super().__init__('item_delivery_action_client')
        self._action_client = ActionClient(self, DeliveryItem, 'delivery_item')
    #sending the goal to the server with item name and quantity to deliver 
    def send_goal(self, item_name, quantity):
        goal_msg = DeliveryItem.Goal()
        goal_msg.item_name = item_name
        goal_msg.quantity = quantity
    #wait for server to accept the goal
        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)
    
    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Result: success={result.success}, message={result.message}')

    def feedback_callback(self, feedback_msg):
        self.get_logger().info(f'Feedback: {feedback_msg.feedback.status}')

def main(args=None):
    rclpy.init(args=args)
    #check if missing arguments either item name or quantity 
    if len(sys.argv) < 3:
        print("Usage: ros2 run warehouse_robot item_delivery_action_client <item_name> <quantity>")
        return
    #the client should give the server 2 arguments item name and quantity
    item_name = sys.argv[1]
    quantity = int(sys.argv[2])

    action_client = ItemDeliveryActionClient()
    action_client.send_goal(item_name, quantity)

    rclpy.spin(action_client)
    action_client.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()