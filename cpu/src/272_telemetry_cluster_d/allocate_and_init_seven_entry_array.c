/* @k10d allocate_and_init_seven_entry_array @ 0x1051322c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_seven_entry_array(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x161d4), param_1 != (void *)0x0)) {
    get_lens_fw_update_status();
    *(uint32_t *)((int)param_1 + 0x161c0) = 0;
    *(uint32_t *)((int)param_1 + 0x161c4) = 0;
    *(uint32_t *)((int)param_1 + 0x161c8) = 0;
    cls_105a2be0_new((void *)((int)param_1 + 0x161cc));
    forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x161cc),1,0x1f);
    iVar2 = 0;
    iVar3 = 7;
    iVar1 = 0;
    do {
      *(int *)((int)param_1 + iVar1 + 4) = iVar2;
      *(int *)((int)param_1 + iVar1 + 0x8dc) = iVar2 + 1;
      *(int *)((int)param_1 + iVar1 + 0x11b4) = iVar2 + 2;
      *(int *)((int)param_1 + iVar1 + 0x1a8c) = iVar2 + 3;
      *(int *)((int)param_1 + iVar1 + 0x2364) = iVar2 + 4;
      iVar2 = iVar2 + 5;
      iVar1 = iVar1 + 0x2c38;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return (int)param_1;
}
