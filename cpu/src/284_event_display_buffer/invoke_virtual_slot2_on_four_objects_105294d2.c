/* @k10d invoke_virtual_slot2_on_four_objects_105294d2 @ 0x105294d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot2_on_four_objects_105294d2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_10;
  
  uStack_10 = 3;
  iVar1 = 0;
  do {
    iVar2 = param_1 + 0x1054;
    iVar3 = *(int *)(iVar2 + iVar1 + 0x208);
    (**(code **)(iVar3 + 0x14))(*(short *)(iVar3 + 0x10) + iVar1 + iVar2);
    iVar3 = *(int *)(iVar2 + iVar1 + 0x20c + 0x208);
    (**(code **)(iVar3 + 0x14))((int)*(short *)(iVar3 + 0x10) + iVar1 + 0x20c + iVar2);
    iVar3 = *(int *)(iVar2 + iVar1 + 0x418 + 0x208);
    (**(code **)(iVar3 + 0x14))((int)*(short *)(iVar3 + 0x10) + iVar1 + 0x418 + iVar2);
    iVar3 = *(int *)(iVar2 + iVar1 + 0x624 + 0x208);
    (**(code **)(iVar3 + 0x14))(iVar2 + (int)*(short *)(iVar3 + 0x10) + iVar1 + 0x624);
    iVar1 = iVar1 + 0x830;
    uStack_10 = uStack_10 + -1;
  } while (-1 < uStack_10);
  *(uint32_t *)(param_1 + 0x218) = 0x100;
  *(uint32_t *)(param_1 + 0x46c) = 0x100;
  *(uint32_t *)(param_1 + 0x6c0) = 0x100;
  *(uint32_t *)(param_1 + 0x914) = 0x100;
  *(uint32_t *)(param_1 + 0xb68) = 0x100;
  *(uint32_t *)(param_1 + 0xdbc) = 0x100;
  *(uint32_t *)(param_1 + 0x1010) = 0x100;
  return;
}
