/* @k10d set_flag_and_increment_counter @ 0x1041d9ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_increment_counter(cls_1059d1d8 *param_1)

{
  set_flg_obj((void *)&param_1->field_0xcc, 0x1);
  if (param_1->field_0x98 != '\0') {
    param_1->field_0x9c = param_1->field_0x9c + 1;
  }
  return;
}
