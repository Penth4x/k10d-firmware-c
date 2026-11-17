/* @k10d query_and_store_bool_result @ 0x104b507c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a pointer from offset 0x60 and stores the boolean result at offset
 *   0x5c.
 * summary:
 *   The function dereferences the pointer at param_1 + 0x60 and passes it to
 *   invoke_virtual_method_with_result. It then passes the boolean return value of that call
 *   to set_shutter_trigger_state along with the value at param_1 + 0x5c. Finally, it
 *   returns 1. The specific roles of the callees and the object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_and_store_bool_result(int param_1)

{
  bool bVar1;
  void *r5_in;
  
  bVar1 = invoke_virtual_method_with_result(*(int **)(param_1 + 0x60),r5_in);
  set_shutter_trigger_state((void *)(*(uint32_t *)(param_1 + 0x5c)),bVar1);
  return 1;
}
