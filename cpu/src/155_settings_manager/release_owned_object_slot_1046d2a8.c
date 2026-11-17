/* @k10d release_owned_object_slot_1046d2a8 @ 0x1046d2a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 155_settings_manager (unit names are model-proposed)
 * purpose:
 *   Destroys the object stored in the second member of the class and nulls the pointer.
 * summary:
 *   Reads the pointer at offset 4 of the object. If non-null, it invokes virtual slot 5
 *   (offset 0x24) and then virtual slot 1 (offset 0xc) with an argument of 3 on that owned
 *   object. Finally, it sets the pointer at offset 4 to null. This is virtual method slot 4
 *   of cls_105a9000.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_slot_1046d2a8(void *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1);
    piVar1 = *(int **)((int)param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
  }
  *(uint32_t *)((int)param_1 + 4) = 0;
  return;
}
