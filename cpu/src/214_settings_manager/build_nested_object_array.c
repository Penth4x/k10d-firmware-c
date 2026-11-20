/* @k10d build_nested_object_array @ 0x104b0fc0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a 2D array of objects by calling a factory function for each
 *   element.
 * summary:
 *   The function allocates a flat array of size param_2 * param_3. It iterates through
 *   param_2 rows and param_3 columns, calling cls_105d6d30_new to create each object using
 *   data from param_5 and param_6. It also calls allocate_pixel_buffer_struct with the
 *   allocated memory, likely to initialize the container structure. The function returns
 *   the handle from allocate_pixel_buffer_struct.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
build_nested_object_array(void *param_1,int param_2,int param_3,uint16_t *param_4,uint8_t *param_5,
            uint32_t *param_6)

{
  uint16_t *puVar1;
  uint16_t uVar5;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uint uVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t auStack_38 [4];
  uint16_t *puStack_24;
  uint uStack_14;
  
  puVar7 = (uint32_t *)auStack_38;
  puVar1 = (uint16_t *)heap_alloc_2(param_2 << 1);
  uVar6 = 0;
  puStack_24 = puVar1;
  if (0 < param_2) {
    do {
      uVar5 = (*(code *)0x104ac858/*ROM*/)(*param_4);
      param_4 = param_4 + 1;
      *puStack_24 = uVar5;
      puStack_24 = puStack_24 + 1;
      uVar6 = uVar6 + 1 & 0xff;
    } while ((int)uVar6 < param_2);
  }
  *puVar7 = (uintptr_t)(puVar1);
  uVar2 = (uintptr_t)(allocate_pixel_buffer_struct((uint32_t *)0x0,(short)param_3,1,param_2,(uint16_t *)*puVar7));
  iVar3 = heap_alloc_2(param_3 << 2);
  uStack_14 = 0;
  puStack_24 = puVar1;
  if (0 < param_2) {
    do {
      uVar6 = 0;
      if (0 < param_3) {
        do {
          iVar4 = cls_105d6d30_new((cls_105d6d30 *)0x0,(uint16_t *)*param_6,(uint)(byte)*param_5);
          *(int *)(iVar3 + uVar6 * 4) = iVar4;
          (*(code *)0x105207b2/*ROM*/)(uVar2,iVar4,uVar6,*puStack_24);
          param_6 = param_6 + 1;
          param_5 = param_5 + 1;
          uVar6 = uVar6 + 1 & 0xff;
        } while ((int)uVar6 < param_3);
      }
      puStack_24 = puStack_24 + 1;
      uStack_14 = uStack_14 + 1 & 0xff;
    } while ((int)uStack_14 < param_2);
  }
  heap_free_2((int)puVar1);
  return uVar2;
}
