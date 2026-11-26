/* @k10d store_value_and_set_flag_1041b444 @ 0x1041b444
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_set_flag_1041b444(cls_1059d1d8 *param_1,uint32_t param_2)

{
  param_1->field_0x74 = param_2;
  set_flg_obj((void *)&param_1->field_0x7c, 0x100);
  return;
}
