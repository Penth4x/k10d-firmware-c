/* @k10d chain_two_helper_calls_10495bd8 @ 0x10495bd8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with four arguments, then passes the result to a second helper,
 *   returning the final value.
 * summary:
 *   The function forwards its first argument and three additional register values (r5, r6,
 *   r7) to allocate_and_init_object_1049635c. It then takes the return value of that call
 *   and passes it, along with the original first argument, to
 *   create_object_with_init_call_10496128. The return value of
 *   create_object_with_init_call_10496128 is returned to the caller. The specific roles of
 *   the callees are unknown, so the operation is described mechanically as a two-step
 *   chained call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int chain_two_helper_calls_10495bd8(void *param_1)

{
  int iVar1;
  int r5_in;
  void *r6_in;
  void *r7_in;
  
  iVar1 = allocate_and_init_object_1049635c(param_1,r5_in,r6_in,r7_in);
  iVar1 = create_object_with_init_call_10496128(param_1,iVar1);
  return iVar1;
}
