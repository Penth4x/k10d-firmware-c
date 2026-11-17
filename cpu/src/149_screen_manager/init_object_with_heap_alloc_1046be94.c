/* @k10d init_object_with_heap_alloc_1046be94 @ 0x1046be94
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x1bc-byte object, initializes it, and stores the pointer in param_1+4.
 * summary:
 *   Allocates 0x1bc bytes via heap_alloc. If successful, calls cls_105a8b34_new to
 *   construct the object. Stores the resulting pointer at offset 4 of param_1. Then calls
 *   initialize_singleton_object_1045d6a0 to get a context pointer, copies a value from
 *   offset 0x1c of that context to offset 0xb8 of the new object, and finally invokes
 *   virtual slot 2 of the new object with argument 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_heap_alloc_1046be94(void *param_1)

{
  int iVar1;
  
  iVar1 = heap_alloc((void *)0x1bc);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a8b34_new((void *)iVar1);
  }
  *(int *)((int)param_1 + 4) = iVar1;
  iVar1 = initialize_singleton_object_1045d6a0();
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0xb8) = *(uint32_t *)(iVar1 + 0x1c);
  iVar1 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar1 + 0x14))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x10),0);
  return;
}
