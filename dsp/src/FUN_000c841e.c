/* @k10d FUN_000c841e @ 0x000c841e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000c841e(short param_1)

{
  short sVar1;
  
  sVar1 = clamp_value_to_range_000d9ac0((int)param_1,0xfffffffe,2);
  if (DAT_0003c3ac == '\0') {
    DAT_0003c450 = clamp_value_to_range_000d9ac0((int)(short)(sVar1 + (ushort)DAT_0003c450),0,3);
  }
  else {
    DAT_0003c450 = clamp_value_to_range_000d9ac0((int)(short)(sVar1 + (ushort)DAT_0003c450),0,5);
  }
  map_index_to_dat_0003c453(__frv_reg_unset(4));
  return;
}
