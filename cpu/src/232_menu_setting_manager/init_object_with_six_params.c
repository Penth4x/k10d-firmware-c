/* @k10d init_object_with_six_params @ 0x104c4c1c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_six_params(int param_1,void *param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5
                 ,uint32_t param_6,uint32_t param_7,uint32_t param_8)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(uint32_t *)(param_1 + 0x1f8) = param_3;
  *(uint32_t *)(param_1 + 0x1fc) = param_4;
  *(uint32_t *)(param_1 + 0x200) = param_5;
  *(uint32_t *)(param_1 + 0x204) = param_6;
  *(uint32_t *)(param_1 + 0x208) = param_7;
  *(uint32_t *)(param_1 + 0x20c) = param_8;
  set_flg_obj((uint32_t *)(param_1 + 0x34), 0x400000);
  return;
}
