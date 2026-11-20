/* @k10d release_three_member_objects @ 0x10440b4a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 then slot 1 on three pointer members, then nulls them out.
 * summary:
 *   The function operates on a struct with three pointer fields at offsets 4, 8, and 0xc.
 *   For each non-null pointer, it performs a virtual call to slot 2 (vtable offset 0x24)
 *   followed by a virtual call to slot 1 (vtable offset 0xc) with an argument of 3, then
 *   sets the field to zero. It is called from the deleting destructor of cls_105a0b64,
 *   indicating it cleans up member objects before the object itself is freed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_three_member_objects(cls_105a0b64 *param_1)

{
  void **ppuVar1;
  
  ppuVar1 = &param_1->field_0x4;
  if ((*ppuVar1 != 0) &&
     ((((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[4].fn)
                ((char*)*ppuVar1 + ((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[4].adj), *ppuVar1 != 0
     )) {
    (**(code **)(*(int *)((char*)*ppuVar1 + 4) + 0xc))((char*)*ppuVar1 + *(short *)(*(int *)((char*)*ppuVar1 + 4) + 8),3)
    ;
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  if ((param_1->field_0x8 != 0) &&
     ((((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[4].fn)
                (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[4].adj),
     param_1->field_0x8 != 0)) {
    (**(code **)(*(int *)(param_1->field_0x8 + 4) + 0xc))
              (param_1->field_0x8 + *(short *)(*(int *)(param_1->field_0x8 + 4) + 8),3);
  }
  param_1->field_0x8 = (uintptr_t)((void *)0x0);
  if ((param_1->field_0xc != 0) &&
     ((((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[4].fn)
                (param_1->field_0xc + ((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[4].adj),
     param_1->field_0xc != 0)) {
    (**(code **)(*(int *)(param_1->field_0xc + 4) + 0xc))
              (param_1->field_0xc + *(short *)(*(int *)(param_1->field_0xc + 4) + 8),3);
  }
  param_1->field_0xc = (uintptr_t)((void *)0x0);
  return;
}
