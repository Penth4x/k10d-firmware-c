/* @k10d build_object_array_from_table @ 0x104b10a6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates an array of object pointers and populates it by constructing objects from a
 *   fixed data table.
 * summary:
 *   Reads a count from bRam105f9bcb and allocates a heap array of that size in words. It
 *   iterates through the count, reading fields from the 0x105f9bcc table and param_3, calls
 *   cls_105b7e94_new to create each object, and stores the pointers in the array. It also
 *   calls allocate_pixel_buffer_struct and an unknown function at 0x105207b2, likely for
 *   registration or initialization, and returns the result of allocate_pixel_buffer_struct.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_object_array_from_table(void *param_1,uint32_t param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  uint8_t uVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uintptr_t sp;
  uint8_t *puVar11;
  
  puVar11 = &stack0xffffffc8;
  uVar10 = (uint)bRam105f9bcb;
  uVar4 = (uint32_t)allocate_pixel_buffer_struct((uint32_t *)0x0,(ushort)bRam105f9bcb,0,0,(uint16_t *)0x0);
  iVar5 = heap_alloc_2(uVar10 << 2);
  uVar8 = 0;
  if (uVar10 != 0) {
    do {
      bVar1 = *(byte *)(uVar8 + 0x105f9bcc/*ROM*/);
      iVar9 = uVar8 * 4;
      cVar2 = *(char *)(uVar8 + 0x105f9be8/*ROM*/);
      uVar7 = *(uint *)(iVar9 + 0x105f9bd0/*ROM*/);
      uVar3 = *(uint8_t *)(param_3 + 0x105f9beb/*ROM*/ + uVar8 * 2);
      *(uint16_t *)(puVar11 + 2) = *(uint16_t *)(iVar9 + param_3 * 2 + 0x105f9bdc/*ROM*/);
      puVar11[7] = uVar3;
      iVar6 = cls_105b7e94_new((void *)0x0,bVar1,cVar2,uVar7 & 0xff,*(uint16_t *)(puVar11 + 2),
                               puVar11[7]);
      *(int *)(iVar5 + iVar9) = iVar6;
      (*(code *)0x105207b2/*ROM*/)(uVar4,iVar6,uVar8,0);
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < uVar10);
  }
  return uVar4;
}
