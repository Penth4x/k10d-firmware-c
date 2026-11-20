/* @k10d invoke_virtual_slot_six_104d6dc4 @ 0x104d6dc4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int invoke_virtual_slot_six_104d6dc4(uint32_t param_1,void *param_2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  cls_105ba0ac cStack_28;
  
  uVar1 = add_offset_by_flag(param_1,0);
  (*(code *)0x104d7eb2/*ROM*/)(uVar1,0);
  cls_105ba0ac_new(&cStack_28);
  cStack_28.field_0x1c = 0x105ba1d8/*ROM*/;
  iVar2 = invoke_virtual_slot_on_two_objects_104d8bf4(&cStack_28,param_2,param_1);
  if (iVar2 == 0) {
    add_offset_by_flag(param_1,0);
    iVar3 = (*(code *)0x104d7eda/*ROM*/)();
    if (iVar3 == 0) {
      uVar1 = add_offset_by_flag(param_1,0);
      (*(code *)0x104d7eb2/*ROM*/)(uVar1,7);
    }
  }
  cStack_28.field_0x1c = 0x105ba1d8/*ROM*/;
  cls_105ba0ac_delete(&cStack_28,0);
  return iVar2;
}
