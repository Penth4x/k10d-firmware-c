/* @k10d query_object_and_report_result @ 0x104a2604
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Performs a virtual query on an object and reports the result via a callback.
 * summary:
 *   The function retrieves a pointer from param_1+0x10 and invokes virtual slot 2 (offset
 *   0x14) with argument 1. If the result is non-zero, it invokes the same virtual slot with
 *   argument 0xc and passes the result to classify_heap_alloc_result along with a value
 *   from param_1+0x2c. Finally, it calls write_word_to_dynamic_array with param_2, 0, and
 *   the result from the previous step (or 0 if the first query failed).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_object_and_report_result(int param_1,int param_2)

{
  uint8_t uVar2;
  uint16_t uVar1;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = **(int **)(param_1 + 0x10);
  iVar3 = (((vtbl_entry*)(iVar3))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar3))[2].adj,1);
  if (iVar3 != 0) {
    iVar3 = **(int **)(param_1 + 0x10);
    uVar2 = (((vtbl_entry*)(iVar3))[2].fn)
                      ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar3))[2].adj,0xc);
    uVar1 = classify_heap_alloc_result(*(uint32_t *)(param_1 + 0x2c),uVar2);
  }
  write_word_to_dynamic_array(param_2,0,uVar1);
  return;
}
