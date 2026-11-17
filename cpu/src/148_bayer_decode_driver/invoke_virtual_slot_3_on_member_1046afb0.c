/* @k10d invoke_virtual_slot_3_on_member_1046afb0 @ 0x1046afb0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences the first member pointer of the object and invokes its virtual slot 3 with
 *   argument 0.
 * summary:
 *   The function reads the pointer at offset 4 of the input object. If that pointer is non-
 *   null, it performs a virtual call to slot 3 (offset 0x1c) of the pointed-to object,
 *   applying the this-adjustment from offset 0x18. It returns the result of that call, or 0
 *   if the member pointer is null. No specific camera subsystem behavior is evident from
 *   the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_on_member_1046afb0(void *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = *(int **)((int)param_1 + 4);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
  }
  return uVar2;
}
