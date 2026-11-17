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
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  iVar2 = heap_alloc((void *)0x48);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105c136c_new((void *)iVar2);
  }
  iVar4 = *(int *)(iVar2 + 0xc);
  sVar1 = *(short *)(iVar4 + 0x10);
  uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,(uint32_t)param_3,(uint32_t)param_4);
  (**(code **)(iVar4 + 0x14))(sVar1 + iVar2,uVar3);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  init_struct_and_set_flag(iVar2,param_2);
  set_flag_and_call_helper_104e7640(iVar2,0);
  invoke_virtual_slot_23(iVar2,8);
  return iVar2;
}
