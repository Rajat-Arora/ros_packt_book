#include <actionlib/server/simple_action_server.h>
#include "mastering_ros_demo_pkg/Demo_actionAction.h"

class Demo_actionAction{







};





int main(int argc, char **argv){
	ros::init(argc, argv, "demo_action");
	ROS_INFO("Starting Demo Action Server");
 	Demo_actionAction demo_action_obj(ros::this_node::getName());
  	ros::spin();
	return 0;
}
