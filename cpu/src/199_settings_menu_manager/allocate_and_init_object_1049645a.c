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
  cls_105b3e68 *pcVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  if (param_5 < 8) {
    param_5 = 8;
  }
  if (param_6 < 8) {
    param_6 = 8;
  }
  pcVar1 = (cls_105b3e68 *)heap_alloc((void *)0x2c);
  if (pcVar1 == (cls_105b3e68 *)0x0) {
    pcVar1 = (cls_105b3e68 *)0x0;
  }
  else {
    cls_105b3e68_new(pcVar1);
  }
  uVar2 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,param_3,param_4));
  copy_two_shorts_from_source((uint16_t *)(pcVar1),(uint32_t *)(uVar2));
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  store_three_words_at_offset_0x24((int)(pcVar1),(uint16_t)(param_5),(uint16_t)(param_6),(uint16_t)(param_2));
  return (int)pcVar1;
}
