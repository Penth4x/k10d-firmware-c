/* @k10d chain_two_helper_calls_10486176 @ 0x10486176
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 179_settings_module_init (unit names are model-proposed)
 * purpose:
 *   Calls a helper to get a value, then passes it with param_2 to a second helper,
 *   returning the result.
 * summary:
 *   The function calls get_or_init_singleton_104895da with no arguments to obtain an
 *   initial value. It then calls check_all_virtual_slots, passing the result from the first
 *   call and the input pointer param_2. The return value of the second call is returned
 *   directly. The specific roles of the callees are unknown, so the operation is described
 *   mechanically as a two-step chain.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t chain_two_helper_calls_10486176(uint32_t param_1,int *param_2)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_singleton_104895da();
  uVar1 = check_all_virtual_slots(uVar1,param_2);
  return uVar1;
}
