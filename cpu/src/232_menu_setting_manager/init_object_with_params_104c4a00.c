/* @k10d init_object_with_params_104c4a00 @ 0x104c4a00
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_params_104c4a00(int param_1,int param_2,uint16_t param_3,uint8_t param_4,uint8_t param_5)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),(void *)param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(uint16_t *)(param_1 + 0xa2) = param_3;
  *(uint8_t *)(param_1 + 0xa4) = param_4;
  *(uint8_t *)(param_1 + 0xa5) = param_5;
  *(uint8_t *)(param_1 + 0x9c) = 1;
  set_flg_obj((uint32_t *)(param_1 + 0x34));
  return;
}
