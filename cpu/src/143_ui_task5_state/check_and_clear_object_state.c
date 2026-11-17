/* @k10d check_and_clear_object_state @ 0x10466fb4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * purpose:
 *   Checks a condition on the object and, if true, calls two helpers to modify its state.
 * summary:
 *   The function calls read_byte_at_offset_0x29 with the input pointer to get a boolean-
 *   like result. If the result is non-zero, it calls check_kernel_object_id_valid with an
 *   offset (param_1 + 0xc) and then calls set_byte_at_offset_0x29 with the original pointer
 *   and 0. The specific roles of the callees are unknown, so the operation is described
 *   mechanically as a conditional state update.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_clear_object_state(void *param_1)

{
  char cVar1;
  
  cVar1 = read_byte_at_offset_0x29(param_1);
  if (cVar1 != '\0') {
    check_kernel_object_id_valid((void *)((int)param_1 + 0xc));
    set_byte_at_offset_0x29(param_1,0);
  }
  return;
}
