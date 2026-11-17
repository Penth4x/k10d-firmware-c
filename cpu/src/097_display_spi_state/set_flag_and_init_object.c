/* @k10d set_flag_and_init_object @ 0x10414132
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_init_object(int param_1)

{
  *(uint8_t *)(param_1 + 0x150f) = 1;
  set_flg_obj((uint32_t *)(param_1 + 0x1538));
  return;
}
