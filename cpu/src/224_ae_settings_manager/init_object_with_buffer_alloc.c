/* @k10d init_object_with_buffer_alloc @ 0x104bd66a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling setup helpers and conditionally allocating a buffer
 *   based on a size field.
 * summary:
 *   The function calls process_three_string_slots_per_entry and store_value_at_two_offsets
 *   to initialize the object pointed to by param_1. It then calls
 *   write_two_words_to_struct_104c1ff4 with additional parameters. It calculates a buffer
 *   address using a size field at offset 0x8d0 multiplied by 0xb34, and calls
 *   copy_object_state_to_buffer; if that returns non-zero, it calls
 *   poll_and_update_entry_state on the same buffer address. The return value is the result
 *   of copy_object_state_to_buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_object_with_buffer_alloc(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  process_three_string_slots_per_entry(param_1);
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  write_two_words_to_struct_104c1ff4(param_1,param_2,param_3);
  iVar1 = copy_object_state_to_buffer((int)(param_1),(uint16_t *)(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118));
  if (iVar1 != 0) {
    poll_and_update_entry_state((int)(param_1),(void *)(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118));
  }
  return iVar1;
}
