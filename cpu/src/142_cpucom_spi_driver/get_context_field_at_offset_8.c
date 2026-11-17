/* @k10d get_context_field_at_offset_8 @ 0x104651a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_context_field_at_offset_8(int param_1)

{
  return *(uint32_t *)(param_1 + 8);
}
