/* @k10d release_two_member_objects_10445c76 @ 0x10445c76
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 3 and slot 1 on two member objects, then nulls the member
 *   pointers.
 * summary:
 *   The function reads two object pointers from offsets 4 and 8 of the input structure. For
 *   each non-null pointer, it performs two virtual calls: slot 3 (vtable offset 0x24) with
 *   no extra arguments, and slot 1 (vtable offset 0xc) with an integer argument of 3. After
 *   the calls, it sets both member pointers to zero. This is virtual method slot 4 of class
 *   cls_105a1718, called by its deleting destructor, suggesting it releases or resets two
 *   owned sub-objects before the object is freed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_member_objects_10445c76(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x24))(*(short *)(*(int *)(iVar1 + 4) + 0x20) + iVar1);
  }
  iVar1 = *(int *)((int)param_1 + 4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0xc))(*(short *)(*(int *)(iVar1 + 4) + 8) + iVar1,3);
  }
  *(uint32_t *)((int)param_1 + 4) = 0;
  iVar1 = *(int *)((int)param_1 + 8);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x24))(*(short *)(*(int *)(iVar1 + 4) + 0x20) + iVar1);
  }
  iVar1 = *(int *)((int)param_1 + 8);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0xc))(*(short *)(*(int *)(iVar1 + 4) + 8) + iVar1,3);
  }
  *(uint32_t *)((int)param_1 + 8) = 0;
  return;
}
