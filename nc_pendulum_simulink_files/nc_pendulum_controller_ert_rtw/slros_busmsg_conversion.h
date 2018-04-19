#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <gazebo_msgs/LinkStates.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Vector3.h>
#include <std_msgs/Float64.h>
#include "nc_pendulum_controller_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(gazebo_msgs::LinkStates* msgPtr, SL_Bus_nc_pendulum_controller_gazebo_msgs_LinkStates const* busPtr);
void convertToBus(SL_Bus_nc_pendulum_controller_gazebo_msgs_LinkStates* busPtr, gazebo_msgs::LinkStates const* msgPtr);

void convertFromBus(geometry_msgs::Point* msgPtr, SL_Bus_nc_pendulum_controller_geometry_msgs_Point const* busPtr);
void convertToBus(SL_Bus_nc_pendulum_controller_geometry_msgs_Point* busPtr, geometry_msgs::Point const* msgPtr);

void convertFromBus(geometry_msgs::Pose* msgPtr, SL_Bus_nc_pendulum_controller_geometry_msgs_Pose const* busPtr);
void convertToBus(SL_Bus_nc_pendulum_controller_geometry_msgs_Pose* busPtr, geometry_msgs::Pose const* msgPtr);

void convertFromBus(geometry_msgs::Quaternion* msgPtr, SL_Bus_nc_pendulum_controller_geometry_msgs_Quaternion const* busPtr);
void convertToBus(SL_Bus_nc_pendulum_controller_geometry_msgs_Quaternion* busPtr, geometry_msgs::Quaternion const* msgPtr);

void convertFromBus(geometry_msgs::Twist* msgPtr, SL_Bus_nc_pendulum_controller_geometry_msgs_Twist const* busPtr);
void convertToBus(SL_Bus_nc_pendulum_controller_geometry_msgs_Twist* busPtr, geometry_msgs::Twist const* msgPtr);

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_nc_pendulum_controller_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_nc_pendulum_controller_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr);

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_nc_pendulum_controller_std_msgs_Float64 const* busPtr);
void convertToBus(SL_Bus_nc_pendulum_controller_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr);


#endif
