/* @k10d collect_active_entries @ 0x1051336a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int collect_active_entries(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_18;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x161cc));
  uStack_18 = 0;
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = clamp_index_to_range_10513af8(param_1,iVar2);
    if (*(int *)(iVar1 * 0x8d8 + param_1 + 0x1c) == 2) {
      iVar1 = clamp_index_to_range_10513af8(param_1,iVar2);
      *(uint32_t *)(iVar1 * 0x8d8 + param_1 + 0x1c) = 3;
      iVar1 = clamp_index_to_range_10513af8(param_1,iVar2);
      *(int *)(param_2 + iVar3) = iVar1 * 0x8d8 + param_1;
      iVar3 = iVar3 + 4;
      uStack_18 = uStack_18 + 1;
      if ((param_3 + -1) * 4 <= iVar3) break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x28);
  *(uint32_t *)(param_2 + uStack_18 * 4) = 0;
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x161cc));
  return uStack_18;
}
