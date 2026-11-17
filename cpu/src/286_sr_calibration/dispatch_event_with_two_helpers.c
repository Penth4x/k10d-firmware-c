/* @k10d dispatch_event_with_two_helpers @ 0x1052b768
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions on a struct member and one central function with the struct
 *   pointer and two parameters.
 * summary:
 *   The function takes a pointer to a structure (param_1) and two additional parameters. It
 *   calls call_kernel_with_short_id on the second word of the structure, then calls
 *   write_two_word_pair_to_object with the first word of the structure, param_2, the
 *   constant 1, and param_3. Finally, it calls check_kernel_call_success_10459d88 on the
 *   second word of the structure and returns 1. The specific roles of the callees are
 *   unknown, but the pattern suggests a state change or event dispatch involving a central
 *   operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_with_two_helpers(uint32_t *param_1,uint32_t param_2,uint32_t param_3)

{
  call_kernel_with_short_id(param_1 + 1);
  write_two_word_pair_to_object(*param_1,param_2,1,param_3);
  check_kernel_call_success_10459d88(param_1 + 1);
  return 1;
}
