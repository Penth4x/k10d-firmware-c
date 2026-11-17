/* @k10d process_sequential_event_ids @ 0x104d018c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Processes a chain of event IDs from a source object, updating a counter in the target
 *   object.
 * summary:
 *   The function iterates through a specific sequence of IDs (0xa002, 0xa003, 0xa401,
 *   0x927c) using helper functions to retrieve data from param_2. It calls corresponding
 *   handlers (dispatch_param_by_type_code, dispatch_event_by_type_104d0518,
 *   call_helper_if_param_nonzero_104d04a6, dispatch_virtual_method_sequence_104d056e) with
 *   param_1 and the retrieved data. After the main chain, it calls
 *   layout_list_items_sequentially and sum_two_values_plus_six, adding the result to the
 *   value at param_1 + 0xc. If the last handler returned non-zero, it processes two
 *   additional IDs (0xa005, 0x8825) via process_buffer_entry.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_sequential_event_ids(int param_1,void *param_2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (uint32_t)(uintptr_t)find_entry_by_ushort_key((int)param_2,0xa002);
  iVar2 = find_entry_by_id_in_table((int)param_2,0xa002);
  iVar3 = dispatch_param_by_type_code(param_1,uVar1,iVar2);
  iVar2 = 0;
  if (iVar3 != 0) {
    uVar1 = (uint32_t)(uintptr_t)find_entry_by_ushort_key((int)param_2,0xa003);
    iVar2 = find_entry_by_id_in_table((int)param_2,0xa003);
    iVar3 = dispatch_event_by_type_104d0518(param_1,uVar1,iVar2);
    iVar2 = 0;
    if (iVar3 != 0) {
      uVar1 = (uint32_t)(uintptr_t)find_entry_by_ushort_key((int)param_2,0xa401);
      iVar2 = find_entry_by_id_in_table((int)param_2,0xa401);
      iVar3 = call_helper_if_param_nonzero_104d04a6(param_1,uVar1,iVar2);
      iVar2 = 0;
      if (iVar3 != 0) {
        uVar1 = (uint32_t)(uintptr_t)find_entry_by_ushort_key((int)param_2,0x927c);
        iVar2 = find_entry_by_id_in_table((int)param_2,0x927c);
        iVar2 = dispatch_virtual_method_sequence_104d056e(param_1,uVar1,iVar2);
      }
    }
  }
  layout_list_items_sequentially((int)param_2);
  iVar3 = sum_two_values_plus_six(param_2);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar3;
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = (uint32_t)(uintptr_t)find_entry_by_ushort_key((int)param_2,0xa005);
    iVar2 = process_buffer_entry(param_1,uVar1);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = (uint32_t)(uintptr_t)find_entry_by_ushort_key((int)param_2,0x8825);
      uVar1 = (uint32_t)(uintptr_t)process_buffer_entry(param_1,uVar1);
    }
  }
  return uVar1;
}
