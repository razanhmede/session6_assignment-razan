import rclpy
from rclpy.node import Node
from customized_interfaces.action import DeliveryItem
from rclpy.action import ActionServer
import time

class ItemDeliveryActionServer(Node):

    def __init__(self):
        super().__init__('item_delivery_action_server')
    #should handle execution,goal,and cancelation
        self._action_server = ActionServer(self,DeliveryItem,'delivery_item',self.execute_callback,goal_callback=self.goal_callback,cancel_callback=self.cancel_callback,)
    #receives the goal request from the client and accepts it    
    def goal_callback(self, goal_request):
        self.get_logger().info('Received goal request')
        return rclpy.action.GoalResponse.ACCEPT
    #receives the request cancelation from the client and accepts it 
    def cancel_callback(self, goal_handle):
        self.get_logger().info('Received cancel request')
        return rclpy.action.CancelResponse.ACCEPT
    #executing the goal 
    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
    #giving feedback messages to the client during delivery
        feedback_msg = DeliveryItem.Feedback()
        feedback_msg.status = 'Delivering item'
    #handling the delivery process of the item by publishing a feedback message in each iteration
    #loop runs 13 times for testing purposes 
        for i in range(1, 14):
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Feedback: {feedback_msg.status}')
            time.sleep(1)
    #finished goal execution 
        goal_handle.succeed()
    #handling the result with a true bool message and a string message 
        result = DeliveryItem.Result()
        result.success = True
        result.message = 'Item delivered successfully!'

        return result

def main(args=None):
    rclpy.init(args=args)
    action_server = ItemDeliveryActionServer()
    rclpy.spin(action_server)
    action_server.destroy()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
