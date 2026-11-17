/* @k10d set_flag_and_conditional_call @ 0x104347b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 121_menu_item_state (unit names are model-proposed)
 * purpose:
 *   Writes a boolean to an object field and conditionally invokes a helper on the object.
 * summary:
 *   The function calls write_object_field_byte with the value at param_1+0x1c, the constant
 *   2, and a boolean derived from param_2. If param_3 is non-zero, it then calls
 *   resubmit_cpucom_context with param_1. The specific roles of the callees and the object
 *   structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_conditional_call(int param_1,int param_2,int param_3)

{
  write_object_field_byte((void *)(*(uint32_t *)(param_1 + 0x1c)),2,param_2 != 0);
  if (param_3 != 0) {
    resubmit_cpucom_context(param_1);
  }
  return;
}
