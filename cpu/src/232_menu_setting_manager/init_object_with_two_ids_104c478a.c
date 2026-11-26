/* @k10d init_object_with_two_ids_104c478a @ 0x104c478a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_104c478a(int param_1,int param_2,uint16_t param_3,void *param_4)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),(void *)param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(uint16_t *)(param_1 + 0x9e) = param_3;
  *(void **)(param_1 + 0x98) = param_4;
  set_flg_obj((uint32_t *)(param_1 + 0x34), 0x200);
  return;
}
