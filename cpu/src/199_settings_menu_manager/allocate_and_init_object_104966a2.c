/* @k10d allocate_and_init_object_104966a2 @ 0x104966a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_104966a2(void *param_1,int param_2,uint32_t param_3,uint32_t param_4,ushort param_5)

{
  cls_105d722c *pcVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  pcVar1 = (cls_105d722c *)heap_alloc((void *)0x34);
  if (pcVar1 == (cls_105d722c *)0x0) {
    pcVar1 = (cls_105d722c *)0x0;
  }
  else {
    cls_105d722c_new(pcVar1);
  }
  uVar2 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,param_4,(uint)param_5));
  copy_two_shorts_from_source((uint16_t *)(pcVar1),(uint32_t *)(uVar2));
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  if (param_2 != 0) {
    (((vtbl_entry*)(pcVar1->field_0x20))[4].fn)
              ((int)&pcVar1->field_0x0 + (int)((vtbl_entry*)(pcVar1->field_0x20))[4].adj,param_2,param_3)
    ;
  }
  return (int)pcVar1;
}
