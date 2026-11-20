/* @k10d process_flagged_buffer_groups @ 0x000d4dc2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Iterates over 20 flag bytes and conditionally processes 5-byte groups based on bit 4.
 * summary:
 *   Sets bit 7 of DAT_0003cbef. Loops 4 times, checking 5 consecutive bytes starting at
 *   0x3cb81 for bit 4 (0x10). For each set flag, it calls populate_global_state_from_index
 *   with an index, copies a byte from 0x3ccdc to DAT_0003ccd6, calls
 *   clamp_and_store_byte_000d2730, and calls fill_two_entry_blocks with an offset
 *   incrementing by 0x280. The specific roles of the callees and data structures are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_flagged_buffer_groups(void)

{
  int iVar1;
  int iVar2;
  int iStack_1c;
  
  DAT_0003cbef = DAT_0003cbef | 0x80;
  iVar1 = 0;
  iStack_1c = 4;
  iVar2 = 0;
  do {
    if ((*(byte *)(iVar1 + 0x3cb81) & 0x10) != 0) {
      populate_global_state_from_index(iVar1);
      DAT_0003ccd6 = *(uint8_t *)(iVar1 + 0x3ccdc);
      clamp_and_store_byte_000d2730();
      fill_two_entry_blocks((void *)(iVar2 + 0x3d000));
    }
    if ((*(byte *)(iVar1 + 0x3cb82) & 0x10) != 0) {
      populate_global_state_from_index(iVar1 + 1);
      DAT_0003ccd6 = *(uint8_t *)(iVar1 + 0x3ccdd);
      clamp_and_store_byte_000d2730();
      fill_two_entry_blocks((void *)(iVar2 + 0x3d080));
    }
    if ((*(byte *)(iVar1 + 0x3cb83) & 0x10) != 0) {
      populate_global_state_from_index(iVar1 + 2);
      DAT_0003ccd6 = *(uint8_t *)(iVar1 + 0x3ccde);
      clamp_and_store_byte_000d2730();
      fill_two_entry_blocks((void *)(iVar2 + 0x3d100));
    }
    if ((*(byte *)(iVar1 + 0x3cb84) & 0x10) != 0) {
      populate_global_state_from_index(iVar1 + 3);
      DAT_0003ccd6 = *(uint8_t *)(iVar1 + 0x3ccdf);
      clamp_and_store_byte_000d2730();
      fill_two_entry_blocks((void *)(iVar2 + 0x3d180));
    }
    if (((&DAT_0003cb85)[iVar1] & 0x10) != 0) {
      populate_global_state_from_index(iVar1 + 4);
      DAT_0003ccd6 = *(uint8_t *)(iVar1 + 0x3cce0);
      clamp_and_store_byte_000d2730();
      fill_two_entry_blocks((void *)(iVar2 + 0x3d200));
    }
    iVar1 = iVar1 + 5;
    iVar2 = iVar2 + 0x280;
    iStack_1c = iStack_1c + -1;
  } while (0 < iStack_1c);
  return;
}
