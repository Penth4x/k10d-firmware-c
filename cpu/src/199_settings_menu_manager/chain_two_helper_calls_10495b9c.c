/* @k10d chain_two_helper_calls_10495b9c @ 0x10495b9c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the original arguments, then passes the result to a second helper
 *   and returns its value.
 * summary:
 *   The function forwards param_1 and the incoming r5/r6/r7 registers to
 *   allocate_and_init_object_104962ea, then feeds the returned integer into
 *   create_object_with_init_call_104960f6 along with param_1, returning the final result.
 *   It acts as a thin two-step wrapper around the two callees. No camera-specific behavior
 *   is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int chain_two_helper_calls_10495b9c(void *param_1)

{
  int iVar1;
  int r5_in;
  uint32_t r6_in;
  uint32_t r7_in;
  
  iVar1 = allocate_and_init_object_104962ea(param_1,r5_in,r6_in,r7_in);
  iVar1 = create_object_with_init_call_104960f6(param_1,iVar1);
  return iVar1;
}
