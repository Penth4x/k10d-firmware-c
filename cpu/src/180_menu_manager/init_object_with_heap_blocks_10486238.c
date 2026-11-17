/* @k10d init_object_with_heap_blocks_10486238 @ 0x10486238
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 180_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_heap_blocks_10486238(int param_1,int param_2)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,(void *)0x96000,0);
  *(uint32_t *)(param_1 + 0xa4) = uVar2;
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,(void *)0x96000,0);
  *(uint32_t *)(param_1 + 0xa8) = uVar2;
  invoke_three_callbacks_if_valid(param_1);
  if (param_2 == 0) {
    uVar2 = get_or_create_singleton_object_10486db8();
  }
  else if (param_2 == 1) {
    uVar2 = modset_parser_singleton();
  }
  else if (param_2 == 2) {
    uVar2 = get_singleton_object_ptr();
  }
  else {
    if (param_2 != 3) {
      *(uint32_t *)(param_1 + 0x54) = 0;
      goto LAB_104862c0;
    }
    uVar2 = get_or_create_singleton_object_104882d0();
  }
  *(uint32_t *)(param_1 + 0x54) = uVar2;
LAB_104862c0:
  *(uint8_t *)(param_1 + 0x9c) = 0;
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 == 0) {
    call_helper_with_0x50000(param_1,0);
  }
  else {
    iVar3 = (**(code **)(*(int *)(iVar4 + 0x48) + 0x1c))
                      (*(short *)(*(int *)(iVar4 + 0x48) + 0x18) + iVar4);
    while (*(int *)(param_1 + 0x54) = iVar3, iVar3 != iVar4) {
      (**(code **)(*(int *)(iVar4 + 0x48) + 0x24))
                (*(short *)(*(int *)(iVar4 + 0x48) + 0x20) + iVar4);
      iVar4 = *(int *)(param_1 + 0x54);
      if (iVar4 == 0) goto LAB_10486322;
      iVar3 = (**(code **)(*(int *)(iVar4 + 0x48) + 0x1c))
                        (*(short *)(*(int *)(iVar4 + 0x48) + 0x18) + iVar4);
    }
    *(uint8_t *)(param_1 + 0x9c) = 1;
LAB_10486322:
    if (*(int *)(param_1 + 0x54) == 0) {
      call_helper_with_0x50000(param_1,0);
    }
  }
  return;
}
