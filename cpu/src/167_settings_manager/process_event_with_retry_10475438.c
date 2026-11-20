/* @k10d process_event_with_retry_10475438 @ 0x10475438
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_with_retry_10475438(int param_1)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  uint8_t auStack_5c [4];
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint8_t uStack_38;
  cls_105ab468 cStack_28;
  
  puVar3 = (uint32_t *)auStack_5c;
  uStack_40 = 0;
  uStack_3c = 0;
  cls_105ab468_new(&cStack_28);
  uStack_38 = 0;
  iterate_and_invoke_object_list(param_1);
  iVar2 = *(int *)(param_1 + 4);
  pvVar1 = (void *)(*(code *)0x1047796e/*ROM*/)(param_1 + 0x2c);
  *puVar3 = (uint32_t)&uStack_40;
  iVar2 = call_inner_with_lock_pair(iVar2,pvVar1,(void *)uRam8000ff00,1,*puVar3);
  if (iVar2 != 0) {
    do {
      allocate_and_bind_object_104751dc(param_1,&cStack_28,1);
      iVar2 = call_helper_with_lock_guard(*(int *)(param_1 + 4),&uStack_40);
    } while (iVar2 != 0);
    iterate_and_invoke_virtual_methods(param_1);
  }
  call_three_helpers_on_param(*(int *)(param_1 + 4),&uStack_40);
  cls_105ab468_delete(&cStack_28,2);
  return 1;
}
