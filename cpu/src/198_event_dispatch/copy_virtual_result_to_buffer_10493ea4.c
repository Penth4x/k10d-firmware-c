/* @k10d copy_virtual_result_to_buffer_10493ea4 @ 0x10493ea4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_virtual_result_to_buffer_10493ea4(void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_18;
  uint8_t local_14 [8];
  
  iVar1 = *(int *)(*param_2 + 0x20);
  (((vtbl_entry*)(iVar1))[5].fn)(local_14,*param_2 + (int)((vtbl_entry*)(iVar1))[5].adj);
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(iVar2 + (int)param_1) = *(uint32_t *)((int)&uStack_18 + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  return;
}
