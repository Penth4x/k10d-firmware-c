/* @k10d retry_virtual_operation_with_timeout @ 0x104802d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 173_screen_activation (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t retry_virtual_operation_with_timeout(int param_1,int param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_10;
  
  iVar1 = lookup_table_entry_by_index_10482026((void*)(_DAT_80010030/*SDRAM*/));
  iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[9].fn)(((vtbl_entry*)(*(int *)(iVar1 + 4)))[9].adj + iVar1);
  if (iVar2 == 0) {
    uStack_10 = 0xffffffed;
  }
  else {
    iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[10].fn)
                      (((vtbl_entry*)(*(int *)(iVar1 + 4)))[10].adj + iVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
      call_subroutine_on_field_16_104ea70a((void*)(pvRam80010038));
      uStack_10 = 0xfffffc17;
      while (iVar3 = (((vtbl_entry*)(*(int *)(iVar1 + 4)))[6].fn)
                               (((vtbl_entry*)(*(int *)(iVar1 + 4)))[6].adj + iVar1,
                                *(int *)(param_1 + 4) + param_2,param_3,param_4), iVar3 == 0) {
        iVar3 = (**(code **)(*(int *)(iVar1 + 4) + 0x1c))
                          (*(short *)(*(int *)(iVar1 + 4) + 0x18) + iVar1,0);
        if ((iVar3 == 0) || (iVar2 = iVar2 + 1, 2 < iVar2)) goto LAB_104803a6;
      }
      uStack_10 = 0;
LAB_104803a6:
      invoke_object_method_at_offset_0x10_104ea71c((void*)(pvRam80010038));
    }
    else {
      uStack_10 = 0xffffffe2;
    }
  }
  return uStack_10;
}
