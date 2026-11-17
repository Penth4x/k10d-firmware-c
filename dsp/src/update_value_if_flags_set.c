/* @k10d update_value_if_flags_set @ 0x000e34e6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies the return value of compute_clamped_byte_value into two globals when two
 *   specific flag bits are set.
 * summary:
 *   Checks bit 3 of DAT_0003f504 and bit 6 of DAT_0003c021. If both are set, it calls
 *   compute_clamped_byte_value and stores the result in DAT_00000096 and DAT_0003c054. The
 *   function has no other side effects and returns void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_value_if_flags_set(void)

{
  if (((DAT_0003f504 & 8) != 0) && ((DAT_0003c021 & 0x40) != 0)) {
    DAT_00000096 = compute_clamped_byte_value();
    DAT_0003c054 = DAT_00000096;
  }
  return;
}
