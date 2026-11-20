/* @k10d release_child_object_slot4_1046c59e @ 0x1046c59e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 152_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slots 4 and 1 on the object pointer stored at offset 4, then nulls the
 *   pointer.
 * summary:
 *   The function reads a pointer from param_1 + 4. If non-null, it calls virtual slot 4
 *   (offset 0x24) on that object, then re-reads the pointer and calls virtual slot 1
 *   (offset 0xc) with argument 3. Finally, it sets param_1 + 4 to 0. This pattern is
 *   consistent with a cleanup or release operation for a child object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_child_object_slot4_1046c59e(cls_105a8e3c *param_1)

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
