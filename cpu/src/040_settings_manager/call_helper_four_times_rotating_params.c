/* @k10d call_helper_four_times_rotating_params @ 0x1039979a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls dispatch_six_optional_items four times, rotating the second through fifth
 *   arguments and passing a distinct sixth parameter each time.
 * summary:
 *   The function invokes dispatch_six_optional_items in a loop-like sequence. For each of
 *   the four calls, it passes param_1 as the first argument, rotates the values of param_2
 *   through param_5 into the second through fourth argument positions, and supplies
 *   param_6, param_7, or param_8 (or zero) as the fifth argument. A local stack array is
 *   initialized with the current extra parameter and three zeros, then its first element is
 *   passed as the fifth argument to the callee. The remaining three elements of the stack
 *   array are always zero when passed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_four_times_rotating_params(void *param_1,int param_2,int param_3,int param_4,int param_5,uint32_t param_6,
                 uint32_t param_7,uint32_t param_8)

{
  uintptr_t sp;
  int *piVar1;
  
  piVar1 = (int *)&stack0xffffffd4;
  dispatch_six_optional_items(param_1,param_2,param_5,param_3,0,0,0,0);
  *piVar1 = param_6;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  dispatch_six_optional_items(param_1,param_3,param_2,param_4,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  *piVar1 = param_7;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  dispatch_six_optional_items(param_1,param_4,param_3,param_5,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  *piVar1 = param_8;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  dispatch_six_optional_items(param_1,param_5,param_4,param_2,*piVar1,piVar1[1],piVar1[2],piVar1[3]);
  return;
}
