/* @k10d update_two_flag_bits @ 0x000c95c2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets or clears bits 1 and 2 of DAT_0003c37d based on the state of DAT_0003c4db and
 *   DAT_0003c3c8.
 * summary:
 *   The function checks bit 4 of DAT_0003c4db to determine whether to set or clear bit 2 of
 *   DAT_0003c37d. It then checks if DAT_0003c3c8 is zero to determine whether to set or
 *   clear bit 1 of DAT_0003c37d. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_two_flag_bits(void)

{
  if ((DAT_0003c4db & 0x10) == 0) {
    DAT_0003c37d = DAT_0003c37d & 0xfb;
  }
  else {
    DAT_0003c37d = DAT_0003c37d | 4;
  }
  if (DAT_0003c3c8 == '\0') {
    DAT_0003c37d = DAT_0003c37d & 0xfd;
  }
  else {
    DAT_0003c37d = DAT_0003c37d | 2;
  }
  return;
}
