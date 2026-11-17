/* @k10d wait_for_flag_and_set_state_000e1d14 @ 0x000e1d14
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls two global flags and returns a state value, setting it to 8 if both conditions
 *   are met.
 * summary:
 *   Calls compute_index_from_mode, then enters a loop checking bit 4 of DAT_00000003 and
 *   bit 2 of DAT_00000057. If bit 4 of DAT_00000003 is clear, it immediately returns the
 *   current value of DAT_0003c122. Otherwise, it waits until bit 2 of DAT_00000057 is set,
 *   then sets DAT_0003c122 to 8 and returns 8. The specific meaning of the flags and state
 *   value is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t wait_for_flag_and_set_state_000e1d14(uint32_t param_x0)

{
  compute_index_from_mode(__frv_reg_unset(4));
  do {
    if ((DAT_00000003 & 0x10) == 0) {
      return DAT_0003c122;
    }
  } while ((DAT_00000057 & 4) == 0);
  DAT_0003c122 = 8;
  return 8;
}
