/* @k10d toggle_bit4_around_call @ 0x000ca7b4
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Sets bit 4 of DAT_0003c410, calls update_camera_state_flags, then clears bit 4 of
 *   DAT_0003c410.
 * summary:
 *   The function ORs 0x10 into DAT_0003c410, invokes update_camera_state_flags, then ANDs
 *   DAT_0003c410 with 0xef to clear bit 4. The role of DAT_0003c410 and
 *   update_camera_state_flags is unknown from the given data, so the surrounding behavior
 *   is a bracketed bit-4 set/clear around a single call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_bit4_around_call(void)

{
  DAT_0003c410 = DAT_0003c410 | 0x10;
  update_camera_state_flags();
  DAT_0003c410 = DAT_0003c410 & 0xef;
  return;
}
