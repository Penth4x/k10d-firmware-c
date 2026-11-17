/* @k10d chain_two_helper_calls_10495c2e @ 0x10495c2e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with six arguments, then passes the result to a second helper and
 *   returns its value.
 * summary:
 *   The function forwards param_1 plus four additional register/stack arguments to
 *   allocate_and_init_object_1049645a. It then passes param_1 and the first helper's return
 *   value to allocate_and_init_object_104961f0, returning that second result. No camera-
 *   specific behavior is evident from the pseudocode or unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int chain_two_helper_calls_10495c2e(void *param_1)

{
  int iVar1;
  uint32_t r5_in;
  uint32_t r6_in;
  uint32_t r7_in;
  ushort in_stack_00000002;
  ushort in_stack_00000006;
  
  iVar1 = allocate_and_init_object_1049645a(param_1,r5_in,r6_in,r7_in,in_stack_00000002,in_stack_00000006);
  iVar1 = allocate_and_init_object_104961f0(param_1,iVar1);
  return iVar1;
}
