/* @k10d call_helper_if_field_nonzero_1048d4b2 @ 0x1048d4b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper function when the integer at offset 4 of the passed structure is non-
 *   zero.
 * summary:
 *   Checks the 4-byte field at param_1 + 4. If it is not zero, calls
 *   fill_buffer_with_pattern with no arguments. Returns void. The role of the field and the
 *   callee is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_field_nonzero_1048d4b2(int param_1, uint32_t param_x1)

{
  if (*(int *)(param_1 + 4) != 0) {
    fill_buffer_with_pattern((ushort *)__frv_reg_unset(4));
  }
  return;
}
