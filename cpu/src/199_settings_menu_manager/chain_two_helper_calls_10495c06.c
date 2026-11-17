/* @k10d chain_two_helper_calls_10495c06 @ 0x10495c06
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the original arguments, then passes its result to a second helper
 *   and returns that.
 * summary:
 *   The function forwards param_1 plus several register/stack arguments to
 *   allocate_and_init_object_with_dims, takes the returned int, and passes it as the second
 *   argument to create_object_with_init_call_104961be along with param_1. The final return
 *   value is the result of create_object_with_init_call_104961be. No camera-specific
 *   behavior is evident from the pseudocode or the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int chain_two_helper_calls_10495c06(void *param_1)

{
  int iVar1;
  uint32_t r5_in;
  uint32_t r6_in;
  uint32_t r7_in;
  ushort in_stack_00000002;
  ushort in_stack_00000006;
  
  iVar1 = allocate_and_init_object_with_dims(param_1,r5_in,r6_in,r7_in,in_stack_00000002,in_stack_00000006);
  iVar1 = create_object_with_init_call_104961be(param_1,iVar1);
  return iVar1;
}
