/* @k10d release_owned_object_slot_10470e20 @ 0x10470e20
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 163_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Destroys the object pointer stored at offset 4 of the class instance and nulls the
 *   slot.
 * summary:
 *   Reads the pointer at param_1+4. If non-null, invokes virtual slot 4 (offset 0x24) on
 *   that object, then re-reads the slot and, if still non-null, invokes virtual slot 1
 *   (offset 0xc) with argument 3. Finally writes 0 to param_1+4. No other side effects are
 *   visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_slot_10470e20(cls_105a97bc *param_1)

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
