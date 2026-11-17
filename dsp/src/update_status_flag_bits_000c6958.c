/* @k10d update_status_flag_bits_000c6958 @ 0x000c6958
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets or clears bits 4 and 5 of a status word based on a counter threshold and a mode
 *   byte.
 * summary:
 *   Calls compute_adjusted_byte_value to get a value, compares it against a masked counter
 *   in DAT_0003c564. If the counter is below the value and under 0x80, it sets bits 4 and 5
 *   (0x30) in DAT_0003c58c. It then clears those same bits if DAT_0003c440 is 0x08, 0x11,
 *   or 0x07. The role of the specific status bits and mode values is not determinable from
 *   the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bits_000c6958(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = compute_adjusted_byte_value();
  uVar2 = DAT_0003c564 + 1 & 0xfc;
  if ((uVar2 < uVar1) && (uVar2 < 0x80)) {
    DAT_0003c58c = DAT_0003c58c | 0x30;
  }
  if (((DAT_0003c440 == '\b') || (DAT_0003c440 == '\x11')) || (DAT_0003c440 == '\a')) {
    DAT_0003c58c = DAT_0003c58c & 0xcf;
  }
  return;
}
