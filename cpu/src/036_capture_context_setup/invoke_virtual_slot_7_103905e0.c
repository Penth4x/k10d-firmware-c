/* @k10d invoke_virtual_slot_7_103905e0 @ 0x103905e0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 036_capture_context_setup (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 7 of the object stored at offset 0x60 of the input structure, or
 *   returns 0 if null.
 * summary:
 *   The function dereferences the pointer at offset 0x60 of the input object. If the
 *   pointer is non-null, it performs a Cfront-style virtual call to slot 7 (offset 0x3c in
 *   the vtable) with a this-adjustment read from offset 0x38. If the pointer is null, it
 *   returns 0. No specific camera subsystem behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_7_103905e0(cls_1055a304 *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = (int *)param_1->field_0x60;
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((vtbl_entry*)(*piVar1))[7].fn)((int)((vtbl_entry*)(*piVar1))[7].adj + (int)piVar1);
  }
  return uVar2;
}
