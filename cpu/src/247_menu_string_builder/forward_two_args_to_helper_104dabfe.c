/* @k10d forward_two_args_to_helper_104dabfe @ 0x104dabfe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Passes r4 and r5 to try_two_step_operation and returns its result unchanged.
 * summary:
 *   A one-line trampoline that forwards the first argument (r4) and r5 to
 *   try_two_step_operation and returns the callee's return value. No local computation, no
 *   side effects visible in this function. The caller is dispatch_on_eight_rodata_ids.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_two_args_to_helper_104dabfe(uint32_t r4_in, int *r5_in)

{
  uint32_t uVar1;
  
  uVar1 = try_two_step_operation(r4_in,r5_in);
  return uVar1;
}
