/* @k10d compute_16bit_product @ 0x10482a10
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_16bit_product(uint32_t param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 * param_3) >> 0xc;
  return uVar1 + (param_2 * param_3 + uVar1 * -0x1000 != 0) & 0xffff;
}
