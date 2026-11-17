/* @k10d replace_id_in_linked_lists @ 0x1053900c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void replace_id_in_linked_lists(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_1 + 100);
  for (iVar2 = *(int *)(iVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if (*(int *)(iVar2 + 0x10) == param_2) {
      *(uint32_t *)(iVar2 + 0x10) = param_3;
    }
    if (*(int *)(iVar2 + 0x1c) == param_2) {
      *(uint32_t *)(iVar2 + 0x1c) = param_3;
    }
  }
  for (iVar1 = *(int *)(iVar1 + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(int *)(iVar1 + 0x1c) == param_2) {
      *(uint32_t *)(iVar1 + 0x1c) = param_3;
    }
    if (*(int *)(iVar1 + 0x28) == param_2) {
      *(uint32_t *)(iVar1 + 0x28) = param_3;
    }
  }
  return;
}
