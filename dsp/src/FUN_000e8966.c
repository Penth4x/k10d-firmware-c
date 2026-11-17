/* @k10d FUN_000e8966 @ 0x000e8966
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint FUN_000e8966(void)

{
  int iVar1;
  
  if (((((DAT_0003c4d6 & 4) == 0) || ((DAT_0003c021 & 2) != 0)) || ((DAT_0003c02f & 1) != 0)) ||
     ((((DAT_00000005 & 4) != 0 || (iVar1 = check_two_flag_conditions_000e6c7e(), iVar1 != 0)) ||
      ((DAT_0003c05d & 0x20) != 0)))) {
    clear_flag_4_and_call_helper();
  }
  else {
    set_flag_0x10_if_bit0_clear();
  }
  return (DAT_0003c021 & 0x1f) >> 4;
}
