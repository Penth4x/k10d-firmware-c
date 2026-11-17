/* @k10d link_object_into_list_1051332e @ 0x1051332e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void link_object_into_list_1051332e(int param_1,int param_2)

{
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x161cc));
  if (*(int *)(param_2 + 0x1c) == 1) {
    *(int *)(param_1 + 0x161c8) = param_2;
  }
  *(uint32_t *)(param_2 + 0x1c) = 2;
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x161cc));
  return;
}
