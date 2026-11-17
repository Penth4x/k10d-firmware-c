/* @k10d forward_three_args_to_helper_1045e82c @ 0x1045e82c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes its three arguments unchanged to send_cpucom_command_sequence_1045f174 and
 *   returns the result.
 * summary:
 *   This is a thin wrapper that calls send_cpucom_command_sequence_1045f174 with param_1,
 *   param_2, and param_3, then returns the callee's return value. No local state, side
 *   effects, or camera-specific behavior are visible in this function itself. The actual
 *   role depends entirely on the unnamed callee send_cpucom_command_sequence_1045f174,
 *   which is not described.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int forward_three_args_to_helper_1045e82c(int param_1,void *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = send_cpucom_command_sequence_1045f174(param_1,param_2,param_3);
  return iVar1;
}
