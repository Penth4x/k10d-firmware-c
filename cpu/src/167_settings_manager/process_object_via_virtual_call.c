/* @k10d process_object_via_virtual_call @ 0x10475560
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

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
  uint8_t auStack_38 [19];
  uint8_t auStack_25 [12];
  uint8_t auStack_19 [17];
  
  uVar6 = 0;
  piVar1 = (int *)call_helper_with_offset_pointer_104752e2(param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1);
    copy_8_byte_block_if_valid(param_1 + 0x2c,(void *)uVar2);
    cls_105ab468_new(auStack_38);
    pvVar5 = *(void **)(param_1 + 4);
    pvVar3 = (void *)(*(code *)0x104779aa/*ROM*/)(param_1 + 0x2c);
    iVar4 = call_with_offset_lock_1048101c(pvVar5,pvVar3,auStack_38);
    if (iVar4 != 0) {
      iVar4 = 8;
      do {
        iVar7 = iVar4 + -1;
        auStack_19[iVar4 + 8] = auStack_25[iVar4];
        iVar4 = iVar7;
      } while (iVar7 != 0);
      iVar4 = 8;
      do {
        iVar7 = iVar4 + -1;
        auStack_19[iVar4] = auStack_19[iVar4 + 8];
        iVar4 = iVar7;
      } while (iVar7 != 0);
      copy_eight_bytes_1045c584(param_3,(uint16_t *)((int)auStack_19 + 1U));
      free_heap_if_flag_set_1045c56c((void *)((int)auStack_19 + 1U),2);
      uVar6 = 1;
    }
    cls_105ab468_delete(auStack_38,2);
  }
  return uVar6;
}
