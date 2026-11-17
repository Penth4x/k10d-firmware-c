/* @k10d call_helper_with_second_field_1047a6ac @ 0x1047a6ac
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at offset 4 of the object pointed to by param_1 to a single
 *   callee.
 * summary:
 *   The function dereferences param_1, reads the 32-bit field at offset +4, and passes it
 *   as the sole argument to remove_list_entries_below_threshold. It performs no other
 *   operations and returns void. The role of the callee and the object layout are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_second_field_1047a6ac(int param_1, uint32_t param_x1)

{
  remove_list_entries_below_threshold(*(uint32_t *)(param_1 + 4),(int *)__frv_reg_unset(5));
  return;
}
