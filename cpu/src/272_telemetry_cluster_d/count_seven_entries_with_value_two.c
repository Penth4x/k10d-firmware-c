/* @k10d count_seven_entries_with_value_two @ 0x10513658
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int count_seven_entries_with_value_two(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x161cc));
  iVar2 = 7;
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 + 0x1c) == 2) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + iVar1 + 0x8f4) == 2) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + iVar1 + 0x11cc) == 2) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + iVar1 + 0x1aa4) == 2) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + iVar1 + 0x237c) == 2) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x2c38;
  } while (-1 < iVar2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x161cc));
  return iVar3;
}
