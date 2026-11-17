/* @k10d init_object_with_params_104c45a0 @ 0x104c45a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_params_104c45a0(int param_1,void *param_2,uint32_t param_3,int param_4,uint32_t param_5,
                 uint32_t param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9,
                 uint8_t param_10)

{
  int iVar1;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(uint32_t *)(param_1 + 0x50) = param_3;
  iVar1 = 8;
  do {
    iVar1 = iVar1 + -4;
    *(uint32_t *)(iVar1 + param_1 + 0x54) = *(uint32_t *)(iVar1 + param_4);
  } while (iVar1 != 0);
  *(uint32_t *)(param_1 + 0x5c) = param_5;
  *(uint32_t *)(param_1 + 0x60) = param_6;
  *(uint32_t *)(param_1 + 100) = param_7;
  *(uint32_t *)(param_1 + 0x7c) = param_8;
  *(uint32_t *)(param_1 + 0x68) = param_9;
  *(uint8_t *)(param_1 + 0x6c) = param_10;
  set_flg_obj((uint32_t *)(param_1 + 0x34));
  return;
}
