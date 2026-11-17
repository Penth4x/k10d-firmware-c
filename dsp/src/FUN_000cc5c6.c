/* @k10d FUN_000cc5c6 @ 0x000cc5c6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000cc5c6(void)

{
  int iVar1;
  
  if (((DAT_0003c128 & 0x40) == 0) &&
     (((DAT_0003f280 & 2) == 0 || (iVar1 = compute_and_store_adjusted_value(), iVar1 == 0)))) {
    clear_flag_if_check_zero();
  }
  return;
}
