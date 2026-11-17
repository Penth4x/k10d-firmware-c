/* @k10d call_helper_with_0x50000 @ 0x104270a4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Calls invoke_virtual_method_on_object_10427056 with param_1, the constant 0x50000, and
 *   param_2.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   invoke_virtual_method_on_object_10427056, inserting the constant 0x50000 as the second
 *   argument. It performs no other operations or side effects. The role of
 *   invoke_virtual_method_on_object_10427056 is unknown, so the specific subsystem cannot
 *   be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_0x50000(uint32_t param_1,uint32_t param_2)

{
  invoke_virtual_method_on_object_10427056(param_1,0x50000,param_2);
  return;
}
