/* @k10d invoke_virtual_slot_3_on_child_1046c576 @ 0x1046c576
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 152_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dereferences a child object pointer at offset 4 and invokes its virtual slot 3 with
 *   argument 0.
 * summary:
 *   The function reads a pointer from offset 4 of the input object. If the pointer is non-
 *   null, it performs a virtual call to slot 3 (offset 0x1c) of the child object, passing
 *   the this-adjusted pointer and 0. It returns the result of the call or 0 if the child
 *   pointer is null. No specific camera subsystem behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_on_child_1046c576(cls_105a8e3c *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = (int *)param_1->field_0x4;
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((vtbl_entry*)(*piVar1))[3].fn)
                      ((void *)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1),0);
  }
  return uVar2;
}
