#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block nc_pendulum_controller/Subscribe
extern SimulinkSubscriber<gazebo_msgs::ModelStates, SL_Bus_nc_pendulum_controller_gazebo_msgs_ModelStates> Sub_nc_pendulum_controller_12;

void slros_node_init(int argc, char** argv);

#endif
