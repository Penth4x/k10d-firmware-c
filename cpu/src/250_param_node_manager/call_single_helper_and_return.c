/* @k10d call_single_helper_and_return @ 0x104df434
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Calls find_first_free_bit and returns its result unchanged.
 * summary:
 *   A one-line wrapper that invokes find_first_free_bit and returns the value in r4. No
 *   local state is modified and no other side effects are visible. The caller
 *   cls_10562400_new uses it during object construction, but the callee's role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_single_helper_and_return(void)

{
  void *r4_in;
  uint uVar1;
  
  uVar1 = find_first_free_bit(r4_in);
  return uVar1;
}
