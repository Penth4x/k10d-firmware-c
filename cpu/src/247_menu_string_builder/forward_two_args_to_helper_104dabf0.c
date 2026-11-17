/* @k10d forward_two_args_to_helper_104dabf0 @ 0x104dabf0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Forwards its two input arguments to try_two_step_operation and returns the result
 *   unchanged.
 * summary:
 *   This is a thin wrapper that passes in_r4 and in_r5 directly to try_two_step_operation
 *   and returns the callee's return value. No local state is modified and no other
 *   operations are performed. The caller at 0x104da356 invokes this wrapper, but the
 *   underlying behavior is entirely determined by the unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_two_args_to_helper_104dabf0(void)

{
  uint32_t r4_in;
  uint32_t uVar1;
  int *r5_in;
  
  uVar1 = try_two_step_operation(r4_in,r5_in);
  return uVar1;
}
