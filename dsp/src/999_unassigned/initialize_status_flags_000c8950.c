/* @k10d initialize_status_flags_000c8950 @ 0x000c8950
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Resets a block of byte flags and calls six helper functions to set initial state.
 * summary:
 *   The function writes specific values (0x40, 0, etc.) to a contiguous block of globals
 *   starting at DAT_0003c37f, preserving bit 5 of DAT_0003c383. It then invokes six unnamed
 *   helper functions (update_status_flags_000c9204, compute_state_from_mode_index,
 *   update_status_flag_bits_000c9268, pack_status_byte_fields,
 *   build_status_byte_from_flags, accumulate_status_flags). Finally, it conditionally
 *   updates DAT_0003c385 and DAT_0003c381 based on the state of other global flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_status_flags_000c8950(void)

{
  DAT_0003c37f = 0x40;
  DAT_0003c380 = 0;
  DAT_0003c381 = 0;
  DAT_0003c382 = 0;
  DAT_0003c383 = DAT_0003c383 & 0x20;
  DAT_0003c384 = 0;
  DAT_0003c385 = 0x40;
  DAT_0003c386 = 0x40;
  DAT_0003c388 = 0;
  DAT_0003c389 = 0;
  DAT_0003c38b = 0;
  DAT_0003c38a = 0;
  DAT_0003c38c = 0;
  DAT_0003c38d = 0;
  DAT_0003c38e = 0;
  update_status_flags_000c9204();
  compute_state_from_mode_index();
  update_status_flag_bits_000c9268();
  pack_status_byte_fields();
  if (((DAT_0003c4de & 2) != 0) &&
     (((DAT_0003c129 & 1) == 0 ||
      ((((DAT_0003c129 & 1) != 0 && ((DAT_0003c1eb & 0x20) != 0)) && ((DAT_0003c038 & 2) == 0))))))
  {
    DAT_0003c385 = DAT_0003c574;
  }
  DAT_0003c386 = (uint8_t)((int)(uint)_DAT_0003c5a0 >> 2);
  build_status_byte_from_flags();
  accumulate_status_flags();
  if ((DAT_0003c58b & 1) == 0) {
    DAT_0003c381 = DAT_0003c578;
  }
  else {
    DAT_0003c381 = DAT_0003c571;
    if (((((DAT_0003c589 & 1) != 0) && ((DAT_0003c18f & 8) == 0)) ||
        ((DAT_0003c492 == '\x06' || ((DAT_0003c492 == '\r' || (DAT_0003c492 == '\x16')))))) ||
       (DAT_0003c493 == '\n')) {
      DAT_0003c381 = DAT_0003c578;
    }
  }
  return;
}
