/* @k10d screen_key_find @ 0x1048204a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed find_entry_by_hash)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Linearly searches an array of 8-byte entries for one whose 5th byte matches a hash of
 *   param_2.
 * summary:
 *   Calls normalize_ascii_letter on *param_2 to obtain a byte value. Iterates over the
 *   count stored at param_1+0x14, comparing each entry's byte at offset 4 (base
 *   param_1+0xc) against that value. Returns the zero-based index on match, or -1 if not
 *   found. The specific meaning of the hash and the entries is not determinable from this
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int screen_key_find(void *param_1,uint8_t *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = normalize_ascii_letter(*param_2);
  iVar1 = 0;
  if (0 < *(int *)((int)param_1 + 0x14)) {
    iVar2 = 0;
    do {
      if (uVar3 == *(byte *)(*(int *)((int)param_1 + 0xc) + iVar2 + 4)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar1 < *(int *)((int)param_1 + 0x14));
  }
  return -1;
}
