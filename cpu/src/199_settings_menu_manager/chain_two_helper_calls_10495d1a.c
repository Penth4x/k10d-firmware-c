/* @k10d chain_two_helper_calls_10495d1a @ 0x10495d1a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with six arguments, then passes the result to a second helper, returning
 *   the final value.
 * summary:
 *   The function forwards its first argument and several register/stack values to
 *   allocate_and_init_object_1049655a, takes the returned integer, and passes it along with
 *   the original first argument to allocate_and_init_object_1049618c. It returns the result
 *   of the second call. No camera-specific behavior is evident from the pseudocode or the
 *   unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int chain_two_helper_calls_10495d1a(void *param_1)

{
  int iVar1;
  uint16_t r5_in;
  int r6_in;
  int r7_in;
  uint16_t in_stack_00000002;
  uint16_t in_stack_00000006;
  
  iVar1 = allocate_and_init_object_1049655a(param_1,r5_in,r6_in,r7_in,in_stack_00000002,in_stack_00000006);
  iVar1 = allocate_and_init_object_1049618c(param_1,iVar1);
  return iVar1;
}
