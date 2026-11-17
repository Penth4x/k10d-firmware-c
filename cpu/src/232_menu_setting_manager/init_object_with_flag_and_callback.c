/* @k10d init_object_with_flag_and_callback @ 0x104c48de
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_flag_and_callback(int param_1,void *param_2)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(uint8_t *)(param_1 + 0x9c) = 1;
  set_flg_obj((uint32_t *)(param_1 + 0x34));
  return;
}
