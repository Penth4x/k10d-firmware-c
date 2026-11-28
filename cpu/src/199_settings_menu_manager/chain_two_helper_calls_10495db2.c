/* @k10d chain_two_helper_calls_10495db2 @ 0x10495db2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls two helpers in sequence, passing the first result as the second argument to the
 *   next.
 * summary:
 *   Takes param_1 plus three additional register arguments (r5-r7) and calls
 *   allocate_and_init_object_104962ea with all four. The return value is then passed as the
 *   second argument to allocate_and_init_object_104962b8 along with the original param_1,
 *   and that result is returned. Both callees are unnamed, so the specific subsystem role
 *   cannot be determined from this wrapper alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int chain_two_helper_calls_10495db2(void *ctx)

{
  int alloc_result;
  int arg_r5;
  uint32_t arg_r6;
  uint32_t arg_r7;

  alloc_result = allocate_and_init_object_104962ea(ctx, arg_r5, arg_r6, arg_r7);
  alloc_result = allocate_and_init_object_104962b8(ctx, alloc_result);
  return alloc_result;
}
