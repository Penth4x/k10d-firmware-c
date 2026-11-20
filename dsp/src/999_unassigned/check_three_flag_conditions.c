/* @k10d check_three_flag_conditions @ 0x000e6cf0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns 1 if any of three specific bits in three DAT globals are set, otherwise 0.
 * summary:
 *   The function checks bit 1 of DAT_0003c32c, bit 2 of DAT_0003c391, and bit 3 of
 *   DAT_0003c000. It returns 1 if bit 1 of DAT_0003c32c is set, or if both bit 2 of
 *   DAT_0003c391 and bit 3 of DAT_0003c000 are clear. It returns 0 only if bit 1 of
 *   DAT_0003c32c is clear AND (bit 2 of DAT_0003c391 is set OR bit 3 of DAT_0003c000 is
 *   set). No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_three_flag_conditions(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((DAT_0003c32c & 2) == 0) {
    if (((DAT_0003c391 & 4) == 0) && ((DAT_0003c000 & 8) == 0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
