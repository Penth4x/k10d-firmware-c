/* @k10d set_object_fields_and_flag_104afde2 @ 0x104afde2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_fields_and_flag_104afde2(cls_105b7994 *param_1,uint8_t param_2,uint32_t param_3)

{
  param_1->field_0x54 = param_2;
  param_1->field_0x58 = param_3;
  set_flg_obj((void *)param_1->field_0x34);
  return;
}
