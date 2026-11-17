/* @k10d forward_two_params_to_helper_1039154c @ 0x1039154c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 039_sr_settings_handler (unit names are model-proposed)
 * purpose:
 *   Passes a pointer offset by 0x2c20 from param_1 and param_2 to a helper and returns its
 *   boolean result.
 * summary:
 *   The function computes a pointer by adding 0x2c20 to param_1 and calls
 *   check_heap_alloc_success with that pointer and param_2. It returns the boolean value
 *   from the callee directly. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool forward_two_params_to_helper_1039154c(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = check_heap_alloc_success((int *)(param_1 + 0x2c20),param_2);
  return bVar1;
}
