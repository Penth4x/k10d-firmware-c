/* @k10d allocate_and_init_object_1049655a @ 0x1049655a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_1049655a(void *param_1,uint16_t param_2,int param_3,int param_4,uint16_t param_5,
                uint16_t param_6)

{
  cls_105b3cfc *pcVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStack_28 [4];
  uint32_t auStack_10 [2];
  
  puVar3 = auStack_28;
  pcVar1 = (cls_105b3cfc *)heap_alloc((void *)0x30);
  if (pcVar1 == (cls_105b3cfc *)0x0) {
    pcVar1 = (cls_105b3cfc *)0x0;
  }
  else {
    cls_105b3cfc_new(pcVar1);
  }
  uVar2 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,param_3,param_4));
  copy_two_shorts_from_source((uint16_t *)(pcVar1),(uint32_t *)(uVar2));
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  *(uint16_t *)(puVar3 + 2) = param_2;
  store_four_words_at_struct_offsets((int)pcVar1,param_5,param_6,4,*(uint16_t *)(puVar3 + 2));
  return (int)pcVar1;
}
