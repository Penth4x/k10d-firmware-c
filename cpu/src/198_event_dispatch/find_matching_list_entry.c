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
  
  uVar1 = (((vtbl_entry*)(*(int *)(param_1 + 0xc)))[17].fn)
                    (((vtbl_entry*)(*(int *)(param_1 + 0xc)))[17].adj + param_1);
  iVar2 = invoke_virtual_slot_two_1049467c(param_1,uVar1);
  piVar3 = *(int **)(param_1 + 0x48);
  if (piVar3 != *(int **)(param_1 + 0x4c)) {
    do {
      iVar4 = *(int *)(*piVar3 + 0xc);
      iVar4 = (((vtbl_entry*)(iVar4))[17].fn)(*piVar3 + (int)((vtbl_entry*)(iVar4))[17].adj);
      if ((iVar4 == iVar2) &&
         (iVar4 = *(int *)(*piVar3 + 0xc),
         iVar4 = (((vtbl_entry*)(iVar4))[13].fn)(*piVar3 + (int)((vtbl_entry*)(iVar4))[13].adj), iVar4 != 0))
      break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 0x4c));
  }
  if ((piVar3 == *(int **)(param_1 + 0x4c)) &&
     (piVar3 = *(int **)(param_1 + 0x48), piVar3 != *(int **)(param_1 + 0x4c))) {
    do {
      iVar2 = *(int *)(*piVar3 + 0xc);
      iVar2 = (((vtbl_entry*)(iVar2))[13].fn)(*piVar3 + (int)((vtbl_entry*)(iVar2))[13].adj);
      if (iVar2 != 0) break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int **)(param_1 + 0x4c));
  }
  if (piVar3 == *(int **)(param_1 + 0x4c)) {
    piVar3 = (int *)0x0;
  }
  return piVar3;
}
