/* @k10d dispatch_mode_transition_10522484 @ 0x10522484
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches a virtual call and updates state fields based on a mode parameter.
 * summary:
 *   The function takes a pointer to an object (param_1) and a mode integer (param_2). If
 *   param_2 is 0 or 1, it calls copy_struct_array twice with specific offsets and then
 *   invokes a virtual method (slot 2) with arguments 0x1000000 and 0. If param_2 is 2 and
 *   param_1[10] is non-zero, it invokes the same virtual method. It clears param_1[3] and
 *   returns a status code (0, 1, or 3).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_transition_10522484(int *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 3;
  if ((param_2 == 0) || (param_2 == 1)) {
    copy_struct_array(param_1[2],param_1 + 9,1,0);
    copy_struct_array(param_1[2],param_1 + 10,1,1);
    (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1,0x1000000,0);
    uVar1 = 0;
  }
  else if ((param_2 == 2) && (param_1[10] != 0)) {
    (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1,0x1000000,0);
    uVar1 = 1;
  }
  param_1[3] = 0;
  return uVar1;
}
