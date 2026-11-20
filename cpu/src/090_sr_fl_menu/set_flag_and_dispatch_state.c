/* @k10d set_flag_and_dispatch_state @ 0x103ff76e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_dispatch_state(cls_105983cc *param_1,uint16_t param_2)

{
  int iVar1;
  int iVar2;
  
  param_1->field_0xc = param_2;
  get_or_create_singleton_object_104fb12e();
  iVar1 = menu_item_register((int)param_1->field_0x0);
  iVar2 = debug_mode_wrapper();
  if (iVar2 == 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  }
  else {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  check_mode_transition_validity(&param_1->field_0x0,0);
  return;
}
