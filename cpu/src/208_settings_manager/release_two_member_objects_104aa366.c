/* @k10d release_two_member_objects_104aa366 @ 0x104aa366
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 208_settings_manager (unit names are model-proposed)
 * purpose:
 *   Destroys and nulls the two object pointers stored at offsets 4 and 8 of the class
 *   instance.
 * summary:
 *   This function is virtual slot 4 of cls_105b6e2c. It retrieves the pointers at offsets 4
 *   and 8, calls virtual slot 2 (offset 0x24) on each to perform cleanup, then calls
 *   virtual slot 1 (offset 0xc) with argument 3 on each. Finally, it sets both pointers to
 *   NULL. The caller is the deleting destructor of the class, indicating this is a member
 *   cleanup routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_member_objects_104aa366(cls_105b6e2c *param_1)

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
  piVar1 = (int *)param_1->field_0x8;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[4].fn)((void *)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1));
    piVar1 = (int *)param_1->field_0x8;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x8 = (uintptr_t)((void *)0x0);
  return;
}
