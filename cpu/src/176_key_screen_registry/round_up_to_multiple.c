/* @k10d round_up_to_multiple @ 0x10482a36
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint round_up_to_multiple(uint32_t param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = param_3; (int)uVar1 < param_2; uVar1 = uVar1 + param_3 & 0xffff) {
  }
  uVar1 = uVar1 - param_2 & 0xffff;
  if (uVar1 != param_3) {
    uVar1 = uVar1 + param_3 & 0xffff;
  }
  return uVar1;
}
