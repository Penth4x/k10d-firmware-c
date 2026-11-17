/* @k10d increment_context_field_0x20 @ 0x104661ee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void increment_context_field_0x20(void *param_1)

{
  *(int *)((int)param_1 + 0x20) = *(int *)((int)param_1 + 0x20) + 1;
  return;
}
