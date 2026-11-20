/* @k10d invoke_virtual_slot_two_10442c5e @ 0x10442c5e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 of the object stored at offset 4 of param_1 with argument 0.
 * summary:
 *   Checks if the pointer at param_1+4 is non-null. If so, it dereferences that pointer to
 *   get an object, reads its vtable, and invokes the third virtual method (slot 2) with a
 *   this-adjustment and argument 0. Returns 1 unconditionally. No camera-specific behavior
 *   is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_10442c5e(cls_105a0db4 *param_1)

{
  int iVar1;
  
  if (param_1->field_0x4 != 0) {
    iVar1 = *(int *)(param_1->field_0x4 + 4);
    (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar1))[3].adj,0);
  }
  return 1;
}
