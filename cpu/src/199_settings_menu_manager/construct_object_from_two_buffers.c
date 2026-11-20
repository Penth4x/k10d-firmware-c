/* @k10d construct_object_from_two_buffers @ 0x10495e7c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from param_2 and 8 bytes from param_4 into a stack buffer, then calls a
 *   constructor with param_3.
 * summary:
 *   The function performs two backward loops to copy 16 bytes from param_2 and 8 bytes from
 *   param_4 into a local stack array. It then calls cls_105b4dac_new with a null pointer,
 *   the stack buffer, param_3, and a pointer to the second half of the buffer. Finally, it
 *   calls two unknown functions on the buffer segments and returns the result of the
 *   constructor call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int construct_object_from_two_buffers(void *param_1,void *param_2,uint32_t param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_20 [6];
  
  iVar1 = 0x10;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(&stack0xffffffdc + iVar1) = *(uint32_t *)(iVar2 + (int)param_2);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)((int)auStack_20 + iVar1 + 0xc) = *(uint32_t *)(iVar2 + (int)param_4);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  iVar1 = cls_105b4dac_new((cls_105b4dac *)0x0,auStack_20,(uint8_t)param_3,auStack_20 + 4);
  free_heap_block_if_flagged_1045bc54(auStack_20 + 4,2);
  destroy_text_widget(auStack_20,2);
  return iVar1;
}
