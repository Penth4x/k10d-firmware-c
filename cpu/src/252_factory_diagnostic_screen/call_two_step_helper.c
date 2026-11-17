/* @k10d call_two_step_helper @ 0x104e58f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Calls a getter then passes its result with two parameters to a second function,
 *   returning the final value.
 * summary:
 *   The function invokes get_or_init_sram_buffer_10478858 with no arguments to obtain a
 *   value. It then passes that value along with param_2 and param_3 to
 *   validate_iso_code_string. The return value of validate_iso_code_string is returned
 *   directly. The specific roles of the callees are unknown, so the operation is described
 *   mechanically as a chained call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_step_helper(void *param_1,void *param_2,void *param_3)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_sram_buffer_10478858();
  uVar1 = validate_iso_code_string(uVar1,param_2,param_3);
  return uVar1;
}
