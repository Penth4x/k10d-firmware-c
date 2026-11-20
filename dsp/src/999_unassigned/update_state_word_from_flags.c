/* @k10d update_state_word_from_flags @ 0x000e73cc
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes a 16-bit value for _DAT_0003c058 based on flag bits in several control words.
 * summary:
 *   Calls map_mode_byte_to_value, then evaluates bits in DAT_0003c022, DAT_0003c023,
 *   DAT_0003c4d0, and DAT_0003c394 to determine a value for _DAT_0003c058. The value is
 *   derived from DAT_0003c05a, either directly, shifted left by 1, or set to 0x10 depending
 *   on the flag states. Finally, it sets bit 0 of DAT_0003c022.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_word_from_flags(void)

{
  map_mode_byte_to_value();
  if ((DAT_0003c022 & 0x20) == 0) {
    if ((DAT_0003c023 & 2) == 0) {
      _DAT_0003c058 = (ushort)DAT_0003c05a;
      DAT_0003c022 = DAT_0003c022 | 2;
    }
    else {
      _DAT_0003c058 = (ushort)DAT_0003c05a;
      DAT_0003c023 = DAT_0003c023 & 0xfd;
    }
  }
  else if (((DAT_0003c4d0 & 0x20) == 0) || (DAT_0003c041 == '\0')) {
    if ((DAT_0003c394 & 0xf) >> 2 == 2) {
      _DAT_0003c058 = (ushort)DAT_0003c05a;
    }
    else {
      _DAT_0003c058 = 0x10;
    }
  }
  else {
    _DAT_0003c058 = (ushort)DAT_0003c05a << 1;
  }
  DAT_0003c022 = DAT_0003c022 | 1;
  return;
}
