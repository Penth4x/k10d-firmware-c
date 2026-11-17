/* @k10d clamp_and_call_subroutine @ 0x104ad8ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_call_subroutine(int param_1,uint32_t param_2,int param_3)

{
  if (0x10 < param_3) {
    param_3 = 0x10;
  }
  (*(code *)0x104aca1e/*ROM*/)(*(int *)(param_1 + 0x20) + 0x10,param_2,param_3,0);
  return;
}
