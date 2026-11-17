/* @k10d write_masked_value_to_struct_field_10457952 @ 0x10457952
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_value_to_struct_field_10457952(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 6) = param_2 & 0xfff;
  return;
}
