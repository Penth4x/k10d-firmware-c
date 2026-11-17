/* @k10d sum_virtual_method_results @ 0x10527dac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sum_virtual_method_results(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < (int)param_1[0x83]) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)((int)param_1 + iVar2 + 0x214);
      iVar5 = *(int *)(iVar1 + 0x208);
      iVar1 = (**(code **)(iVar5 + 0x5c))(iVar1 + *(short *)(iVar5 + 0x58),*param_1);
      iVar2 = iVar2 + 4;
      iVar4 = iVar1 + iVar4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x83]);
  }
  return iVar4;
}
