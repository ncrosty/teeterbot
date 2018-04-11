#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <gazebo_msgs/ModelStates.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Pose.h>
#include <ignition/math2/ignition/math.hh>


ros::Publisher pub_left_wheel_torque;
ros::Publisher pub_right_wheel_torque;

void recvAngle(const gazebo_msgs::ModelStates& msg)

{
  
  double yaw, pitch, roll;
  
  
  geometry_msgs::Pose pose;
  pose = msg.pose[2];
  

  ignition::math::Quaternion<double> ignition_orientation(pose.orientation.w, pose.orientation.x, pose.orientation.y, pose.orientation.z);
  
  roll = ignition_orientation.Roll();
  pitch = ignition_orientation.Pitch();
  yaw = ignition_orientation.Yaw();
  
   
  
  double length=0.8;

  std_msgs::Float64 left_torque;
  std_msgs::Float64 right_torque;
  
  double fullTorque = pitch * 1231194849.32775;
  
  //fullTorque = 0;
  
  left_torque.data = fullTorque / (length * 2);
  right_torque.data = fullTorque / (length * 2);
  
  
  pub_left_wheel_torque.publish(left_torque);
  pub_right_wheel_torque.publish(right_torque);
  
  ROS_INFO("pitch (%f) \n",pitch);
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "lqr_control");
  ros::NodeHandle node;
  
  ros::Subscriber sub_pitch = node.subscribe("/gazebo/link_states", 1, recvAngle);
  
  pub_left_wheel_torque = node.advertise<std_msgs::Float64>("teeterbot/left_torque_cmd", 1);
  pub_right_wheel_torque = node.advertise<std_msgs::Float64>("/teeterbot/right_torque_cmd", 1);
  
  ros::spin();
  return 0;
}
