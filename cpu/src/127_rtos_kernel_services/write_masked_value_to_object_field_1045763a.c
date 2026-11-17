/* @k10d write_masked_value_to_object_field_1045763a @ 0x1045763a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_value_to_object_field_1045763a(int param_1,uint param_2)

{
  *(uint *)(*(int *)(param_1 + 0x10) + 0x1008) = param_2 & 0x3ffffff0;
  return;
}
