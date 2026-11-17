/* @k10d call_helper_with_second_field_1047a6be @ 0x1047a6be
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at offset 4 of the object pointed to by param_1 to
 *   remove_list_node_by_key.
 * summary:
 *   This is a one-line wrapper that dereferences param_1, reads the word at offset +4, and
 *   forwards it as the sole argument to remove_list_node_by_key. No other side effects or
 *   state changes are visible. The caller is create_and_configure_object_1047c484.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_second_field_1047a6be(int param_1, uint32_t param_x1, uint32_t param_x2)

{
  remove_list_node_by_key(*(uint32_t *)(param_1 + 4),__frv_reg_unset(5),(int *)__frv_reg_unset(6));
  return;
}
