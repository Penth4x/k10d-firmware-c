/* @k10d store_word_at_offset_0x20 @ 0x104661e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_word_at_offset_0x20(void *param_1,uint32_t param_2)

{
  *(uint32_t *)((int)param_1 + 0x20) = param_2;
  return;
}
