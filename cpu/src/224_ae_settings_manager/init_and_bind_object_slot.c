/* @k10d init_and_bind_object_slot @ 0x104bd5e6
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object, binds a sub-object, and conditionally configures a computed
 *   slot.
 * summary:
 *   Calls process_three_string_slots_per_entry to initialize param_1, then
 *   store_value_at_two_offsets and write_two_words_to_struct_104c1ff4 with param_1 and the
 *   other arguments. It computes an address based on a value at param_1+0x8d0 multiplied by
 *   0xb34 plus an offset, calls copy_object_state_to_buffer with that address, and if the
 *   result is non-zero, calls copy_three_bytes_to_list_entries and
 *   process_three_item_groups with the same address. Returns the result of
 *   copy_object_state_to_buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_and_bind_object_slot(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  
  process_three_string_slots_per_entry(param_1);
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  write_two_words_to_struct_104c1ff4(param_1,param_2,param_3);
  iVar2 = param_1 + 0x2118;
  iVar1 = copy_object_state_to_buffer(param_1,(void *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar2));
  if (iVar1 != 0) {
    copy_three_bytes_to_list_entries(param_1,(void *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar2));
    process_three_item_groups(param_1,(void *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar2));
  }
  return iVar1;
}
