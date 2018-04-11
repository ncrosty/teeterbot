#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <gazebo_msgs/ModelStates.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Pose.h>
#include <ignition/math2/ignition/math.hh>

#include "nc_pendulum_controller.h"

static nc_pendulum_controller_cModelClass nc_pendulum_controller_Obj;// Instance of model class 

void timerCallback(const ros::TimerEvent& event)
{

    nc_pendulum_controller_Obj.step();

    
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "marker_example");
  ros::NodeHandle n;
  ros::Timer marker_timer = n.createTimer(ros::Duration(0.05), timerCallback);
  
  nc_pendulum_controller_Obj.initialize();
    
  ros::spin();
  return 0;
}
