/* @k10d configure_object_with_seven_params_104d6aea @ 0x104d6aea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
configure_object_with_seven_params_104d6aea(uint32_t param_1,uint32_t param_2,int param_3,uint32_t param_4,char param_5,
            void *param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9,
            uint32_t param_10,uint32_t param_11)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  cls_105ba0ac cStack_28;
  
  (*(code *)0x104de094/*ROM*/)();
  write_field_at_offset_0x2370(param_1,4);
  store_value_at_offset_0x2b14(param_1,param_3);
  if (param_3 == 2) {
    add_offset_to_pointer_104d6882(param_1);
    uVar1 = (*(code *)0x104d8b20/*ROM*/)();
    uVar3 = 0x18;
  }
  else {
    add_offset_to_pointer_104d6882(param_1);
    uVar1 = (*(code *)0x104d8b20/*ROM*/)();
    uVar3 = 0;
  }
  (*(code *)0x104d57fc/*ROM*/)(uVar1,uVar3);
  uVar1 = add_offset_to_pointer_104d6882(param_1);
  (*(code *)0x104d8ac4/*ROM*/)(uVar1,param_4);
  if (param_5 == '\0') {
    add_offset_to_pointer_104d6882(param_1);
    uVar1 = (*(code *)0x104d8aec/*ROM*/)();
    uVar3 = 1;
  }
  else {
    add_offset_to_pointer_104d6882(param_1);
    uVar1 = (*(code *)0x104d8aec/*ROM*/)();
    uVar3 = 2;
  }
  (*(code *)0x104d5a0e/*ROM*/)(uVar1,uVar3);
  add_offset_to_pointer_104d6882(param_1);
  iVar2 = add_offset_to_pointer_104d8ad0(__frv_reg_unset(4));
  store_value_at_offset_0x794(iVar2,param_7);
  add_offset_to_pointer_104d6882(param_1);
  uVar1 = (*(code *)0x104d8ad8/*ROM*/)();
  (*(code *)0x104d5c7c/*ROM*/)(uVar1,param_8);
  add_offset_to_pointer_104d6882(param_1);
  uVar1 = (*(code *)0x104d8ae2/*ROM*/)();
  (*(code *)0x104d5454/*ROM*/)(uVar1,param_9);
  add_offset_to_pointer_104d6882(param_1);
  uVar1 = (*(code *)0x104d8b22/*ROM*/)();
  (*(code *)0x104d5e8e/*ROM*/)(uVar1,param_10);
  uVar1 = add_offset_to_pointer_104d6882(param_1);
  forward_param_to_helper_104d8b04(uVar1,param_6);
  uVar1 = add_offset_to_pointer_104d6882(param_1);
  (*(code *)0x104d8af4/*ROM*/)(uVar1,param_11);
  cls_105ba0ac_new(&cStack_28);
  cStack_28.field_0x1c = 0x105ba1d8/*ROM*/;
  invoke_virtual_slot_on_two_objects_104d8c46(&cStack_28,param_2,param_1);
  (*(code *)0x104de82c/*ROM*/)(param_2);
  cStack_28.field_0x1c = 0x105ba1d8/*ROM*/;
  cls_105ba0ac_delete(&cStack_28,0);
  return 1;
}
