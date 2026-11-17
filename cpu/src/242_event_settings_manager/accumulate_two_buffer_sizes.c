/* @k10d accumulate_two_buffer_sizes @ 0x104d009c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Adds the sizes of two buffers (IDs 0x201 and 0x202) to a running total in param_1 and
 *   updates a linked list entry.
 * summary:
 *   The function calls layout_list_items_sequentially on param_2, then retrieves a size via
 *   sum_two_values_plus_six. It adds this size to the value at param_1+0xc and writes the
 *   result to a field at offset 0x30 in a structure reached via param_1+4. It then
 *   retrieves pointers/sizes for IDs 0x201 and 0x202 using find_entry_by_ushort_key and
 *   find_entry_by_id_in_table, passing them to call_helper_if_param2_nonzero_104d0666 and
 *   conditionally call_helper_if_param2_nonzero_104d0690. The return value is the result of
 *   the second helper call or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t accumulate_two_buffer_sizes(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  layout_list_items_sequentially(param_2);
  iVar1 = sum_two_values_plus_six((void *)param_2);
  iVar1 = *(int *)(param_1 + 0xc) + iVar1;
  *(int *)(param_1 + 0xc) = iVar1;
  *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x30) = iVar1;
  uVar2 = (uint32_t)(uintptr_t)find_entry_by_ushort_key(param_2,0x201);
  iVar1 = find_entry_by_id_in_table(param_2,0x201);
  iVar1 = call_helper_if_param2_nonzero_104d0666(param_1,uVar2,iVar1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint32_t)(uintptr_t)find_entry_by_ushort_key(param_2,0x202);
    iVar1 = find_entry_by_id_in_table(param_2,0x202);
    uVar2 = call_helper_if_param2_nonzero_104d0690(param_1,uVar2,iVar1);
  }
  return uVar2;
}
