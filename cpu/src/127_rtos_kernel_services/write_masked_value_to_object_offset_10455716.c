/* @k10d write_masked_value_to_object_offset_10455716 @ 0x10455716
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_value_to_object_offset_10455716(int *param_1,ushort param_2)

{
  *(ushort *)(*param_1 + 0x3014) = param_2 & 0x3fff;
  return;
}
