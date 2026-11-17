/* @k10d clear_bit2_and_bit7_flags @ 0x000e2356
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears bit 2 of DAT_0000000b and bit 7 of DAT_0003c123 if bit 2 of DAT_0000000b is set.
 * summary:
 *   Checks bit 2 (value 4) of the global DAT_0000000b. If set, it clears that bit in
 *   DAT_0000000b (mask 0xfb) and clears bit 7 in DAT_0003c123 (mask 0x7f). Returns 0. No
 *   callees are invoked. The specific meaning of these flags is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_bit2_and_bit7_flags(void)

{
  if ((DAT_0000000b & 4) != 0) {
    DAT_0000000b = DAT_0000000b & 0xfb;
    DAT_0003c123 = DAT_0003c123 & 0x7f;
  }
  return 0;
}
