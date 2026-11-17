/* @k10d find_first_nonzero_entry @ 0x10477374
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint find_first_nonzero_entry(void *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + 1U & 0xffff;
  if (uVar1 < 10000) {
    do {
      if (*(int *)(*(int *)((int)param_1 + 8) + uVar1 * 4) != 0) {
        return uVar1;
      }
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < 10000);
  }
  return 0;
}
