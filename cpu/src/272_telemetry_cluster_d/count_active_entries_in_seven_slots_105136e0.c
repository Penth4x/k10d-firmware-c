/* @k10d count_active_entries_in_seven_slots_105136e0 @ 0x105136e0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int count_active_entries_in_seven_slots_105136e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x161cc));
  iVar3 = 7;
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + iVar1 + 0x1c);
    if ((iVar2 == 2) || (iVar2 == 3)) {
      iVar4 = iVar4 + 1;
    }
    iVar2 = *(int *)(param_1 + iVar1 + 0x8f4);
    if ((iVar2 == 2) || (iVar2 == 3)) {
      iVar4 = iVar4 + 1;
    }
    iVar2 = *(int *)(param_1 + iVar1 + 0x11cc);
    if ((iVar2 == 2) || (iVar2 == 3)) {
      iVar4 = iVar4 + 1;
    }
    iVar2 = *(int *)(param_1 + iVar1 + 0x1aa4);
    if ((iVar2 == 2) || (iVar2 == 3)) {
      iVar4 = iVar4 + 1;
    }
    iVar2 = *(int *)(param_1 + iVar1 + 0x237c);
    if ((iVar2 == 2) || (iVar2 == 3)) {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 0x2c38;
  } while (-1 < iVar3);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x161cc));
  return iVar4;
}
