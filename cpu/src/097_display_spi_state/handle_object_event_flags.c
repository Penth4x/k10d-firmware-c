/* @k10d handle_object_event_flags @ 0x1041b010
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t handle_object_event_flags(cls_1059d1d8 *param_1,int param_2,int param_3)

{
  if (param_2 == 0x80002) {
    param_1->field_0x78 = 1;
  }
  else if (param_2 < 0x80003) {
    if (param_2 == 0x80001) {
      param_1->field_0x78 = 0;
      set_flg_obj((void *)&param_1->field_0x7c, 0x20);
    }
  }
  else if (param_2 == 0x160001) {
    param_1->field_0x8e = param_3 != 0;
  }
  return 1;
}
