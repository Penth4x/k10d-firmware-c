/* @k10d init_object_with_two_ids_104c4728 @ 0x104c4728
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_104c4728(int param_1,int param_2,void *param_3,uint32_t param_4)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),(void *)param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(void **)(param_1 + 0x78) = param_3;
  *(uint32_t *)(param_1 + 0x7c) = param_4;
  set_flg_obj((uint32_t *)(param_1 + 0x34), 0x80);
  return;
}
