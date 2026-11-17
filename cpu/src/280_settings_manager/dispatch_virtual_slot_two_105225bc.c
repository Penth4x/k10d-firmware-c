/* @k10d dispatch_virtual_slot_two_105225bc @ 0x105225bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_two_105225bc(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  
  uVar3 = dispatch_virtual_slot_two_104af096(param_1,1,1);
  iVar4 = find_index_in_byte_table(param_1,uVar3);
  *(char *)(param_1 + 0x30) = (char)iVar4;
  iVar4 = iVar4 * 8;
  iVar1 = *(short *)(iVar4 + 0x105d8b78/*ROM*/) + param_1;
  if (*(short *)(iVar4 + 0x105d8b7a/*ROM*/) < 0) {
    pcVar2 = *(code **)((uint)*(byte *)(param_1 + 0x30) * 8 + 0x105d8b7c/*ROM*/);
  }
  else {
    psVar5 = (short *)(*(int *)((short)*(uint32_t *)(iVar4 + 0x105d8b7c/*ROM*/) + iVar1) +
                      *(short *)(iVar4 + 0x105d8b7a/*ROM*/) * 8);
    iVar1 = *psVar5 + iVar1;
    pcVar2 = *(code **)(psVar5 + 2);
  }
  (*pcVar2)(iVar1,param_2,param_3,param_4);
  return;
}
