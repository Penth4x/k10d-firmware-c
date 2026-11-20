/* @k10d release_owned_object_slot_104b5184 @ 0x104b5184
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Destroys the object stored in the member at offset 4 by calling its virtual slots, then
 *   nulls the pointer.
 * summary:
 *   Reads the pointer at offset 4 of param_1. If non-null, invokes virtual slot 3 (offset
 *   0x24) with a this-adjustment, then re-reads the pointer and, if still non-null, invokes
 *   virtual slot 1 (offset 0xc) with argument 3. Finally sets the member at offset 4 to 0.
 *   This is virtual slot 4 of cls_105b857c and is called by the class's deleting
 *   destructor, consistent with a cleanup/release of an owned sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_slot_104b5184(cls_105b857c *param_1)

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
