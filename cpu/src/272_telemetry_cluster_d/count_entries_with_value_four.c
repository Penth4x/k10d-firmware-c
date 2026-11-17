/* @k10d count_entries_with_value_four @ 0x10513816
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Counts how many of 35 fields at fixed offsets within 7 records equal the value 4.
 * summary:
 *   The function iterates over 7 records, each 0x2c38 bytes apart, starting at param_1. For
 *   each record it checks five specific offsets (0x1c, 0x8f4, 0x11cc, 0x1aa4, 0x237c) and
 *   increments a counter if the 32-bit value at that offset is 4. It calls
 *   call_kernel_with_short_id and check_kernel_call_success_10459d88 on a pointer at
 *   param_1 + 0x161cc before and after the loop, respectively. The total count is returned
 *   in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int count_entries_with_value_four(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x161cc));
  iVar2 = 7;
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 + 0x1c) == 4) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + iVar1 + 0x8f4) == 4) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + iVar1 + 0x11cc) == 4) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + iVar1 + 0x1aa4) == 4) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + iVar1 + 0x237c) == 4) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x2c38;
  } while (-1 < iVar2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x161cc));
  return iVar3;
}
