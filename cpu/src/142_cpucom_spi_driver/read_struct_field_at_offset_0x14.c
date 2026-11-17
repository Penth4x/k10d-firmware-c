/* @k10d read_struct_field_at_offset_0x14 @ 0x104655c2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_struct_field_at_offset_0x14(void *param_1)

{
  return *(uint32_t *)((int)param_1 + 0x14);
}
