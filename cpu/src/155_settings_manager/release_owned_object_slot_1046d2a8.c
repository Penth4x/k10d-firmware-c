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

void release_owned_object_slot_1046d2a8(cls_105a9000 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[4].fn)((void *)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1));
    piVar1 = (int *)param_1->field_0x4;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  return;
}
