/* @k10d fill_array_with_source_value @ 0x105169a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 32-bit value from a struct field into an array of entries until a helper
 *   returns zero.
 * summary:
 *   Reads a count from offset 0x7c of the object in param_1. If the count is positive, it
 *   iterates, writing the value at offset 0x78 into each 12-byte entry starting at offset
 *   4. After each write it calls allocate_or_reallocate_heap_block; if that returns 0, it
 *   calls call_helper_on_five_slots and returns 0. Otherwise it continues until the count
 *   is reached and returns the last helper result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int fill_array_with_source_value(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 1;
  if (0 < *(int *)(param_1 + 0x7c)) {
    iVar1 = 0;
    do {
      *(uint32_t *)(param_1 + iVar1 + 4) = *(uint32_t *)(param_1 + 0x78);
      iVar3 = allocate_or_reallocate_heap_block((int *)(uint32_t)param_1);
      if (iVar3 == 0) {
        call_helper_on_five_slots(param_1);
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 0x7c));
  }
  return iVar3;
}
