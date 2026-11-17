/* @k10d invoke_virtual_slot_two_on_two_members_10521f36 @ 0x10521f36
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_on_two_members_10521f36(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x14))(*(short *)(*(int *)(iVar1 + 0xc) + 0x10) + iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x14))(*(short *)(*(int *)(iVar1 + 0xc) + 0x10) + iVar1);
  }
  return 1;
}
