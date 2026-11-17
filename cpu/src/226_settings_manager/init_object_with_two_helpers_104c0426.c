/* @k10d init_object_with_two_helpers_104c0426 @ 0x104c0426
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a structure by calling two helper functions with the object pointer and an
 *   offset.
 * summary:
 *   The function takes a single pointer argument and passes it to
 *   invoke_virtual_method_on_object_104bf7ee along with a pointer offset by 0x230. It then
 *   calls invoke_virtual_slot_two_104bf5b6 with the original pointer. The specific roles of
 *   the callees are unknown, but the pattern suggests a two-step initialization or setup
 *   routine for a data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_helpers_104c0426(int param_1)

{
  invoke_virtual_method_on_object_104bf7ee(param_1,param_1 + 0x230);
  invoke_virtual_slot_two_104bf5b6(param_1);
  return;
}
