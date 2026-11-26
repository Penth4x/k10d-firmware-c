/* @k10d store_result_and_set_flag_104afe1e @ 0x104afe1e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_result_and_set_flag_104afe1e(cls_105b7994 *param_1,uint32_t *param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = copy_bytes_with_alignment((uint32_t *)param_1->field_0x64,param_2,param_3,0x200);
  param_1->field_0x68 = uVar1;
  set_flg_obj((uint32_t *)param_1->field_0x34, 0x800);
  return;
}
