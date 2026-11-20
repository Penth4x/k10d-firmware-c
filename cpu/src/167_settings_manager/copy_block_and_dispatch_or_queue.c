/* @k10d copy_block_and_dispatch_or_queue @ 0x1047b202
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_block_and_dispatch_or_queue(int param_1,int *param_2,uint32_t param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_20 [5];
  uint32_t uStack_c;
  
  init_object_with_three_queries(__frv_reg_unset(4));
  uStack_c = 0;
  bVar1 = twai_flg_obj((uint32_t *)(param_1 + 0x2c),0x80000003/*SDRAM*/,&uStack_c,iRam105a2af4);
  if (bVar1) {
    iVar2 = 0x14;
    do {
      iVar2 = iVar2 + -4;
      *(uint32_t *)(iVar2 + param_4) = *(uint32_t *)(iVar2 + param_1 + 0x74);
    } while (iVar2 != 0);
    alloc_and_zero_20_bytes(auStack_20);
    auStack_20[0] = 0;
    (((vtbl_entry*)(*param_2))[2].fn)
              ((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x1000f,auStack_20);
    free_heap_if_flagged_10482f3c(auStack_20,2);
  }
  else {
    iVar2 = (uintptr_t)(alloc_dynamic_array_header(0,1));
    *(int **)(iVar2 + 8) = param_2;
    *(uint32_t *)(iVar2 + 4) = 0x10000;
    **(int **)(iVar2 + 0xc) = param_4;
    reg_framework_send(param_1 + 4);
  }
  return;
}
