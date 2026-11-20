/* @k10d set_flag_on_two_event_ids_10508d82 @ 0x10508d82
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_on_two_event_ids_10508d82(cls_105d5300 *param_1,int param_2)

{
  if (param_2 == 0x400001) {
    set_flg_obj((void *)&param_1->field_0x2c);
  }
  if (param_2 == 0x300002) {
    set_flg_obj((void *)&param_1->field_0x2c);
  }
  return 0;
}
