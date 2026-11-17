/* @k10d write_masked_field_to_object_1045633e @ 0x1045633e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_field_to_object_1045633e(int *param_1,ushort param_2)

{
  *(ushort *)(*param_1 + 0xf2) = param_2 & 0x3fc;
  return;
}
