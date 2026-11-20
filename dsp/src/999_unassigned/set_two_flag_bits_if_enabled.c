/* @k10d set_two_flag_bits_if_enabled @ 0x000c45fa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Conditionally sets bit 4 of DAT_0003c185 and bits 0,1,3 of DAT_0003c186 when bit 0 of
 *   DAT_0003c589 is set.
 * summary:
 *   Checks bit 0 of the global DAT_0003c589. If set, it ORs 0x10 into DAT_0003c185
 *   (preserving lower nibble) and ORs 0xb into DAT_0003c186. No callees are invoked. The
 *   roles of these three globals are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_flag_bits_if_enabled(void)

{
  if ((DAT_0003c589 & 1) != 0) {
    DAT_0003c185 = DAT_0003c185 & 0xf | 0x10;
    DAT_0003c186 = DAT_0003c186 | 0xb;
  }
  return;
}
