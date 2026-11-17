/* @k10d create_object_with_five_params @ 0x104b138a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates an object, stores five parameters on the stack, and initializes it via a
 *   constructor call.
 * summary:
 *   The function calls allocate_pixel_buffer_struct to obtain a pointer (likely an
 *   allocation or handle). It then copies param_5 through param_9 into a local stack
 *   buffer. It calls cls_105b7e14_new, passing the first three arguments (param_2, param_3,
 *   param_4) and the five stack-stored values. Finally, it calls an unknown function at
 *   0x105207b2 with the result of allocate_pixel_buffer_struct and the result of the
 *   constructor, then returns the initial pointer. The specific subsystem is not
 *   identifiable from the provided code and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
create_object_with_five_params(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint8_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8,
            uint32_t param_9)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  
  puVar3 = &stack0xffffffd4;
  uVar1 = (uint32_t)(uintptr_t)allocate_pixel_buffer_struct((uint32_t *)0x0,1,0,0,(uint16_t *)0x0);
  puVar3[3] = param_5;
  *(uint32_t *)(puVar3 + 4) = param_6;
  *(uint32_t *)(puVar3 + 8) = param_7;
  *(uint32_t *)(puVar3 + 0xc) = param_8;
  *(uint32_t *)(puVar3 + 0x10) = param_9;
  iVar2 = cls_105b7e14_new((void *)0x0,param_2,param_3,param_4,puVar3[3],*(int *)(puVar3 + 4),
                           *(int *)(puVar3 + 8),*(uint32_t *)(puVar3 + 0xc),
                           *(int *)(puVar3 + 0x10));
  (*(code *)0x105207b2/*ROM*/)(uVar1,iVar2,0,0);
  return uVar1;
}
