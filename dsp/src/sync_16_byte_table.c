/* @k10d sync_16_byte_table @ 0x000dfdd2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Copies 16 bytes from a source table to a destination buffer, optionally skipping
 *   unchanged entries.
 * summary:
 *   Iterates over 16 indices (0-15). For each index, it compares the byte at destination
 *   offset 0x3c4e0+index with the byte at source offset 0x3c4b0+index. If param_1 is 0, it
 *   only calls select_entry_and_apply and updates the destination if the values differ. If
 *   param_1 is 1, it always calls select_entry_and_apply and updates the destination. The
 *   function appears to synchronize a 16-byte state block, possibly triggering a callback
 *   (select_entry_and_apply) for each byte processed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void sync_16_byte_table(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
    do {
      if (*(char *)(uVar1 + 0x3c4e0) != (&DAT_0003c4b0)[uVar1]) {
        select_entry_and_apply(uVar1);
        *(uint8_t *)(uVar1 + 0x3c4e0) = (&DAT_0003c4b0)[uVar1];
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 0x10);
  }
  else if (param_1 == 1) {
    uVar1 = 0;
    do {
      select_entry_and_apply(uVar1);
      *(uint8_t *)(uVar1 + 0x3c4e0) = (&DAT_0003c4b0)[uVar1];
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 0x10);
  }
  return;
}
