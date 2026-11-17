/* @k10d call_three_helpers_on_struct_1052b9b2 @ 0x1052b9b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions on a struct pointer and a scalar argument in a fixed
 *   sequence.
 * summary:
 *   The function takes a pointer to a 4-byte-aligned struct (param_1) and an undefined4
 *   value (param_2). It calls call_kernel_with_short_id with param_1+1, then
 *   write_param_to_object_offset_0x14 with *param_1 and param_2, and finally
 *   check_kernel_call_success_10459d88 with param_1+1. The specific roles of the callees
 *   are unknown, so the mechanical behavior is a sequence of three calls on the provided
 *   data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_helpers_on_struct_1052b9b2(uint32_t *param_1,uint32_t param_2)

{
  call_kernel_with_short_id(param_1 + 1);
  write_param_to_object_offset_0x14(*param_1,param_2);
  check_kernel_call_success_10459d88(param_1 + 1);
  return;
}
