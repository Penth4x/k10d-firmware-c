/* @k10d allocate_and_init_object_10496644 @ 0x10496644
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_10496644(void *param_1,uint32_t param_2,uint32_t param_3)

{
  cls_105b3ec0 *pcVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  pcVar1 = (cls_105b3ec0 *)heap_alloc((void *)0x30);
  if (pcVar1 == (cls_105b3ec0 *)0x0) {
    pcVar1 = (cls_105b3ec0 *)0x0;
  }
  else {
    cls_105b3ec0_new(pcVar1);
  }
  uVar2 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,param_2,param_3));
  copy_two_shorts_from_source((uint16_t *)(pcVar1),(uint32_t *)(uVar2));
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  return (int)pcVar1;
}
