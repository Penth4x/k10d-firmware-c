/* @k10d chain_two_helper_calls_10495bc4 @ 0x10495bc4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with four arguments, then passes the result to a second helper,
 *   returning the final value.
 * summary:
 *   The function forwards its first argument and the in-register values r5, r6, r7 to
 *   allocate_and_init_object_1049635c. It then passes the original first argument and the
 *   return value of that call to create_object_with_init_call_104960f6, returning the
 *   result of the second call. No camera-specific behavior is evident from the pseudocode
 *   or the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int chain_two_helper_calls_10495bc4(void *param_1)

{
  int iVar1;
  int r5_in;
  void *r6_in;
  void *r7_in;
  
  iVar1 = allocate_and_init_object_1049635c(param_1,r5_in,r6_in,r7_in);
  iVar1 = create_object_with_init_call_104960f6(param_1,iVar1);
  return iVar1;
}
