/* @k10d dispatch_seven_subroutines @ 0x1047176c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Calls a sequence of seven helper functions, passing param_1 to most of them.
 * summary:
 *   The function first calls release_five_object_slots with no arguments. It then calls
 *   release_three_sub_objects with the value at offset 0x1c of param_1. Finally, it calls
 *   six other functions (release_object_at_offset_0x24_104717e6 through
 *   call_two_ops_on_subobject_10471918), each passing param_1 as an argument. The specific
 *   roles of these callees are unknown, so the function acts as a dispatcher or initializer
 *   sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_seven_subroutines(int param_1)

{
  release_five_object_slots((uint32_t)param_1);
  release_three_sub_objects(*(uint32_t *)(param_1 + 0x1c));
  release_object_at_offset_0x24_104717e6(param_1);
  call_two_ops_on_subobject_1047181c(param_1);
  release_object_at_offset_0x28(param_1);
  call_two_helpers_on_subobject_10471876(param_1);
  release_object_at_offset_0x2c_104718e2(param_1);
  call_two_ops_on_subobject_10471918(param_1);
  return;
}
