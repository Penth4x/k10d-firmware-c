/* @k10d process_buffer_entry @ 0x104d0124
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Processes a buffer entry by calling helpers and updating an offset field based on the
 *   result.
 * summary:
 *   The function takes a structure pointer (param_1) and an ID (param_2). If the ID is non-
 *   zero, it calls write_to_dynamic_array and read_array_element_by_index to obtain a
 *   buffer pointer. It copies a value from param_1+0xc to the buffer at offset 0x28 and
 *   calls layout_list_items_sequentially. If a status field at buffer+0x20 is 1, it
 *   delegates to process_sequential_event_ids; otherwise, it calls sum_two_values_plus_six
 *   to get a size/delta and adds it to the offset stored at param_1+0xc. Returns 1 on
 *   success or the result of the delegated call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_buffer_entry(int param_1,int param_2)

{
  uint32_t uVar1;
  void *pvVar2;
  int iVar3;
  
  uVar1 = 1;
  if (param_2 != 0) {
    write_to_dynamic_array(param_2,0,*(uint32_t *)(param_1 + 0xc));
    pvVar2 = (void *)read_array_element_by_index(param_2,0);
    *(uint32_t *)((int)pvVar2 + 0x28) = *(uint32_t *)(param_1 + 0xc);
    layout_list_items_sequentially((int)pvVar2);
    if (*(int *)((int)pvVar2 + 0x20) == 1) {
      uVar1 = process_sequential_event_ids(param_1,pvVar2);
    }
    else {
      iVar3 = sum_two_values_plus_six(pvVar2);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar3;
      uVar1 = 1;
    }
  }
  return uVar1;
}
