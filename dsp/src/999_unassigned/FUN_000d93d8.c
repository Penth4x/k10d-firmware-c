/* @k10d FUN_000d93d8 @ 0x000d93d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int FUN_000d93d8(short param_1,short param_2,short param_3)

{
  uint32_t uVar1;
  short sVar2;
  
  uVar1 = compute_signed_half_sum(2,(int)(short)(0xa0 - param_1));
  sVar2 = clamp_value_to_range_000d9ac0((int)(short)uVar1,0xfffffff8,0);
  uVar1 = compute_signed_half_sum(0x10,(int)(short)((param_3 + 8 + sVar2) * param_2));
  return (int)(short)uVar1;
}
