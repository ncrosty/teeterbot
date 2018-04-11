//
// File: nc_pendulum_controller.cpp
//
// Code generated for Simulink model 'nc_pendulum_controller'.
//
// Model version                  : 1.23
// Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
// C/C++ source code generated on : Wed Apr 11 15:10:05 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "nc_pendulum_controller.h"
#include "nc_pendulum_controller_private.h"
#define nc_pendulum_con_MessageQueueLen (1)

void nc_pendulum_controller_cModelClass::SystemProp_matlabCodegenSetAnyP
  (robotics_slros_internal_block_T *obj, boolean_T value)
{
  obj->matlabCodegenIsDeleted = value;
}

void nc_pendulum_controller_cModelClass::matlabCodegenHandle_matlabCodeg
  (robotics_slros_internal_block_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
  }
}

// Model step function
void nc_pendulum_controller_cModelClass::step()
{
  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S7>/SourceBlock'
  Sub_nc_pendulum_controller_12.getLatestMessage
    (&nc_pendulum_controller_B.b_varargout_2);

  // End of Outputs for SubSystem: '<Root>/Subscribe'
}

// Model initialize function
void nc_pendulum_controller_cModelClass::initialize()
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize error status
  rtmSetErrorStatus(getRTM(), (NULL));

  // states (dwork)
  (void) memset((void *)&nc_pendulum_controller_DW, 0,
                sizeof(DW_nc_pendulum_controller_T));

  {
    static const char_T tmp[19] = { '/', 'g', 'a', 'z', 'e', 'b', 'o', '/', 'l',
      'i', 'n', 'k', '_', 's', 't', 'a', 't', 'e', 's' };

    char_T tmp_0[20];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S7>/SourceBlock'
    nc_pendulum_controller_DW.obj.matlabCodegenIsDeleted = true;
    nc_pendulum_controller_DW.obj.isInitialized = 0;
    nc_pendulum_controller_DW.obj.matlabCodegenIsDeleted = false;
    nc_pendulum_controller_DW.obj.isSetupComplete = false;
    nc_pendulum_controller_DW.obj.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      tmp_0[i] = tmp[i];
    }

    tmp_0[19] = '\x00';
    Sub_nc_pendulum_controller_12.createSubscriber(tmp_0,
      nc_pendulum_con_MessageQueueLen);
    nc_pendulum_controller_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'
  }
}

// Model terminate function
void nc_pendulum_controller_cModelClass::terminate()
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  matlabCodegenHandle_matlabCodeg(&nc_pendulum_controller_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Subscribe'
}

// Constructor
nc_pendulum_controller_cModelClass::nc_pendulum_controller_cModelClass()
{
  static const P_nc_pendulum_controller_T nc_pendulum_controller_P_temp = {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S12>/Out1'

    {
      {
        {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        } }
      ,                                // Name

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // Name_SL_Info

      {
        {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        } }
      ,                                // Pose

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // Pose_SL_Info

      {
        {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        } }
      ,                                // Twist

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // Twist_SL_Info
    },

    // Computed Parameter: Constant_Value
    //  Referenced by: '<S7>/Constant'

    {
      {
        {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        }, {
          {
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
            0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
          ,                            // Data

          {
            0U,                        // CurrentLength
            0U                         // ReceivedLength
          }                            // Data_SL_Info
        } }
      ,                                // Name

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // Name_SL_Info

      {
        {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Position

          {
            0.0,                       // X
            0.0,                       // Y
            0.0,                       // Z
            0.0                        // W
          }                            // Orientation
        } }
      ,                                // Pose

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      },                               // Pose_SL_Info

      {
        {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        }, {
          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          },                           // Linear

          {
            0.0,                       // X
            0.0,                       // Y
            0.0                        // Z
          }                            // Angular
        } }
      ,                                // Twist

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // Twist_SL_Info
    }
  };                                   // Modifiable parameters

  // Initialize tunable parameters
  nc_pendulum_controller_P = nc_pendulum_controller_P_temp;
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
