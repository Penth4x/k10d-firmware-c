/* @k10d write_masked_value_to_struct_offset_1045764e @ 0x1045764e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_value_to_struct_offset_1045764e(int param_1,uint param_2)

{
  *(uint *)(*(int *)(param_1 + 0x10) + 0x1010) = param_2 & 0x3ffffff0;
  return;
}
