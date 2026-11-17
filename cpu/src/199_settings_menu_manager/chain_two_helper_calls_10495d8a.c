/* @k10d chain_two_helper_calls_10495d8a @ 0x10495d8a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the original parameters, then passes its result to a second helper
 *   and returns that result.
 * summary:
 *   The function forwards param_1 and several register/stack arguments to
 *   allocate_and_init_object_1049671e, takes the returned integer, and passes it along with
 *   param_1 to create_object_with_init_call_10496222. It returns the final value from
 *   create_object_with_init_call_10496222. No camera-specific behavior is evident from the
 *   pseudocode or the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int chain_two_helper_calls_10495d8a(void *param_1)

{
  int iVar1;
  int r5_in;
  uint32_t r6_in;
  uint32_t r7_in;
  ushort in_stack_00000002;
  
  iVar1 = allocate_and_init_object_1049671e(param_1,r5_in,r6_in,r7_in,in_stack_00000002);
  iVar1 = create_object_with_init_call_10496222(param_1,iVar1);
  return iVar1;
}
