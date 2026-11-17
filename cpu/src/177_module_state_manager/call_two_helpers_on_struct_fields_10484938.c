/* @k10d call_two_helpers_on_struct_fields_10484938 @ 0x10484938
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on two different fields of a struct passed as the first argument.
 * summary:
 *   The function takes a struct pointer in param_1 and an extra value in param_2. It calls
 *   write_field_at_offset_four_104282f8 twice: first with the address of the field at
 *   offset 0x14, and second with the value stored at offset 0xc and the param_2 argument.
 *   No other operations or side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_struct_fields_10484938(int param_1,uint32_t param_2)

{
  write_field_at_offset_four_104282f8(param_1 + 0x14, __frv_reg_unset(5));
  write_field_at_offset_four_104282f8(*(uint32_t *)(param_1 + 0xc),param_2);
  return;
}
