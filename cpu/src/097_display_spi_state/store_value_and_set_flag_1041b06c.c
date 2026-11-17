/* @k10d store_value_and_set_flag_1041b06c @ 0x1041b06c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_set_flag_1041b06c(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x50) = param_2;
  set_flg_obj((uint32_t *)(param_1 + 0x7c));
  return;
}
