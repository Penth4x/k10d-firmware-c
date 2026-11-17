/* @k10d screen_registry_cur_enabled @ 0x10482120
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_entry_enable_byte)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Returns the 8th byte of a table entry identified by an index from a helper function.
 * summary:
 *   Calls screen_key_find to obtain an index. If the index is negative or exceeds the count
 *   stored at offset 0x14 of the object, returns 0. Otherwise, dereferences the base
 *   pointer at offset 0xc, adds the index multiplied by 8 plus 7, and returns the byte at
 *   that location. The structure appears to be an array of 8-byte entries.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t screen_registry_cur_enabled(void *param_1,uint8_t *param_2)

{
  int iVar1;
  uint8_t uVar2;
  
  iVar1 = screen_key_find(param_1,param_2);
  if ((iVar1 < 0) || (*(int *)((int)param_1 + 0x14) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint8_t *)(*(int *)((int)param_1 + 0xc) + iVar1 * 8 + 7);
  }
  return uVar2;
}
