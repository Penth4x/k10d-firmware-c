/* @k10d toggle_bit3_with_callback @ 0x000ca766
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 3 of DAT_0003c410, calls update_camera_state_flags, then sets bit 3 again.
 * summary:
 *   The function masks off bit 3 (value 8) of the global DAT_0003c410, invokes the single
 *   callee update_camera_state_flags, and then restores bit 3. The role of DAT_0003c410 and
 *   update_camera_state_flags is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_bit3_with_callback(void)

{
  DAT_0003c410 = DAT_0003c410 & 0xf7;
  update_camera_state_flags();
  DAT_0003c410 = DAT_0003c410 | 8;
  return;
}
