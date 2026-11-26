/* @k10d init_object_with_three_params_104c46f8 @ 0x104c46f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_three_params_104c46f8(int param_1,int param_2,uint32_t param_3)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),(void *)param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(uint32_t *)(param_1 + 0x84) = param_3;
  set_flg_obj((uint32_t *)(param_1 + 0x34), 0x40);
  return;
}
