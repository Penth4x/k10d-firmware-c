/* @k10d init_object_with_four_params @ 0x104c4a7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_four_params(int param_1,void *param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5
                 ,uint32_t param_6)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(uint32_t *)(param_1 + 0xac) = param_3;
  *(uint32_t *)(param_1 + 0xb0) = param_4;
  *(uint32_t *)(param_1 + 0xb4) = param_5;
  *(uint32_t *)(param_1 + 0xb8) = param_6;
  set_flg_obj((uint32_t *)(param_1 + 0x34));
  return;
}
