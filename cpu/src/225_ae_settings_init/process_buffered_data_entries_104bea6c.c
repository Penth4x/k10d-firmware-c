/* @k10d process_buffered_data_entries_104bea6c @ 0x104bea6c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 225_ae_settings_init (unit names are model-proposed)
 * purpose:
 *   Iterates through up to 6 data entries, validating and processing them if a status flag
 *   is set.
 * summary:
 *   Checks a status via init_buffer_with_size_0x10000. If active, it loops up to 6 times,
 *   using read_byte_at_offset_1051ed64 to validate an entry index (defaulting to 5 if a
 *   flag at param_1+0x1e is clear). Valid entries are processed by
 *   apply_param_state_to_object, with a pointer calculated based on the entry index and a
 *   value at param_1+0x8d0. Calls invoke_virtual_slot_two_104bf5b6 upon completion.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_buffered_data_entries_104bea6c(int param_1,uint32_t param_2)

{
  int iVar1;
  char cVar3;
  int iVar2;
  int iStack_18;
  int iStack_10;
  
  iVar1 = init_buffer_with_size_0x10000((uint32_t)param_1);
  if (iVar1 == 0) {
    *(uint8_t *)(param_1 + 0x30) = 1;
    iStack_10 = 0;
  }
  else {
    *(uint8_t *)(param_1 + 0x30) = 0;
    store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
    iStack_10 = 0;
    iVar1 = 0;
    iStack_18 = 5;
    do {
      iVar2 = iVar1;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar2 = iStack_18;
      }
      cVar3 = read_byte_at_offset_1051ed64((void *)(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118),iVar2);
      if (cVar3 != '\0') {
        *(int *)(param_1 + 0xfd94) =
             param_1 + 0xebac + *(int *)(param_1 + 0x8d0) * 0x2fc + iVar2 * 0x2fc;
        iVar2 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118,iVar2);
        iStack_10 = apply_param_state_to_object((int)(param_1),(uint32_t)(param_2),(uint32_t *)(iVar2));
        if (iStack_10 == 0) break;
      }
      iVar1 = iVar1 + 1;
      iStack_18 = iStack_18 + -1;
    } while (iVar1 < 6);
    invoke_virtual_slot_two_104bf5b6(param_1);
  }
  return iStack_10;
}
