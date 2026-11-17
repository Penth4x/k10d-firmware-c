/* @k10d chain_two_helper_calls_10495bec @ 0x10495bec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with four arguments, then passes the result to a second helper,
 *   returning the final value.
 * summary:
 *   The function forwards its first argument plus three additional register values (r5, r6,
 *   r7) to allocate_and_init_object_104965d4. It then passes the original first argument
 *   and the return value of that call to create_object_with_init_call_10496286, returning
 *   the second helper's result. No other side effects or globals are touched in this
 *   function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int chain_two_helper_calls_10495bec(void *param_1)

{
  int iVar1;
  int r5_in;
  uint32_t r6_in;
  uint32_t r7_in;
  
  iVar1 = allocate_and_init_object_104965d4(param_1,r5_in,r6_in,r7_in);
  iVar1 = create_object_with_init_call_10496286(param_1,iVar1);
  return iVar1;
}
