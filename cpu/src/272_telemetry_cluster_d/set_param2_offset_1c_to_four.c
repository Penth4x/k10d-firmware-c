/* @k10d set_param2_offset_1c_to_four @ 0x105135dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Calls two helpers on a param_1 sub-object and writes the constant 4 to param_2+0x1c.
 * summary:
 *   The function invokes call_kernel_with_short_id and check_kernel_call_success_10459d88
 *   with a pointer to param_1+0x161cc, then stores the value 4 at offset 0x1c of the
 *   param_2 structure. The specific roles of the two callees and the meaning of the stored
 *   value are not determinable from the provided pseudocode and unknown callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_param2_offset_1c_to_four(int param_1,void *param_2)

{
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x161cc));
  *(uint32_t *)((int)param_2 + 0x1c) = 4;
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x161cc));
  return;
}
