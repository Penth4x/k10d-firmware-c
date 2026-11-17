/* @k10d set_flag_and_call_two_helpers_1040ad90 @ 0x1040ad90
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Sets a byte flag at offset 0x68 of a struct, then calls two helper functions with
 *   related arguments.
 * summary:
 *   The function writes the value 1 to the byte at param_1 + 0x68. It then calls
 *   set_flag_and_call_callback with the 32-bit value stored at param_1 + 0x28 as its
 *   argument. Finally, it calls init_struct_field_at_offset_0x60 with param_1 itself as the
 *   argument. The specific roles of the struct fields and the helper functions are not
 *   determinable from the provided pseudocode and unknown callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_two_helpers_1040ad90(int param_1)

{
  *(uint8_t *)(param_1 + 0x68) = 1;
  set_flag_and_call_callback(*(uint32_t *)(param_1 + 0x28));
  init_struct_field_at_offset_0x60(param_1);
  return;
}
