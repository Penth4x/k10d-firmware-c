/* @k10d read_two_fields_and_store_sum @ 0x104cfff6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads two fields from param_2, processes them via helpers, and stores their sum in
 *   param_1.
 * summary:
 *   The function retrieves a value and an offset for field 0x131 from param_2 using
 *   find_entry_by_ushort_key and find_entry_by_id_in_table, then passes them to
 *   format_version_string_104d0298. If that call succeeds, it repeats the process for field
 *   0x132 using send_message_if_valid_id. It then reads an integer from param_2+0x28, adds
 *   the result of sum_two_values_plus_six(param_2), and stores the sum in param_1+0xc.
 *   Finally, if the second field was processed, it reads field 0x8769 and passes it to
 *   process_buffer_entry.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_two_fields_and_store_sum(int param_1,void *param_2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (uintptr_t)(find_entry_by_ushort_key((int)(param_2),(uint)(0x131)));
  iVar2 = find_entry_by_id_in_table((int)param_2,0x131);
  iVar3 = format_version_string_104d0298(param_1,uVar1,iVar2);
  layout_list_items_sequentially((int)param_2);
  iVar2 = 0;
  if (iVar3 != 0) {
    uVar1 = (uintptr_t)(find_entry_by_ushort_key((int)(param_2),(uint)(0x132)));
    iVar2 = find_entry_by_id_in_table((int)param_2,0x132);
    iVar2 = send_message_if_valid_id(param_1,uVar1,iVar2);
    layout_list_items_sequentially((int)param_2);
  }
  iVar4 = *(int *)((int)param_2 + 0x28);
  iVar3 = sum_two_values_plus_six(param_2);
  *(int *)(param_1 + 0xc) = iVar4 + iVar3;
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = (uintptr_t)(find_entry_by_ushort_key((int)(param_2),(uint)(0x8769)));
    uVar1 = process_buffer_entry(param_1,uVar1);
  }
  return uVar1;
}
