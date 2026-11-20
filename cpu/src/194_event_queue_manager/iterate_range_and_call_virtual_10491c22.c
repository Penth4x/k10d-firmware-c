/* @k10d iterate_range_and_call_virtual_10491c22 @ 0x10491c22
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_range_and_call_virtual_10491c22(int param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)0x10491dd6/*ROM*/)();
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != *(int **)(param_1 + 0x10)) {
    do {
      iVar2 = *(int *)(*piVar1 + 8);
      (((vtbl_entry*)(iVar2))[4].fn)(*piVar1 + (int)((vtbl_entry*)(iVar2))[4].adj,param_2);
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)(param_1 + 0x10));
  }
  return;
}
