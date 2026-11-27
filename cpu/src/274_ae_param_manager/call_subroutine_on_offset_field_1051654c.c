/* @k10d call_subroutine_on_offset_field_1051654c @ 0x1051654c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Passes a pointer to a field at offset 0x2b8 of the object in param_1 to a single
 *   callee.
 * summary:
 *   The function takes a single pointer argument, adds the constant offset 0x2b8, and
 *   passes the resulting address to append_word_to_dynamic_array. It performs no other
 *   operations and returns void. The role of the callee and the specific field at offset
 *   0x2b8 are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_offset_field_1051654c(int param_1, uint32_t param_x1)
{
  append_word_to_dynamic_array((void *)(param_1 + 0x2b8), (uint32_t)param_x1);
  return;
}
