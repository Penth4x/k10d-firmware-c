/* @k10d allocate_and_init_object_1049671e @ 0x1049671e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_1049671e(void *param_1,int param_2,uint32_t param_3,uint32_t param_4,ushort param_5)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  iVar1 = heap_alloc((void *)0x34);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105d71e4_new((void *)iVar1);
  }
  uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,param_4,(uint)param_5);
  copy_two_shorts_from_source((void *)iVar1,(void *)uVar2);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  if (param_2 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x20) + 0x24))
              (*(short *)(*(int *)(iVar1 + 0x20) + 0x20) + iVar1,param_2,param_3);
  }
  return iVar1;
}
