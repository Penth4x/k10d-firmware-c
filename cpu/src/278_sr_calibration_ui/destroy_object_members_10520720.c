/* @k10d destroy_object_members_10520720 @ 0x10520720
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Destroys member objects in a container and optionally frees the object itself.
 * summary:
 *   Iterates over a count of member pointers stored in a heap-allocated array (param_1[0]),
 *   calling a virtual destructor (slot 1) on each non-null member and clearing the pointer.
 *   Calls heap_free_2 on param_1[3] and param_1[0] before zeroing them. If param_2 bit 0 is
 *   set, calls heap_free on param_1. The caller cls_105d7078_delete is a verified deleting
 *   destructor, indicating this function performs the member cleanup phase of object
 *   destruction.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_object_members_10520720(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    heap_free_2(param_1[3]);
    param_1[3] = 0;
    for (uVar2 = (uint)*(ushort *)((int)param_1 + 6); uVar2 != 0; uVar2 = uVar2 - 1 & 0xffff) {
      iVar3 = (uVar2 - 1) * 4;
      iVar1 = *(int *)(*param_1 + iVar3);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 8) + 0xc))(*(short *)(*(int *)(iVar1 + 8) + 8) + iVar1,3);
      }
      *(uint32_t *)(*param_1 + iVar3) = 0;
    }
    heap_free_2(*param_1);
    *param_1 = 0;
    heap_free_2(param_1[3]);
    param_1[3] = 0;
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
