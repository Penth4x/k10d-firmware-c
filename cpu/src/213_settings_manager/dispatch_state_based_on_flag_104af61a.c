/* @k10d dispatch_state_based_on_flag_104af61a @ 0x104af61a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a state flag in the object and dispatches to a virtual method or helper based on
 *   the flag value.
 * summary:
 *   The function reads param_1[4] as a state flag. If it is 0, it returns 4. Otherwise, it
 *   performs a virtual call (slot 9) on the object pointed to by *param_1. If the result is
 *   0 or the flag is 1, it sets the flag to 1 and returns 3. If the flag is 4, it calls
 *   check_range_overlap with the original parameters and returns its result; otherwise, it
 *   returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_based_on_flag_104af61a(int *param_1,uint param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  if (param_1[4] == 0) {
    uVar1 = 4;
  }
  else {
    iVar2 = *(int *)(*param_1 + 4);
    iVar2 = (**(code **)(iVar2 + 0x4c))(*param_1 + (int)*(short *)(iVar2 + 0x48));
    if ((iVar2 == 0) || (param_1[4] == 1)) {
      param_1[4] = 1;
      uVar1 = 3;
    }
    else {
      uVar1 = 1;
      if (param_1[3] == 4) {
        uVar1 = check_range_overlap(param_1,param_2,param_3);
      }
    }
  }
  return uVar1;
}
