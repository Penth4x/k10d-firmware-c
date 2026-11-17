/* @k10d chain_two_helper_calls_10495bb0 @ 0x10495bb0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with four args, then passes the result to a second helper, returning the
 *   final value.
 * summary:
 *   The function forwards its first argument plus three additional register values (in_r5,
 *   in_r6, in_r7) to allocate_and_init_object_104962ea. It then passes the original first
 *   argument and the return value of the first call to
 *   create_object_with_init_call_10496128, returning that second result. No other
 *   operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int chain_two_helper_calls_10495bb0(void *param_1)

{
  int iVar1;
  int r5_in;
  uint32_t r6_in;
  uint32_t r7_in;
  
  iVar1 = allocate_and_init_object_104962ea(param_1,r5_in,r6_in,r7_in);
  iVar1 = create_object_with_init_call_10496128(param_1,iVar1);
  return iVar1;
}
