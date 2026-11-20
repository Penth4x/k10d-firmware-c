/* @k10d set_flag_and_init_object @ 0x10414132
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_init_object(cls_1059c10c *param_1)

{
  param_1[1].field_0x557 = 1;
  set_flg_obj((uint32_t *)&param_1[1].field_0x580);
  return;
}
