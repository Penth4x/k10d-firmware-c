/* @k10d store_value_and_set_flag_104afd72 @ 0x104afd72
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_set_flag_104afd72(cls_105b7994 *param_1,uint32_t param_2)

{
  param_1->field_0x50 = param_2;
  set_flg_obj((void *)param_1->field_0x34, 0x20);
  return;
}
