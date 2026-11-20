/* @k10d release_two_child_objects_10516e16 @ 0x10516e16
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Destroys two child objects held in the struct and nulls their pointers.
 * summary:
 *   The function reads two object pointers from offsets 4 and 0xc of the input struct. For
 *   each non-null pointer, it invokes virtual slot 3 (vtable offset 0x24) on the child
 *   object, passing the this-adjusted pointer. It then nulls the pointer at offset 4 and
 *   calls destroy_member_and_free_object with the value from offset 8 and argument 3.
 *   Finally, it invokes virtual slot 3 on the object at offset 0xc and nulls that pointer.
 *   The pattern suggests a cleanup or destructor-like routine for a container holding two
 *   sub-objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_child_objects_10516e16(cls_105d6450 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[4].fn)((void *)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1));
  }
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  destroy_member_and_free_object(param_1->field_0x8,3);
  param_1->field_0x8 = (uintptr_t)((void *)0x0);
  piVar1 = (int *)param_1->field_0xc;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[4].fn)((void *)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1));
  }
  param_1->field_0xc = (uintptr_t)((void *)0x0);
  return;
}
