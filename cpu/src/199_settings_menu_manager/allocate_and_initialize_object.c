/* @k10d allocate_and_initialize_object @ 0x10495c5c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte object, constructs it, and initializes its members using provided
 *   parameters.
 * summary:
 *   The function allocates 0x10 bytes from the heap and calls a constructor
 *   (cls_105d67fc_new). It then retrieves a pointer from offset 0xc of the new object and
 *   invokes a virtual method (slot 2) on it, passing a value derived from param_2 and
 *   param_3. Finally, it calls dispatch_two_word_event to initialize another part of the
 *   object using param_4 and param_5, and returns the pointer to the allocated object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_initialize_object(void *param_1,void *param_2,void *param_3,void *param_4,ushort param_5)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  iVar2 = heap_alloc((void *)0x10);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105d67fc_new((void *)iVar2);
  }
  iVar4 = *(int *)(iVar2 + 0xc);
  sVar1 = *(short *)(iVar4 + 0x10);
  uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,(uint)param_2,(uint)param_3);
  (**(code **)(iVar4 + 0x14))(sVar1 + iVar2,uVar3);
  free_heap_block_if_flagged_1045bc54(auStack_18,2);
  uVar3 = (uint32_t)alloc_two_word_pair_1045c3dc(auStack_10,(uint)param_4,(uint)param_5);
  dispatch_two_word_event((void *)iVar2,(void *)uVar3);
  free_heap_if_flagged_1045c402(auStack_10,2);
  return iVar2;
}
