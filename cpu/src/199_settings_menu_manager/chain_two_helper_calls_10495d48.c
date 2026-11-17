/* @k10d chain_two_helper_calls_10495d48 @ 0x10495d48
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions in sequence, passing the first result as the second argument
 *   to the second.
 * summary:
 *   The function takes a single pointer argument and an implicit second argument in r5. It
 *   calls allocate_and_init_object_10496644 with the pointer and r5/r6, then passes the
 *   result and the original pointer to allocate_and_init_object_10496254, returning the
 *   final result. The specific roles of the callees are unknown, so the operation is
 *   described mechanically as a two-step chained call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int chain_two_helper_calls_10495d48(void *param_1)

{
  int iVar1;
  uint32_t r5_in;
  uint32_t r6_in;
  
  iVar1 = allocate_and_init_object_10496644(param_1,r5_in,r6_in);
  iVar1 = allocate_and_init_object_10496254(param_1,iVar1);
  return iVar1;
}
