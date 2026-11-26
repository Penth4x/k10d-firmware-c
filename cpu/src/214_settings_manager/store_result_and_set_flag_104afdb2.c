/* @k10d store_result_and_set_flag_104afdb2 @ 0x104afdb2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_and_set_flag_104afdb2(cls_105b7994 *param_1,uint32_t *param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = copy_bytes_with_alignment((void *)param_1->field_0x5c,param_2,param_3,0x200);
  param_1->field_0x60 = uVar1;
  set_flg_obj((void *)param_1->field_0x34, 0x100);
  return;
}
