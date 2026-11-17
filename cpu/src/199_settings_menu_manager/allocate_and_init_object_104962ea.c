/* @k10d allocate_and_init_object_104962ea @ 0x104962ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_104962ea(void *param_1,int param_2,uint32_t param_3,uint32_t param_4)

{
  uint16_t *puVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  puVar1 = (uint16_t *)heap_alloc((void *)0x34);
  if (puVar1 == (uint16_t *)0x0) {
    puVar1 = (uint16_t *)0x0;
  }
  else {
    cls_105b3ee0_new(puVar1);
  }
  uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,param_3,param_4);
  copy_two_shorts_from_source(puVar1,(void *)uVar2);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  if (param_2 != 0) {
    write_two_fields_to_struct(puVar1,param_2,7);
  }
  return (int)puVar1;
}
