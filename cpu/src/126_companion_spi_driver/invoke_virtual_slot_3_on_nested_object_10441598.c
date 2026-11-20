/* @k10d invoke_virtual_slot_3_on_nested_object_10441598 @ 0x10441598
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences a pointer at offset 4 of the input object and calls virtual slot 3 of the
 *   resulting object with argument 0.
 * summary:
 *   The function checks if the integer at offset 4 of param_1 is non-zero. If so, it loads
 *   a pointer from offset 4 of that nested object and performs a virtual call to slot 3
 *   (offset 0x1c in the vtable) with a this-adjustment from offset 0x18 and an argument of
 *   0. It always returns 1. No specific camera subsystem behavior is evident from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_on_nested_object_10441598(cls_105a0bec *param_1)

{
  int iVar1;
  
  if (param_1->field_0x4 != 0) {
    iVar1 = *(int *)(param_1->field_0x4 + 4);
    (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar1))[3].adj,0);
  }
  return 1;
}
