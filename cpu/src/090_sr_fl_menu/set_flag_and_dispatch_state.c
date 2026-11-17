/* @k10d set_flag_and_dispatch_state @ 0x103ff76e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_dispatch_state(int *param_1,uint16_t param_2)

{
  int iVar1;
  int iVar2;
  
  *(uint16_t *)(param_1 + 3) = param_2;
  get_or_create_singleton_object_104fb12e();
  iVar1 = menu_item_register(*param_1);
  iVar2 = debug_mode_wrapper();
  if (iVar2 == 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  check_mode_transition_validity(param_1,0);
  return;
}
