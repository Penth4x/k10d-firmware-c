/* @k10d allocate_and_init_object_1049645a @ 0x1049645a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_1049645a(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                ushort param_5,ushort param_6)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  if (param_5 < 8) {
    param_5 = 8;
  }
  if (param_6 < 8) {
    param_6 = 8;
  }
  iVar1 = heap_alloc((void *)0x2c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105b3e68_new((void *)iVar1);
  }
  uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,param_3,param_4);
  copy_two_shorts_from_source((void *)iVar1,(void *)uVar2);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  store_three_words_at_offset_0x24(iVar1,param_5,param_6,param_2);
  return iVar1;
}
