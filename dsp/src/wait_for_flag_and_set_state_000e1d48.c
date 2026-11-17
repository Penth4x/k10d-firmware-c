/* @k10d wait_for_flag_and_set_state_000e1d48 @ 0x000e1d48
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls two global flags in a loop and returns a state value (9) once both conditions are
 *   met.
 * summary:
 *   Calls store_scaled_value_and_flag once, then enters a do-while loop. It exits early if
 *   bit 4 of DAT_00000003 is set, returning the current value of DAT_0003c122. Otherwise,
 *   it waits until bit 2 of DAT_00000057 is set, then sets DAT_0003c122 to 9 and returns 9.
 *   The specific hardware or logical meaning of these flags is not determinable from the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t wait_for_flag_and_set_state_000e1d48(uint32_t param_x0)

{
  store_scaled_value_and_flag(__frv_reg_unset(4));
  do {
    if ((DAT_00000003 & 0x10) != 0) {
      return DAT_0003c122;
    }
  } while ((DAT_00000057 & 4) == 0);
  DAT_0003c122 = 9;
  return 9;
}
