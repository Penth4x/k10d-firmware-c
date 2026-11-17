/* @k10d toggle_ram0_bit1_with_calls @ 0x000daeee
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 0 of bRam00000000, calls busy_wait_on_mode_flag(0x13), sets bit 1, then
 *   calls busy_wait_on_mode_flag(0x1a).
 * summary:
 *   The function manipulates the global byte bRam00000000 by clearing its least significant
 *   bit (mask 0xfd) and later setting bit 1 (OR 2). Between these operations it invokes
 *   busy_wait_on_mode_flag with arguments 0x13 and 0x1a respectively. The role of
 *   bRam00000000 and busy_wait_on_mode_flag is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_ram0_bit1_with_calls(void)

{
  bRam00000000 = bRam00000000 & 0xfd;
  busy_wait_on_mode_flag(0x13);
  bRam00000000 = bRam00000000 | 2;
  busy_wait_on_mode_flag(0x1a);
  return;
}
