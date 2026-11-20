/* @k10d allocate_2d_buffer_block @ 0x1039c53c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 2D block of memory sized by param_4 and param_5 and registers it with a
 *   manager.
 * summary:
 *   Calculates two offsets based on param_4 and param_5 using a 0x18 stride. Calls
 *   app_obj_factory to obtain a pointer, then passes it and the offsets to
 *   iterate_and_remove_list_entry and copy_four_words_to_offset_0xa0. Finally calls
 *   free_heap_block_if_flagged_1045bc54 with a flag of 2 and returns the pointer from
 *   app_obj_factory. The specific subsystem (e.g., framebuffer, sensor buffer) is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_2d_buffer_block(int param_1,int param_2,void *param_3,int param_4,int param_5)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  pvVar6 = (void *)((param_4 + -1) * 0x18 + 0x20U & 0xffff);
  pvVar5 = (void *)((param_5 + -1) * 0x18 + 0x18U & 0xffff);
  pvVar3 = pvVar6;
  pvVar4 = pvVar5;
  pvVar1 = (void *)app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_3),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry((void *)param_2,pvVar1,pvVar3,pvVar4);
  iVar2 = (uintptr_t)(alloc_two_word_pair_1045bc2e((uint32_t *)(auStack_10),(uint32_t)(pvVar6),(uint32_t)(pvVar5)));
  copy_four_words_to_offset_0xa0(pvVar1,iVar2);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  return (int)pvVar1;
}
