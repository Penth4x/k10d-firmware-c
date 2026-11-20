/* @k10d grow_dynamic_buffer_1045ca6c @ 0x1045ca6c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Expands a dynamic buffer by allocating new memory and copying existing data.
 * summary:
 *   Checks if the requested size exceeds the current capacity of the buffer described by
 *   param_1. If so, it calls a virtual method to allocate memory, copies the existing data
 *   using copy_word_array_1045cd46, updates the buffer pointers and size fields, and calls
 *   a virtual method to finalize the update. Returns 1 on success, 0 if no growth was
 *   needed or allocation failed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t grow_dynamic_buffer_1045ca6c(int *param_1,uint param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t uStack_c;
  
  if ((uint)((int)(((uint)(param_1[2] - *param_1 >> 1) >> 0x1e) + (param_1[2] - *param_1)) >> 2) <
      param_2) {
    iVar3 = *(int *)param_1[3];
    puVar2 = (uint32_t *)
             (((vtbl_entry*)(iVar3))[2].fn)(param_1[3] + (int)((vtbl_entry*)(iVar3))[2].adj,param_2);
    if (puVar2 == (uint32_t *)0x0) {
      uVar1 = 0;
    }
    else {
      uStack_c = 0;
      copy_word_array_1045cd46(param_1,puVar2,param_2,&uStack_c);
      copy_word_array_1045cd06(param_1,(uint32_t *)*param_1,(uint32_t *)param_1[1],puVar2);
      zero_memory_range(param_1,(uint32_t *)*param_1,(uint32_t *)param_1[1]);
      iVar3 = *(int *)param_1[3];
      (((vtbl_entry*)(iVar3))[3].fn)(param_1[3] + (int)((vtbl_entry*)(iVar3))[3].adj,*param_1);
      param_1[2] = (int)(puVar2 + param_2);
      uVar1 = 1;
      param_1[1] = (int)(puVar2 + ((int)(((uint)(param_1[1] - *param_1 >> 1) >> 0x1e) +
                                        (param_1[1] - *param_1)) >> 2));
      *param_1 = (int)puVar2;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
