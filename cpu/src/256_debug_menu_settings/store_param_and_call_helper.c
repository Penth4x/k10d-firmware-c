/* @k10d store_param_and_call_helper @ 0x104efd0c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Stores param_2 at offset 0x42 of the object and calls a helper with the object field at
 *   0x20.
 * summary:
 *   The function takes an object pointer (param_1) and two values. It calls
 *   dispatch_context_request, passing the 4-byte value at offset 0x20 of the object, the
 *   constant 2, and the two input parameters. It then stores the low byte of param_2 at
 *   offset 0x42 of the object. The specific role of the object and the helper is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_param_and_call_helper(int param_1,uint32_t param_2,uint32_t param_3)

{
  dispatch_context_request(*(uint32_t *)(param_1 + 0x20),2,param_2,param_3);
  *(char *)(param_1 + 0x42) = (char)param_2;
  return;
}
