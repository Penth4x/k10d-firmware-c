/* @k10d init_struct_offsets_with_helper @ 0x1050ea3a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_offsets_with_helper(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  *(uint32_t *)(param_1 + 0x40) = param_2;
  iVar1 = align_down_to_32_bytes((uint32_t)param_1, (uint32_t)param_2);
  *(int *)(param_1 + 0x88) = iVar1;
  iVar1 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x104));
  *(int *)(param_1 + 0x98) = iVar1;
  uVar2 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x110));
  *(uint32_t *)(param_1 + 0x9c) = uVar2;
  return;
}
