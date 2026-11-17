/* @k10d forward_three_params_to_helper_10394a38 @ 0x10394a38
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper to get a value, then forwards it with three parameters to
 *   another helper and returns the result.
 * summary:
 *   The function makes two sequential calls. First it calls
 *   get_or_create_sram_object_1040a240 with no arguments to obtain a value. It then passes
 *   that value along with param_2, param_3, and param_4 to
 *   try_primary_then_fallback_handler, returning the result of that second call. The
 *   specific roles of the callees and parameters are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_three_params_to_helper_10394a38(void *param_1,void *param_2,void *param_3,void *param_4)

{
  uint32_t uVar1;
  
  uVar1 = get_or_create_sram_object_1040a240();
  uVar1 = try_primary_then_fallback_handler((void *)uVar1,param_2,param_3,param_4);
  return uVar1;
}
