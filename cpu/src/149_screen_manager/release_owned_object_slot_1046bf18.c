/* @k10d release_owned_object_slot_1046bf18 @ 0x1046bf18
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Destroys the object stored in the class's second member slot and nulls the pointer.
 * summary:
 *   Reads the pointer at offset 4 of the object. If non-null, it invokes virtual slot 4
 *   (offset 0x24) on that object, then re-reads the pointer and, if still non-null, invokes
 *   virtual slot 1 (offset 0xc) with argument 3. Finally it writes 0 to the pointer at
 *   offset 4. This is virtual slot 4 of cls_105a8c94 and is called by the class's deleting
 *   destructor.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_slot_1046bf18(cls_105a8c94 *param_1)

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
