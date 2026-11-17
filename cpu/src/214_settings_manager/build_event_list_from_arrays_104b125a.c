/* @k10d build_event_list_from_arrays_104b125a @ 0x104b125a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates an array of event objects and registers each one with a list manager using
 *   parameters from input arrays.
 * summary:
 *   The function calls allocate_pixel_buffer_struct to create a list container and
 *   heap_alloc_2 to allocate an array of pointers. It iterates param_2 times, constructing
 *   an object via cls_105b7dfc_new using data from param_3, param_4, param_6, and param_7,
 *   and registers each new object with the list via a call at 0x105207b2. The function
 *   returns the list container pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
build_event_list_from_arrays_104b125a(void *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uintptr_t sp;
  int *piVar8;
  
  piVar8 = (int *)&stack0xffffffc0;
  uVar4 = (uint32_t)(uintptr_t)allocate_pixel_buffer_struct((uint32_t *)0x0,(short)param_2,0,0,(uint16_t *)0x0);
  iVar5 = heap_alloc_2(param_2 << 2);
  uVar6 = 0;
  if (0 < param_2) {
    do {
      iVar7 = uVar6 * 4;
      bVar1 = *(byte *)(param_4 + uVar6);
      iVar3 = *(int *)(iVar7 + param_6);
      iVar2 = *(int *)(iVar7 + param_7);
      *piVar8 = *(uint32_t *)(iVar7 + param_3);
      piVar8[2] = iVar3;
      piVar8[1] = param_5;
      piVar8[3] = iVar2;
      iVar2 = cls_105b7dfc_new((void *)0x0,(char)uVar6,(uint)bVar1,0,*piVar8,piVar8[1],piVar8[2],
                               piVar8[3]);
      *(int *)(iVar5 + iVar7) = iVar2;
      (*(code *)0x105207b2/*ROM*/)(uVar4,iVar2,uVar6,0);
      uVar6 = uVar6 + 1 & 0xff;
    } while ((int)uVar6 < param_2);
  }
  return uVar4;
}
