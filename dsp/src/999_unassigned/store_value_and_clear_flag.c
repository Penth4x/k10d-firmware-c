/* @k10d store_value_and_clear_flag @ 0x000c63b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Stores param_1 into DAT_0003c564, and if bit 3 of DAT_0003c4d2 is set, overwrites it
 *   with compute_signed_offset_value_000c66f6(0), calls update_state_pointer, and clears
 *   bit 3.
 * summary:
 *   Writes the input byte to global DAT_0003c564. Checks bit 3 (mask 0x8) of global
 *   DAT_0003c4d2; if set, replaces the stored value with the return of
 *   compute_signed_offset_value_000c66f6(0), invokes update_state_pointer, and clears bit 3
 *   in DAT_0003c4d2. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_clear_flag(uint8_t param_1)

{
  DAT_0003c564 = param_1;
  if ((DAT_0003c4d2 & 8) != 0) {
    DAT_0003c564 = compute_signed_offset_value_000c66f6(0);
    update_state_pointer();
    DAT_0003c4d2 = DAT_0003c4d2 & 0xf7;
  }
  return;
}
