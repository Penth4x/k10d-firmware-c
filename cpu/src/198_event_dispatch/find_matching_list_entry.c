/* @k10d find_matching_list_entry @ 0x10493a14
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * find_matching_list_entry(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x8c))
                    (*(short *)(*(int *)(param_1 + 0xc) + 0x88) + param_1);
  iVar2 = invoke_virtual_slot_two_1049467c(param_1,uVar1);
  piVar3 = *(int **)(param_1 + 0x48);
  if (piVar3 != *(int **)(param_1 + 0x4c)) {
    do {
      iVar4 = *(int *)(*piVar3 + 0xc);
      iVar4 = (**(code **)(iVar4 + 0x8c))(*piVar3 + (int)*(short *)(iVar4 + 0x88));
      if ((iVar4 == iVar2) &&
         (iVar4 = *(int *)(*piVar3 + 0xc),
         iVar4 = (**(code **)(iVar4 + 0x6c))(*piVar3 + (int)*(short *)(iVar4 + 0x68)), iVar4 != 0))
      break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 0x4c));
  }
  if ((piVar3 == *(int **)(param_1 + 0x4c)) &&
     (piVar3 = *(int **)(param_1 + 0x48), piVar3 != *(int **)(param_1 + 0x4c))) {
    do {
      iVar2 = *(int *)(*piVar3 + 0xc);
      iVar2 = (**(code **)(iVar2 + 0x6c))(*piVar3 + (int)*(short *)(iVar2 + 0x68));
      if (iVar2 != 0) break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 0x4c));
  }
  if (piVar3 == *(int **)(param_1 + 0x4c)) {
    piVar3 = (int *)0x0;
  }
  return piVar3;
}
