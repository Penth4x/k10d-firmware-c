/* @k10d find_last_nonzero_array_element @ 0x104773a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint find_last_nonzero_array_element(void *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 - 1U & 0xffff;
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)((int)param_1 + 8) + uVar1 * 4) != 0) {
        return uVar1;
      }
      uVar1 = uVar1 - 1 & 0xffff;
    } while (uVar1 != 0);
  }
  return 0;
}
