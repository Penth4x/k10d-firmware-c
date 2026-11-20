/* @k10d check_and_set_state_flag_000e6376 @ 0x000e6376
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Checks a combination of four global state flags and sets bit 4 of DAT_0003c066 if
 *   conditions are met.
 * summary:
 *   The function evaluates a complex boolean condition involving DAT_0003c066,
 *   DAT_0003c32c, DAT_0003c067, and DAT_0003c075. If the condition is true, it sets bit 4
 *   (0x10) in DAT_0003c066 and returns 1; otherwise, it returns 0. No other side effects or
 *   callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_set_state_flag_000e6376(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (((((DAT_0003c066 & 1) == 0) && ((DAT_0003c32c & 2) != 0)) && ((DAT_0003c067 & 2) == 0)) &&
     ((((DAT_0003c075 & 0xf) != 4 && ((DAT_0003c067 & 0x10) == 0)) && ((DAT_0003c075 & 0xf) != 0))))
  {
    DAT_0003c066 = DAT_0003c066 | 0x10;
    uVar1 = 1;
  }
  return uVar1;
}
