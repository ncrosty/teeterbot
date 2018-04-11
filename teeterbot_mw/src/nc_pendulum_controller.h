//
// File: nc_pendulum_controller.h
//
// Code generated for Simulink model 'nc_pendulum_controller'.
//
// Model version                  : 1.22
// Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
// C/C++ source code generated on : Wed Apr 11 15:01:57 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_nc_pendulum_controller_h_
#define RTW_HEADER_nc_pendulum_controller_h_
#include <stddef.h>
#include <string.h>
#ifndef nc_pendulum_controller_COMMON_INCLUDES_
# define nc_pendulum_controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // nc_pendulum_controller_COMMON_INCLUDES_ 

#include "nc_pendulum_controller_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_nc_pendulum_controller_gazebo_msgs_ModelStates b_varargout_2;
} B_nc_pendulum_controller_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  robotics_slros_internal_block_T obj; // '<S7>/SourceBlock'
} DW_nc_pendulum_controller_T;

// Parameters (default storage)
struct P_nc_pendulum_controller_T_ {
  SL_Bus_nc_pendulum_controller_gazebo_msgs_ModelStates Out1_Y0;// Computed Parameter: Out1_Y0
                                                                //  Referenced by: '<S12>/Out1'

  SL_Bus_nc_pendulum_controller_gazebo_msgs_ModelStates Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S7>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_nc_pendulum_controlle_T {
  const char_T *errorStatus;
};

// Class declaration for model nc_pendulum_controller
class nc_pendulum_controller_cModelClass {
  // public data and function members
 public:
  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  nc_pendulum_controller_cModelClass();

  // Destructor
  ~nc_pendulum_controller_cModelClass();

  // Real-Time Model get method
  RT_MODEL_nc_pendulum_controll_T * getRTM();

  // private data and function members
 private:
  // Tunable parameters
  P_nc_pendulum_controller_T nc_pendulum_controller_P;

  // Block signals
  B_nc_pendulum_controller_T nc_pendulum_controller_B;

  // Block states
  DW_nc_pendulum_controller_T nc_pendulum_controller_DW;

  // Real-Time Model
  RT_MODEL_nc_pendulum_controll_T nc_pendulum_controller_M;

  // private member function(s) for subsystem '<Root>'
  void SystemProp_matlabCodegenSetAnyP(robotics_slros_internal_block_T *obj,
    boolean_T value);
  void matlabCodegenHandle_matlabCodeg(robotics_slros_internal_block_T *obj);
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Gain' : Unused code path elimination
//  Block '<S3>/Derivative Gain' : Unused code path elimination
//  Block '<S3>/Filter' : Unused code path elimination
//  Block '<S3>/Filter Coefficient' : Unused code path elimination
//  Block '<S3>/Integral Gain' : Unused code path elimination
//  Block '<S3>/Integrator' : Unused code path elimination
//  Block '<S3>/Proportional Gain' : Unused code path elimination
//  Block '<S3>/Sum' : Unused code path elimination
//  Block '<S3>/SumD' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'nc_pendulum_controller'
//  '<S1>'   : 'nc_pendulum_controller/Blank Message1'
//  '<S2>'   : 'nc_pendulum_controller/Blank Message2'
//  '<S3>'   : 'nc_pendulum_controller/PID Controller'
//  '<S4>'   : 'nc_pendulum_controller/Publish'
//  '<S5>'   : 'nc_pendulum_controller/Publish1'
//  '<S6>'   : 'nc_pendulum_controller/Quaternions to Rotation Angles'
//  '<S7>'   : 'nc_pendulum_controller/Subscribe'
//  '<S8>'   : 'nc_pendulum_controller/Quaternions to Rotation Angles/Angle Calculation'
//  '<S9>'   : 'nc_pendulum_controller/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S10>'  : 'nc_pendulum_controller/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S11>'  : 'nc_pendulum_controller/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S12>'  : 'nc_pendulum_controller/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_nc_pendulum_controller_h_

//
// File trailer for generated code.
//
// [EOF]
//
