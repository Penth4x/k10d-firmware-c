/* @k10d release_child_object_slot_10490d90 @ 0x10490d90
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Releases the object pointer stored at offset 4 by calling its virtual slot 1 with
 *   argument 3, then nulls the pointer.
 * summary:
 *   Reads the pointer at param_1+4. If non-null, performs a virtual call to slot 1 (offset
 *   0xc) of that object, passing a this-adjusted pointer and the constant 3. Finally,
 *   writes 0 to param_1+4 to clear the reference. This is a standard C++ member cleanup or
 *   release pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_child_object_slot_10490d90(cls_105b4094 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  return;
}
