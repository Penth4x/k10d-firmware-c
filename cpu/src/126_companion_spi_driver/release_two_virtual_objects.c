/* @k10d release_two_virtual_objects @ 0x10446902
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 7 on two optional object pointers stored in the first two fields
 *   of the input structure.
 * summary:
 *   The function checks two pointers at offsets 4 and 8 of param_1. For each non-null
 *   pointer, it performs a virtual call to slot 7 (offset 0x5c in the vtable) with a this-
 *   adjustment read from offset 0x58 and an argument of 0. It returns 1 unconditionally. No
 *   specific camera subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_two_virtual_objects(cls_105a18b4 *param_1)

{
  void **ppuVar1;
  
  ppuVar1 = &param_1->field_0x4;
  if (*ppuVar1 != 0) {
    (((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[11].fn)
              ((char*)*ppuVar1 + ((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[11].adj,0);
  }
  if (param_1->field_0x8 != 0) {
    (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[11].fn)
              (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[11].adj,0);
  }
  return 1;
}
