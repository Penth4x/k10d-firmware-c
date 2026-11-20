/* @k10d query_object_slot_three_1052049a @ 0x1052049a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Reads a virtual slot 3 value from an object pointer stored at offset 8, or returns 1 if
 *   null.
 * summary:
 *   The function first clears the 4-byte field at offset 0xc of the input structure. It
 *   then dereferences the pointer at offset 8. If that pointer is null, it returns 1.
 *   Otherwise, it performs a virtual call to slot 3 (offset 0x1c in the vtable) on the
 *   object, passing the object pointer adjusted by the short value at vtable offset 0x18.
 *   The result of this call is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_object_slot_three_1052049a(cls_105d7118 *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  
  param_1->field_0xc = 0;
  piVar1 = (int *)param_1->field_0x8;
  if (piVar1 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (((vtbl_entry*)(*piVar1))[3].fn)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1);
  }
  return uVar2;
}
