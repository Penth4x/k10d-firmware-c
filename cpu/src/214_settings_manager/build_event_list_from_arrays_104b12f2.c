/* @k10d build_event_list_from_arrays_104b12f2 @ 0x104b12f2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and populates a list of event objects from parallel input arrays.
 * summary:
 *   The function allocates a container via allocate_pixel_buffer_struct and a pointer array
 *   via heap_alloc_2. It iterates param_2 times, constructing objects with cls_105b7dfc_new
 *   using data from param_3, param_4, param_6, and param_7, and registers them with the
 *   container via a call at 0x105207b2. The role of the specific event type is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
build_event_list_from_arrays_104b12f2(void *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

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
  uVar4 = (uintptr_t)(allocate_pixel_buffer_struct((uint32_t *)0x0,(short)param_2,0,0,(uint16_t *)0x0));
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
      iVar2 = cls_105b7dfc_new((cls_105b7dfc *)0x0,(char)uVar6,(uint)bVar1,1,*piVar8,piVar8[1],
                               piVar8[2],piVar8[3]);
      *(int *)(iVar5 + iVar7) = iVar2;
      (*(code *)0x105207b2/*ROM*/)(uVar4,iVar2,uVar6,0);
      uVar6 = uVar6 + 1 & 0xff;
    } while ((int)uVar6 < param_2);
  }
  return uVar4;
}
