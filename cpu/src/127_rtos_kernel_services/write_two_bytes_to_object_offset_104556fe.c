/* @k10d write_two_bytes_to_object_offset_104556fe @ 0x104556fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_object_offset_104556fe(int *param_1,uint16_t param_2)

{
  *(uint16_t *)(*param_1 + 0x3012) = param_2;
  return;
}
