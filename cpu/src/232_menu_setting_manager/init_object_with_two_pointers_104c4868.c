/* @k10d init_object_with_two_pointers_104c4868 @ 0x104c4868
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_pointers_104c4868(int param_1,int param_2,uint32_t param_3,void *param_4)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),(void *)param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(uint32_t *)(param_1 + 0x90) = param_3;
  *(void **)(param_1 + 0x94) = param_4;
  *(uint32_t *)(param_1 + 0x80) = 0;
  set_flg_obj((uint32_t *)(param_1 + 0x34));
  return;
}
