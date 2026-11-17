/* @k10d allocate_free_slot_in_table_1045e7f2 @ 0x1045e7f2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Finds the first zero entry in a bounded array of 32-bit slots and writes a value into
 *   it.
 * summary:
 *   Takes a base pointer, a count (capped at 0x19), and a value. It scans up to 16 slots
 *   starting at offset 0x1ac from the base pointer. If a slot is zero, it writes the value
 *   into that slot and returns 1. If no free slot is found or the count is too small, it
 *   returns 0. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_free_slot_in_table_1045e7f2(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0x19) {
    iVar2 = 0;
    iVar3 = param_2 * 0x10;
    iVar1 = iVar3;
    do {
      if (*(int *)((int)param_1 + iVar1 + 0x1ac) == 0) {
        *(uint32_t *)((int)param_1 + iVar2 * 4 + iVar3 + 0x1ac) = param_3;
        return 1;
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar1 < iVar3 + 0x10);
  }
  return 0;
}
