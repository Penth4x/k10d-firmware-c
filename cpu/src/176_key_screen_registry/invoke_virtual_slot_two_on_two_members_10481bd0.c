/* @k10d invoke_virtual_slot_two_on_two_members_10481bd0 @ 0x10481bd0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_two_members_10481bd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0x30)))[1].fn)(*(short *)(*(int *)(iVar1 + 0x30) + 8) + iVar1,3);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0x30)))[1].fn)(*(short *)(*(int *)(iVar1 + 0x30) + 8) + iVar1,3);
  }
  return;
}
