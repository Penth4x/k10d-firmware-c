/* @k10d call_two_helpers_on_object_10514cfa @ 0x10514cfa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions using a field at offset 0x58 and the object pointer
 *   itself.
 * summary:
 *   The function takes an object pointer in param_1. It reads the integer at offset 0x58
 *   and passes it as the first argument to link_object_into_list_1051332e, along with the
 *   value in r5. It then calls set_flag_at_offset_0x34c with the original object pointer.
 *   The specific roles of the callees are unknown, so the operation is described
 *   mechanically as a sequence of two calls on an object structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_object_10514cfa(int param_1)

{
  int r5_in;
  
  link_object_into_list_1051332e(*(int *)(param_1 + 0x58),r5_in);
  set_flag_at_offset_0x34c(param_1);
  return;
}
