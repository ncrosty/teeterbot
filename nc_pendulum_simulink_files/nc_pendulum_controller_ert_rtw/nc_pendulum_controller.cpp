//
// File: nc_pendulum_controller.cpp
//
// Code generated for Simulink model 'nc_pendulum_controller'.
//
// Model version                  : 1.223
// Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
// C/C++ source code generated on : Wed Apr 18 13:56:33 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "nc_pendulum_controller.h"
#include "nc_pendulum_controller_private.h"
#define nc_pendulum_con_MessageQueueLen (1)

const SL_Bus_nc_pendulum_controller_std_msgs_Float64
  nc_pendulum_controller_rtZSL_Bus_nc_pendulum_controller_std_msgs_Float64 = {
  0.0                                  // Data
} ;                                    // SL_Bus_nc_pendulum_controller_std_msgs_Float64 ground 

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T tmp;
  int32_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u1 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u0 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2((real_T)tmp_0, (real_T)tmp);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

void nc_pendulum_controller_cModelClass::SystemProp_matlabCodegenSet_oen
  (robotics_slros_internal_blo_o_T *obj, boolean_T value)
{
  // Start for MATLABSystem: '<S11>/SourceBlock'
  obj->matlabCodegenIsDeleted = value;
}

void nc_pendulum_controller_cModelClass::matlabCodegenHandle_matlabC_oen
  (robotics_slros_internal_blo_o_T *obj)
{
  // Start for MATLABSystem: '<S11>/SourceBlock'
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSet_oen(obj, true);
  }

  // End of Start for MATLABSystem: '<S11>/SourceBlock'
}

void nc_pendulum_controller_cModelClass::SystemProp_matlabCodegenSetAnyP
  (robotics_slros_internal_block_T *obj, boolean_T value)
{
  // Start for MATLABSystem: '<S8>/SinkBlock' incorporates:
  //   MATLABSystem: '<S10>/SinkBlock'
  //   MATLABSystem: '<S9>/SinkBlock'

  obj->matlabCodegenIsDeleted = value;
}

void nc_pendulum_controller_cModelClass::matlabCodegenHandle_matlabCodeg
  (robotics_slros_internal_block_T *obj)
{
  // Start for MATLABSystem: '<S8>/SinkBlock' incorporates:
  //   MATLABSystem: '<S10>/SinkBlock'
  //   MATLABSystem: '<S9>/SinkBlock'

  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
  }

  // End of Start for MATLABSystem: '<S8>/SinkBlock'
}

// Model step function
void nc_pendulum_controller_cModelClass::step()
{
  uint32_T b_varargout_2_Name_SL_Info_Curr;
  uint32_T b_varargout_2_Name_SL_Info_Rece;
  uint32_T b_varargout_2_Pose_SL_Info_Curr;
  uint32_T b_varargout_2_Pose_SL_Info_Rece;
  uint32_T b_varargout_2_Twist_SL_Info_Cur;
  uint32_T b_varargout_2_Twist_SL_Info_Rec;
  boolean_T b_varargout_1;
  int32_T i;
  SL_Bus_nc_pendulum_controller_std_msgs_String *b_varargout_2_Name;
  SL_Bus_nc_pendulum_controller_geometry_msgs_Pose *b_varargout_2_Pose;
  SL_Bus_nc_pendulum_controller_geometry_msgs_Twist *b_varargout_2_Twist;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S11>/SourceBlock'
  b_varargout_1 = Sub_nc_pendulum_controller_12.getLatestMessage
    (&nc_pendulum_controller_B.b_varargout_2);
  b_varargout_2_Name_SL_Info_Curr =
    nc_pendulum_controller_B.b_varargout_2.Name_SL_Info.CurrentLength;
  b_varargout_2_Name_SL_Info_Rece =
    nc_pendulum_controller_B.b_varargout_2.Name_SL_Info.ReceivedLength;
  b_varargout_2_Pose_SL_Info_Curr =
    nc_pendulum_controller_B.b_varargout_2.Pose_SL_Info.CurrentLength;
  b_varargout_2_Pose_SL_Info_Rece =
    nc_pendulum_controller_B.b_varargout_2.Pose_SL_Info.ReceivedLength;
  b_varargout_2_Twist_SL_Info_Cur =
    nc_pendulum_controller_B.b_varargout_2.Twist_SL_Info.CurrentLength;
  b_varargout_2_Twist_SL_Info_Rec =
    nc_pendulum_controller_B.b_varargout_2.Twist_SL_Info.ReceivedLength;

  // MATLABSystem: '<S11>/SourceBlock'
  nc_pendulum_controller_B.SourceBlock_o1 = b_varargout_1;
  nc_pendulum_controller_B.SourceBlock_o2.Name_SL_Info.CurrentLength =
    b_varargout_2_Name_SL_Info_Curr;
  nc_pendulum_controller_B.SourceBlock_o2.Name_SL_Info.ReceivedLength =
    b_varargout_2_Name_SL_Info_Rece;
  nc_pendulum_controller_B.SourceBlock_o2.Pose_SL_Info.CurrentLength =
    b_varargout_2_Pose_SL_Info_Curr;
  nc_pendulum_controller_B.SourceBlock_o2.Pose_SL_Info.ReceivedLength =
    b_varargout_2_Pose_SL_Info_Rece;
  for (i = 0; i < 16; i++) {
    // Start for MATLABSystem: '<S11>/SourceBlock'
    b_varargout_2_Name = &nc_pendulum_controller_B.b_varargout_2.Name[i];
    b_varargout_2_Pose = &nc_pendulum_controller_B.b_varargout_2.Pose[i];
    b_varargout_2_Twist = &nc_pendulum_controller_B.b_varargout_2.Twist[i];

    // MATLABSystem: '<S11>/SourceBlock'
    nc_pendulum_controller_B.SourceBlock_o2.Name[i] = *b_varargout_2_Name;
    nc_pendulum_controller_B.SourceBlock_o2.Pose[i] = *b_varargout_2_Pose;
    nc_pendulum_controller_B.SourceBlock_o2.Twist[i] = *b_varargout_2_Twist;
  }

  // MATLABSystem: '<S11>/SourceBlock'
  nc_pendulum_controller_B.SourceBlock_o2.Twist_SL_Info.CurrentLength =
    b_varargout_2_Twist_SL_Info_Cur;
  nc_pendulum_controller_B.SourceBlock_o2.Twist_SL_Info.ReceivedLength =
    b_varargout_2_Twist_SL_Info_Rec;

  // Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S13>/Enable'

  if (nc_pendulum_controller_B.SourceBlock_o1) {
    // Inport: '<S13>/In1'
    nc_pendulum_controller_B.In1 = nc_pendulum_controller_B.SourceBlock_o2;
  }

  // End of Outputs for SubSystem: '<S11>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // MATLAB Function: '<Root>/MATLAB Function'
  nc_pendulum_controller_B.VectorConcatenate[0] =
    nc_pendulum_controller_B.In1.Pose[1].Orientation.W;
  nc_pendulum_controller_B.VectorConcatenate[1] =
    nc_pendulum_controller_B.In1.Pose[1].Orientation.X;
  nc_pendulum_controller_B.VectorConcatenate[2] =
    nc_pendulum_controller_B.In1.Pose[1].Orientation.Y;
  nc_pendulum_controller_B.VectorConcatenate[3] =
    nc_pendulum_controller_B.In1.Pose[1].Orientation.Z;

  // RelationalOperator: '<S4>/Compare'
  nc_pendulum_controller_B.Compare = nc_pendulum_controller_B.SourceBlock_o1;

  // Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S5>/Enable'

  if (nc_pendulum_controller_B.Compare) {
    // MATLABSystem: '<S5>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.qw = nc_pendulum_controller_B.VectorConcatenate[0];

    // Start for MATLABSystem: '<S5>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.aSinInput = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.aSinInput *
      nc_pendulum_controller_B.aSinInput;
    nc_pendulum_controller_B.b_z1[0] = nc_pendulum_controller_B.y;

    // MATLABSystem: '<S5>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.in[0] = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.qw = nc_pendulum_controller_B.VectorConcatenate[1];

    // Start for MATLABSystem: '<S5>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.aSinInput = nc_pendulum_controller_B.y;
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.aSinInput *
      nc_pendulum_controller_B.aSinInput;
    nc_pendulum_controller_B.b_z1[1] = nc_pendulum_controller_B.y;

    // MATLABSystem: '<S5>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.in[1] = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.qw = nc_pendulum_controller_B.VectorConcatenate[2];

    // Start for MATLABSystem: '<S5>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.qx = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.aSinInput = nc_pendulum_controller_B.qx;
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.aSinInput *
      nc_pendulum_controller_B.aSinInput;
    nc_pendulum_controller_B.b_z1[2] = nc_pendulum_controller_B.y;

    // MATLABSystem: '<S5>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.in[2] = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.qw = nc_pendulum_controller_B.VectorConcatenate[3];

    // Start for MATLABSystem: '<S5>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.qy = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.aSinInput = nc_pendulum_controller_B.qy;
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.aSinInput *
      nc_pendulum_controller_B.aSinInput;
    nc_pendulum_controller_B.b_z1[3] = nc_pendulum_controller_B.y;

    // MATLABSystem: '<S5>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.in[3] = nc_pendulum_controller_B.qw;

    // Start for MATLABSystem: '<S5>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.b_z1[0];
    nc_pendulum_controller_B.y += nc_pendulum_controller_B.b_z1[1];
    nc_pendulum_controller_B.y += nc_pendulum_controller_B.b_z1[2];
    nc_pendulum_controller_B.y += nc_pendulum_controller_B.b_z1[3];
    nc_pendulum_controller_B.y = sqrt(nc_pendulum_controller_B.y);
    nc_pendulum_controller_B.aSinInput = 1.0 / nc_pendulum_controller_B.y;
    nc_pendulum_controller_B.qw = nc_pendulum_controller_B.in[0];
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.in[1];
    nc_pendulum_controller_B.qx = nc_pendulum_controller_B.in[2];
    nc_pendulum_controller_B.qy = nc_pendulum_controller_B.in[3];
    for (i = 0; i < 4; i++) {
      nc_pendulum_controller_B.b_z1[0] = nc_pendulum_controller_B.qw;
      nc_pendulum_controller_B.b_z1[1] = nc_pendulum_controller_B.y;
      nc_pendulum_controller_B.b_z1[2] = nc_pendulum_controller_B.qx;
      nc_pendulum_controller_B.b_z1[3] = nc_pendulum_controller_B.qy;
      nc_pendulum_controller_B.in[i] = nc_pendulum_controller_B.b_z1[i] *
        nc_pendulum_controller_B.aSinInput;
    }

    nc_pendulum_controller_B.qw = nc_pendulum_controller_B.in[0];
    nc_pendulum_controller_B.qx = nc_pendulum_controller_B.in[1];
    nc_pendulum_controller_B.qy = nc_pendulum_controller_B.in[2];
    nc_pendulum_controller_B.qz = nc_pendulum_controller_B.in[3];
    nc_pendulum_controller_B.aSinInput = (nc_pendulum_controller_B.qx *
      nc_pendulum_controller_B.qz - nc_pendulum_controller_B.qw *
      nc_pendulum_controller_B.qy) * -2.0;
    nc_pendulum_controller_B.b = nc_pendulum_controller_B.aSinInput;
    if (nc_pendulum_controller_B.aSinInput > 1.0) {
      nc_pendulum_controller_B.b = 1.0;
    }

    nc_pendulum_controller_B.aSinInput = nc_pendulum_controller_B.b;
    nc_pendulum_controller_B.c = nc_pendulum_controller_B.aSinInput;
    if (nc_pendulum_controller_B.aSinInput < -1.0) {
      nc_pendulum_controller_B.c = -1.0;
    }

    nc_pendulum_controller_B.aSinInput = nc_pendulum_controller_B.c;
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.qw *
      nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.y_c = nc_pendulum_controller_B.qx *
      nc_pendulum_controller_B.qx;
    nc_pendulum_controller_B.y_k = nc_pendulum_controller_B.qy *
      nc_pendulum_controller_B.qy;
    nc_pendulum_controller_B.y_cx = nc_pendulum_controller_B.qz *
      nc_pendulum_controller_B.qz;
    nc_pendulum_controller_B.y_b = (nc_pendulum_controller_B.qx *
      nc_pendulum_controller_B.qy + nc_pendulum_controller_B.qw *
      nc_pendulum_controller_B.qz) * 2.0;
    nc_pendulum_controller_B.y = ((nc_pendulum_controller_B.y +
      nc_pendulum_controller_B.y_c) - nc_pendulum_controller_B.y_k) -
      nc_pendulum_controller_B.y_cx;
    nc_pendulum_controller_B.out_idx_0 = rt_atan2d_snf
      (nc_pendulum_controller_B.y_b, nc_pendulum_controller_B.y);
    nc_pendulum_controller_B.aSinInput = asin(nc_pendulum_controller_B.aSinInput);
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.qw *
      nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.y_c = nc_pendulum_controller_B.qx *
      nc_pendulum_controller_B.qx;
    nc_pendulum_controller_B.y_k = nc_pendulum_controller_B.qy *
      nc_pendulum_controller_B.qy;
    nc_pendulum_controller_B.y_cx = nc_pendulum_controller_B.qz *
      nc_pendulum_controller_B.qz;
    nc_pendulum_controller_B.y_b = (nc_pendulum_controller_B.qy *
      nc_pendulum_controller_B.qz + nc_pendulum_controller_B.qw *
      nc_pendulum_controller_B.qx) * 2.0;
    nc_pendulum_controller_B.y = ((nc_pendulum_controller_B.y -
      nc_pendulum_controller_B.y_c) - nc_pendulum_controller_B.y_k) +
      nc_pendulum_controller_B.y_cx;
    nc_pendulum_controller_B.qw = rt_atan2d_snf(nc_pendulum_controller_B.y_b,
      nc_pendulum_controller_B.y);

    // MATLABSystem: '<S5>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.CoordinateTransformationConvers[0] =
      nc_pendulum_controller_B.out_idx_0;
    nc_pendulum_controller_B.CoordinateTransformationConvers[1] =
      nc_pendulum_controller_B.aSinInput;
    nc_pendulum_controller_B.CoordinateTransformationConvers[2] =
      nc_pendulum_controller_B.qw;
  }

  // End of Outputs for SubSystem: '<Root>/Enabled Subsystem'

  // Gain: '<S7>/Proportional Gain'
  nc_pendulum_controller_B.ProportionalGain = 50.0 *
    nc_pendulum_controller_B.CoordinateTransformationConvers[1];

  // DiscreteIntegrator: '<S7>/Integrator'
  nc_pendulum_controller_B.Integrator =
    nc_pendulum_controller_DW.Integrator_DSTATE;

  // Gain: '<S7>/Derivative Gain'
  nc_pendulum_controller_B.DerivativeGain = 10.0 *
    nc_pendulum_controller_B.CoordinateTransformationConvers[1];

  // SampleTimeMath: '<S12>/TSamp'
  //
  //  About '<S12>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )

  nc_pendulum_controller_B.TSamp = nc_pendulum_controller_B.DerivativeGain *
    100.0;

  // Delay: '<S12>/UD'
  nc_pendulum_controller_B.UD = nc_pendulum_controller_DW.UD_DSTATE;

  // Sum: '<S12>/Diff'
  nc_pendulum_controller_B.Diff = nc_pendulum_controller_B.TSamp -
    nc_pendulum_controller_B.UD;

  // Outport: '<Root>/Out1' incorporates:
  //   Sum: '<S7>/Sum'

  nc_pendulum_controller_Y.Out1 = (nc_pendulum_controller_B.ProportionalGain +
    nc_pendulum_controller_B.Integrator) + nc_pendulum_controller_B.Diff;

  // Gain: '<Root>/Gain' incorporates:
  //   Outport: '<Root>/Out1'

  nc_pendulum_controller_B.Gain = 0.5 * nc_pendulum_controller_Y.Out1;

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<S1>/Constant'

  nc_pendulum_controller_B.BusAssignment1 =
    nc_pendulum_controller_rtZSL_Bus_nc_pendulum_controller_std_msgs_Float64;
  nc_pendulum_controller_B.BusAssignment1.Data = nc_pendulum_controller_B.Gain;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S8>/SinkBlock'
  nc_pendulum_controller_B.aSinInput =
    nc_pendulum_controller_B.BusAssignment1.Data;

  // Start for MATLABSystem: '<S8>/SinkBlock'
  nc_pendulum_controller_B.busstruct.Data = nc_pendulum_controller_B.aSinInput;
  Pub_nc_pendulum_controller_6.publish(&nc_pendulum_controller_B.busstruct);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // Gain: '<Root>/Gain1' incorporates:
  //   Outport: '<Root>/Out1'

  nc_pendulum_controller_B.Gain1 = 0.5 * nc_pendulum_controller_Y.Out1;

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Constant: '<S2>/Constant'

  nc_pendulum_controller_B.BusAssignment2 =
    nc_pendulum_controller_rtZSL_Bus_nc_pendulum_controller_std_msgs_Float64;
  nc_pendulum_controller_B.BusAssignment2.Data = nc_pendulum_controller_B.Gain1;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S9>/SinkBlock'
  nc_pendulum_controller_B.aSinInput =
    nc_pendulum_controller_B.BusAssignment2.Data;

  // Start for MATLABSystem: '<S9>/SinkBlock'
  nc_pendulum_controller_B.busstruct_p.Data = nc_pendulum_controller_B.aSinInput;
  Pub_nc_pendulum_controller_18.publish(&nc_pendulum_controller_B.busstruct_p);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment3' incorporates:
  //   Constant: '<S3>/Constant'
  //   Outport: '<Root>/Out1'

  nc_pendulum_controller_B.BusAssignment3 =
    nc_pendulum_controller_rtZSL_Bus_nc_pendulum_controller_std_msgs_Float64;
  nc_pendulum_controller_B.BusAssignment3.Data = nc_pendulum_controller_Y.Out1;

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // MATLABSystem: '<S10>/SinkBlock'
  nc_pendulum_controller_B.aSinInput =
    nc_pendulum_controller_B.BusAssignment3.Data;

  // Start for MATLABSystem: '<S10>/SinkBlock'
  nc_pendulum_controller_B.busstruct_c.Data = nc_pendulum_controller_B.aSinInput;
  Pub_nc_pendulum_controller_174.publish(&nc_pendulum_controller_B.busstruct_c);

  // End of Outputs for SubSystem: '<Root>/Publish2'

  // Gain: '<S7>/Integral Gain'
  nc_pendulum_controller_B.IntegralGain = 10.0 *
    nc_pendulum_controller_B.CoordinateTransformationConvers[1];

  // Update for DiscreteIntegrator: '<S7>/Integrator'
  nc_pendulum_controller_DW.Integrator_DSTATE += 0.01 *
    nc_pendulum_controller_B.IntegralGain;

  // Update for Delay: '<S12>/UD'
  nc_pendulum_controller_DW.UD_DSTATE = nc_pendulum_controller_B.TSamp;
}

// Model initialize function
void nc_pendulum_controller_cModelClass::initialize()
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize error status
  rtmSetErrorStatus(getRTM(), (NULL));

  // block I/O
  (void) memset(((void *) &nc_pendulum_controller_B), 0,
                sizeof(B_nc_pendulum_controller_T));

  // states (dwork)
  (void) memset((void *)&nc_pendulum_controller_DW, 0,
                sizeof(DW_nc_pendulum_controller_T));

  // external outputs
  nc_pendulum_controller_Y.Out1 = 0.0;

  {
    robotics_slros_internal_blo_o_T *b_obj;
    char_T zeroDelimTopic[20];
    robotics_slcore_internal_bloc_T *b_obj_0;
    robotics_slros_internal_block_T *b_obj_1;
    char_T zeroDelimTopic_0[12];
    static const char_T tmp[19] = { '/', 'g', 'a', 'z', 'e', 'b', 'o', '/', 'l',
      'i', 'n', 'k', '_', 's', 't', 'a', 't', 'e', 's' };

    static const char_T tmp_0[26] = { '/', 't', 'e', 'e', 't', 'e', 'r', 'b',
      'o', 't', '/', 'l', 'e', 'f', 't', '_', 't', 'o', 'r', 'q', 'u', 'e', '_',
      'c', 'm', 'd' };

    static const char_T tmp_1[27] = { '/', 't', 'e', 'e', 't', 'e', 'r', 'b',
      'o', 't', '/', 'r', 'i', 'g', 'h', 't', '_', 't', 'o', 'r', 'q', 'u', 'e',
      '_', 'c', 'm', 'd' };

    static const char_T tmp_2[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '_', 't', 'q' };

    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S11>/SourceBlock'
    nc_pendulum_controller_DW.obj_em.matlabCodegenIsDeleted = true;
    b_obj = &nc_pendulum_controller_DW.obj_em;
    b_obj->isInitialized = 0;
    b_obj->matlabCodegenIsDeleted = false;
    nc_pendulum_controller_DW.objisempty = true;
    b_obj = &nc_pendulum_controller_DW.obj_em;
    b_obj->isSetupComplete = false;
    b_obj->isInitialized = 1;
    for (i = 0; i < 19; i++) {
      zeroDelimTopic[i] = tmp[i];
    }

    zeroDelimTopic[19] = '\x00';
    Sub_nc_pendulum_controller_12.createSubscriber(zeroDelimTopic,
      nc_pendulum_con_MessageQueueLen);
    b_obj->isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for Enabled SubSystem: '<Root>/Enabled Subsystem'
    // Start for MATLABSystem: '<S5>/Coordinate Transformation Conversion'
    b_obj_0 = &nc_pendulum_controller_DW.obj_h;
    b_obj_0->isInitialized = 0;
    nc_pendulum_controller_DW.objisempty_f = true;
    b_obj_0 = &nc_pendulum_controller_DW.obj_h;
    b_obj_0->isInitialized = 1;

    // End of Start for SubSystem: '<Root>/Enabled Subsystem'

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    nc_pendulum_controller_DW.obj_e.matlabCodegenIsDeleted = true;
    b_obj_1 = &nc_pendulum_controller_DW.obj_e;
    b_obj_1->isInitialized = 0;
    b_obj_1->matlabCodegenIsDeleted = false;
    nc_pendulum_controller_DW.objisempty_a = true;
    b_obj_1 = &nc_pendulum_controller_DW.obj_e;
    b_obj_1->isSetupComplete = false;
    b_obj_1->isInitialized = 1;
    for (i = 0; i < 26; i++) {
      nc_pendulum_controller_B.zeroDelimTopic_m[i] = tmp_0[i];
    }

    nc_pendulum_controller_B.zeroDelimTopic_m[26] = '\x00';
    Pub_nc_pendulum_controller_6.createPublisher
      (nc_pendulum_controller_B.zeroDelimTopic_m,
       nc_pendulum_con_MessageQueueLen);
    b_obj_1->isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // Start for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S9>/SinkBlock'
    nc_pendulum_controller_DW.obj_l.matlabCodegenIsDeleted = true;
    b_obj_1 = &nc_pendulum_controller_DW.obj_l;
    b_obj_1->isInitialized = 0;
    b_obj_1->matlabCodegenIsDeleted = false;
    nc_pendulum_controller_DW.objisempty_d = true;
    b_obj_1 = &nc_pendulum_controller_DW.obj_l;
    b_obj_1->isSetupComplete = false;
    b_obj_1->isInitialized = 1;
    for (i = 0; i < 27; i++) {
      nc_pendulum_controller_B.zeroDelimTopic[i] = tmp_1[i];
    }

    nc_pendulum_controller_B.zeroDelimTopic[27] = '\x00';
    Pub_nc_pendulum_controller_18.createPublisher
      (nc_pendulum_controller_B.zeroDelimTopic, nc_pendulum_con_MessageQueueLen);
    b_obj_1->isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish1'

    // Start for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S10>/SinkBlock'
    nc_pendulum_controller_DW.obj.matlabCodegenIsDeleted = true;
    b_obj_1 = &nc_pendulum_controller_DW.obj;
    b_obj_1->isInitialized = 0;
    b_obj_1->matlabCodegenIsDeleted = false;
    nc_pendulum_controller_DW.objisempty_l = true;
    b_obj_1 = &nc_pendulum_controller_DW.obj;
    b_obj_1->isSetupComplete = false;
    b_obj_1->isInitialized = 1;
    for (i = 0; i < 11; i++) {
      zeroDelimTopic_0[i] = tmp_2[i];
    }

    zeroDelimTopic_0[11] = '\x00';
    Pub_nc_pendulum_controller_174.createPublisher(zeroDelimTopic_0,
      nc_pendulum_con_MessageQueueLen);
    b_obj_1->isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish2'
  }
}

// Model terminate function
void nc_pendulum_controller_cModelClass::terminate()
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S11>/SourceBlock'
  matlabCodegenHandle_matlabC_oen(&nc_pendulum_controller_DW.obj_em);

  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&nc_pendulum_controller_DW.obj_e);

  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S9>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&nc_pendulum_controller_DW.obj_l);

  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Terminate for MATLABSystem: '<S10>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&nc_pendulum_controller_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Publish2'
}

// Constructor
nc_pendulum_controller_cModelClass::nc_pendulum_controller_cModelClass()
{
}

// Destructor
nc_pendulum_controller_cModelClass::~nc_pendulum_controller_cModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_nc_pendulum_controll_T * nc_pendulum_controller_cModelClass::getRTM()
{
  return (&nc_pendulum_controller_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
