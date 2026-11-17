/* @k10d register_first_entry_in_slot @ 0x1042f6b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 113_screen_element_registry (unit names are model-proposed)
 * purpose:
 *   Stores param_2 into the first empty slot of a per-object array and calls a handler if
 *   it was empty.
 * summary:
 *   Reads an index from *param_2, computes an offset into a 0x80-byte region of param_1,
 *   and checks if the slot is NULL. If empty, it writes param_2 into the slot and calls
 *   write_field_at_offset_104e747c with a pointer from param_1+0xcc, the index, and
 *   param_2[5]. Returns true if the slot was previously empty.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool register_first_entry_in_slot(void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *param_2;
  iVar2 = iVar1 * 4;
  bVar3 = *(int *)((int)param_1 + iVar2 + 0x80) == 0;
  if (bVar3) {
    *(int **)((int)param_1 + iVar2 + 0x80) = param_2;
    write_field_at_offset_104e747c(*(void **)((int)param_1 + 0xcc),iVar1,param_2[5]);
  }
  return bVar3;
}
