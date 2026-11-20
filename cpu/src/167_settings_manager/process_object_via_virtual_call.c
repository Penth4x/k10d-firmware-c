/* @k10d process_object_via_virtual_call @ 0x10475560
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_object_via_virtual_call(int param_1,uint32_t param_2,uint16_t *param_3)

{
  int *piVar1;
  uint32_t uVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  uint32_t uVar6;
  int iVar7;
  uintptr_t sp;
  cls_105ab468 cStack_38;
  uint16_t auStack_18 [3];
  uint8_t auStack_11 [9];
  
  uVar6 = 0;
  piVar1 = (int *)call_helper_with_offset_pointer_104752e2(param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1);
    copy_8_byte_block_if_valid(param_1 + 0x2c,(void*)(uVar2));
    cls_105ab468_new(&cStack_38);
    pvVar5 = *(void **)(param_1 + 4);
    pvVar3 = (void *)(*(code *)0x104779aa/*ROM*/)(param_1 + 0x2c);
    iVar4 = call_with_offset_lock_1048101c(pvVar5,pvVar3,&cStack_38);
    if (iVar4 != 0) {
      iVar4 = 8;
      do {
        iVar7 = iVar4 + -1;
        *(uint8_t *)((int)auStack_18 + iVar4 + 7) =
             *(uint8_t *)((int)auStack_18 + iVar4 + -0xd);
        iVar4 = iVar7;
      } while (iVar7 != 0);
      iVar4 = 8;
      do {
        iVar7 = iVar4 + -1;
        *(uint8_t *)((int)auStack_18 + iVar4 + -1) = *(uint8_t *)((int)auStack_18 + iVar4 + 7)
        ;
        iVar4 = iVar7;
      } while (iVar7 != 0);
      copy_eight_bytes_1045c584(param_3,auStack_18);
      free_heap_if_flag_set_1045c56c(auStack_18,2);
      uVar6 = 1;
    }
    cls_105ab468_delete(&cStack_38,2);
  }
  return uVar6;
}
