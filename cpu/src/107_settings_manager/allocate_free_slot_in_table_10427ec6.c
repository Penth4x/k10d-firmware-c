/* @k10d allocate_free_slot_in_table_10427ec6 @ 0x10427ec6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Finds the first zeroed entry in a 32-entry table and stores two values into it.
 * summary:
 *   Iterates through 32 slots (0x80 bytes) of the object pointed to by param_1, checking
 *   the 4-byte field at offset 4 of each slot. When a zero value is found, it writes
 *   param_2 to that offset and param_3 to offset 0x84 of the same slot, then returns 1. If
 *   no zero entry is found, it returns 0. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_free_slot_in_table_10427ec6(void *param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)((int)param_1 + iVar1 + 4) == 0) {
      *(void **)((int)param_1 + iVar2 * 4 + 4) = param_2;
      *(uint32_t *)((int)param_1 + iVar2 * 4 + 0x84) = param_3;
      return 1;
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 0x80);
  return 0;
}
