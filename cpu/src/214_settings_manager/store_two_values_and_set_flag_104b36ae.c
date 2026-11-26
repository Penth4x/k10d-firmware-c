/* @k10d store_two_values_and_set_flag_104b36ae @ 0x104b36ae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_values_and_set_flag_104b36ae(cls_105b7f68 *param_1,uint32_t param_2,uint32_t param_3)

{
  param_1->field_0x38 = param_2;
  param_1->field_0x40 = param_3;
  set_flg_obj((void *)param_1->field_0x44, 0x20000000);
  return;
}
