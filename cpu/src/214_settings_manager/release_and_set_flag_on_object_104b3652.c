/* @k10d release_and_set_flag_on_object_104b3652 @ 0x104b3652
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_and_set_flag_on_object_104b3652(cls_105b7f68 *param_1, uint32_t param_2, uint32_t param_3)
{
  call_once_if_flag_zero(param_1->field_0x30, (uint32_t)param_2, (uint32_t)param_3);
  set_flg_obj((void *)param_1->field_0x44, 0x8000);
  return;
}
