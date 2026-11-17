/* @k10d chain_two_helper_calls_10495cf2 @ 0x10495cf2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the original arguments, then passes its result to a second helper
 *   and returns that.
 * summary:
 *   The function forwards param_1 and several register/stack values to
 *   allocate_and_init_object_104964de, takes the returned integer, and passes it along with
 *   param_1 to allocate_and_init_object_1049615a, returning the final result. It acts as a
 *   thin two-step wrapper around the two callees. No camera-specific behavior is evident
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int chain_two_helper_calls_10495cf2(void *param_1)

{
  int iVar1;
  int r5_in;
  uint32_t r6_in;
  uint32_t r7_in;
  uint8_t in_stack_00000003;
  char in_stack_00000007;
  
  iVar1 = allocate_and_init_object_104964de(param_1,r5_in,r6_in,r7_in,in_stack_00000003,in_stack_00000007);
  iVar1 = allocate_and_init_object_1049615a(param_1,iVar1);
  return iVar1;
}
