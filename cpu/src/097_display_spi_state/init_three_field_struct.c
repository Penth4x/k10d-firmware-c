/* @k10d init_three_field_struct @ 0x1040f6c6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_three_field_struct(uint32_t *param_1,void *param_2,uint32_t param_3)

{
  param_1[1] = (uint32_t)param_2;
  param_1[2] = (uint32_t)param_2;
  *param_1 = param_3;
  return;
}
