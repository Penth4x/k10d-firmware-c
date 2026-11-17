/* @k10d wait_for_two_flags_and_clear_bit @ 0x000dadde
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Waits for bits 3 and 4 of a status word to be set, then clears bit 18 of a control
 *   word.
 * summary:
 *   Calls write_initial_state_to_dat_block, then busy-waits until DAT_00000060 has bit 3
 *   (0x8) set, and again until bit 4 (0x10) is set. It then clears bit 18 (mask 0xfffcffff)
 *   of DAT_00000061, saves the old value to DAT_0003c217, and calls busy_wait_on_mode_flag
 *   with argument 0x50. The role of DAT_00000060/61 is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_for_two_flags_and_clear_bit(void)

{
  write_initial_state_to_dat_block();
  DAT_0003c215 = (uint8_t)_DAT_00000061;
  do {
  } while ((DAT_00000060 & 8) == 0);
  do {
  } while ((DAT_00000060 & 0x10) == 0);
  _DAT_00000061 = CONCAT13(DAT_0003c217,(int3)_DAT_00000061) & 0xfffcffff;
  DAT_0003c217 = DAT_0003c215;
  busy_wait_on_mode_flag(0x50);
  return;
}
