/* @k10d store_value_and_set_flag_104b33fe @ 0x104b33fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_and_set_flag_104b33fe(cls_105b7f68 *param_1,uint32_t param_2)

{
  param_1->field_0x3c = param_2;
  set_flg_obj((void *)param_1->field_0x44);
  return;
}
