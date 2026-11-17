/* @k10d FUN_000cc5a8 @ 0x000cc5a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000cc5a8(void)

{
  int iVar1;
  
  DAT_0003ce03 = DAT_0003ce03 & 0xfd | 1;
  if (((DAT_0003f280 & 1) == 0) || (iVar1 = compute_and_store_adjusted_value(), iVar1 == 0)) {
    clear_flag_if_check_zero();
  }
  return;
}
