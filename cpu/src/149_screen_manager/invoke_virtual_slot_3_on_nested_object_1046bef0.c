/* @k10d invoke_virtual_slot_3_on_nested_object_1046bef0 @ 0x1046bef0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Dereferences a pointer at offset 4 of the input object and invokes virtual slot 3 of
 *   the resulting object with argument 0.
 * summary:
 *   The function retrieves a pointer from the second field (offset 4) of the input object.
 *   If the pointer is non-null, it performs a virtual call to slot 3 (vtable offset 0x1c)
 *   of the pointed-to object, passing 0 as the first argument. The return value of the
 *   virtual call is returned to the caller; otherwise, 0 is returned. No specific camera
 *   subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_on_nested_object_1046bef0(cls_105a8c94 *param_1)

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
