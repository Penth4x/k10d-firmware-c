/* @k10d toggle_bit5_of_dat_0003c410 @ 0x000ca7cc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 5 of DAT_0003c410, calls update_camera_state_flags, then sets bit 5 again.
 * summary:
 *   The function masks DAT_0003c410 with 0xdf to clear bit 5, invokes the unverified callee
 *   update_camera_state_flags, and then ORs 0x20 to restore bit 5. No other side effects or
 *   register accesses are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_bit5_of_dat_0003c410(void)

{
  DAT_0003c410 = DAT_0003c410 & 0xdf;
  update_camera_state_flags();
  DAT_0003c410 = DAT_0003c410 | 0x20;
  return;
}
