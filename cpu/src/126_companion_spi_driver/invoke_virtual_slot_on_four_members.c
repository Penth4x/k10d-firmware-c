/* @k10d invoke_virtual_slot_on_four_members @ 0x1043f8f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_on_four_members(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 3;
  iVar3 = 0;
  do {
    iVar1 = iVar3;
    if (*(int *)((int)param_1 + iVar1 + 4) != 0) {
      iVar3 = *(int *)(*(int *)((int)param_1 + iVar1 + 4) + 4);
      (**(code **)(iVar3 + 0x1c))
                (*(int *)((int)param_1 + iVar1 + 4) + (int)*(short *)(iVar3 + 0x18),0);
    }
    if (*(int *)((int)param_1 + iVar1 + 8) != 0) {
      iVar3 = *(int *)(*(int *)((int)param_1 + iVar1 + 8) + 4);
      (**(code **)(iVar3 + 0x1c))
                (*(int *)((int)param_1 + iVar1 + 8) + (int)*(short *)(iVar3 + 0x18),0);
    }
    if (*(int *)((int)param_1 + iVar1 + 0xc) != 0) {
      iVar3 = *(int *)(*(int *)((int)param_1 + iVar1 + 0xc) + 4);
      (**(code **)(iVar3 + 0x1c))
                (*(int *)((int)param_1 + iVar1 + 0xc) + (int)*(short *)(iVar3 + 0x18),0);
    }
    iVar2 = iVar2 + -1;
    iVar3 = iVar1 + 0xc;
  } while (-1 < iVar2);
  if (*(int *)((int)param_1 + iVar1 + 0x10) != 0) {
    iVar3 = *(int *)(*(int *)((int)param_1 + iVar1 + 0x10) + 4);
    (**(code **)(iVar3 + 0x1c))
              (*(int *)((int)param_1 + iVar1 + 0x10) + (int)*(short *)(iVar3 + 0x18),0);
  }
  return 1;
}
