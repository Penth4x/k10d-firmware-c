/* @k10d FUN_000f2782 @ 0x000f2782
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool FUN_000f2782(uint32_t param_x0, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = compare_and_adjust_value_000f279a(__frv_reg_unset(4), __frv_reg_unset(5));
  if (iVar1 != 0) {
    wait_for_bit0_clear();
  }
  return iVar1 != 0;
}
