/* @k10d copy_six_fields_from_struct @ 0x1041a6d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_six_fields_from_struct(int param_1,uint32_t *param_2)

{
  *param_2 = *(uint32_t *)(param_1 + 0x1530);
  param_2[1] = *(uint32_t *)(param_1 + 0x1504);
  param_2[2] = *(uint32_t *)(param_1 + 0x1500);
  param_2[3] = (uint)(*(char *)(param_1 + 0x92) != '\0');
  param_2[4] = (uint)(*(char *)(param_1 + 0x150f) != '\0');
  param_2[5] = *(uint32_t *)(param_1 + 0x84);
  return;
}
