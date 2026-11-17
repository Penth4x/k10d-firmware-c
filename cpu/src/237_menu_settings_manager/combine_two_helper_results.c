/* @k10d combine_two_helper_results @ 0x104ce4fe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls two helpers on param_1 and passes their results to a third helper, returning the
 *   final value.
 * summary:
 *   The function takes a single pointer argument and invokes compute_division_ratio with it
 *   plus two additional register arguments (in_r5, in_r6). It then calls
 *   get_field_if_flag_set with the same pointer. The results of these two calls are passed
 *   as arguments to return_min_of_two_104ce48e, and the return value of
 *   return_min_of_two_104ce48e is returned to the caller. The specific roles of the callees
 *   are unknown, so the operation is described mechanically as a composition of three
 *   helper calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t combine_two_helper_results(void *param_1)

{
  uint uVar1;
  uint32_t uVar2;
  int r5_in;
  uint32_t r6_in;
  
  uVar1 = compute_division_ratio((int)param_1,r5_in,r6_in);
  uVar2 = get_field_if_flag_set((int)param_1);
  uVar2 = return_min_of_two_104ce48e(uVar1,uVar2);
  return uVar2;
}
