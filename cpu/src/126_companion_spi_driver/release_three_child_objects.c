/* @k10d release_three_child_objects @ 0x10440ad6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on up to three child object pointers stored in the struct to
 *   release them.
 * summary:
 *   The function iterates over three pointer fields at offsets 4, 8, and 0xc of the input
 *   structure. For each non-null pointer, it performs a virtual call to slot 2 (offset 0x1c
 *   in the vtable) with a this-adjustment and an argument of 0. This pattern is consistent
 *   with releasing or detaching child objects in a C++ class hierarchy. No specific camera
 *   subsystem behavior is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_three_child_objects(cls_105a0b64 *param_1)

{
  void **ppuVar1;
  
  ppuVar1 = &param_1->field_0x4;
  if (*ppuVar1 != 0) {
    (((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[3].fn)
              ((char*)*ppuVar1 + ((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[3].adj,0);
  }
  if (param_1->field_0x8 != 0) {
    (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[3].fn)
              (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[3].adj,0);
  }
  if (param_1->field_0xc != 0) {
    (((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[3].fn)
              (param_1->field_0xc + ((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[3].adj,0);
  }
  return 1;
}
