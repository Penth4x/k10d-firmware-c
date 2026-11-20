/* @k10d allocate_and_init_object_1049600e @ 0x1049600e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x48-byte object, constructs it, and initializes its fields via helper
 *   calls.
 * summary:
 *   Allocates 0x48 bytes from the heap and calls cls_105c136c_new to construct the object.
 *   It then reads a pointer from offset 0xc and a short from offset 0x10 of that sub-
 *   object, calls alloc_two_word_pair_1045bc2e with parameters 3 and 4, and invokes a
 *   virtual method (slot 2) on the sub-object. Finally, it calls three initialization
 *   functions (init_struct_and_set_flag, set_flag_and_call_helper_104e7640,
 *   invoke_virtual_slot_23) with the object pointer and specific constants (param_2, 0, 8)
 *   before returning the object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_1049600e(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  short sVar1;
  cls_105c136c *pcVar2;
  uint32_t uVar3;
  void *puVar4;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  pcVar2 = (cls_105c136c *)heap_alloc((void *)0x48);
  if (pcVar2 == (cls_105c136c *)0x0) {
    pcVar2 = (cls_105c136c *)0x0;
  }
  else {
    cls_105c136c_new(pcVar2);
  }
  puVar4 = (void *)((uintptr_t)(pcVar2->field_0xc));
  sVar1 = *(short *)((char*)puVar4 + 0x10);
  uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e((uint32_t *)(auStack_10),(uint32_t)(param_3),(uint32_t)(param_4)));
  (((vtbl_entry*)(puVar4))[2].fn)((int)&pcVar2->field_0x0 + (int)sVar1,uVar3);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  init_struct_and_set_flag((int)(pcVar2),(uint16_t)(param_2));
  set_flag_and_call_helper_104e7640((int)(pcVar2),(uint16_t)(0));
  invoke_virtual_slot_23((int)(pcVar2),(uint32_t)(8));
  return (int)pcVar2;
}
