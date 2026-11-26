/* @k10d set_flag_if_param2_is_0x400002 @ 0x10506152
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_if_param2_is_0x400002(cls_105d5094 *param_1,int param_2)

{
  if (param_2 == 0x400002) {
    set_flg_obj((void *)&param_1->field_0x28, 0x1);
  }
  return 0;
}
