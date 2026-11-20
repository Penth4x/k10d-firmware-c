/* @k10d release_owned_object_and_clear_slot @ 0x104415be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slots 3 and 1 on the object stored at offset 4 of param_1, then nulls
 *   that pointer.
 * summary:
 *   This is virtual slot 4 of cls_105a0bec. It checks if the pointer at param_1+4 is non-
 *   null, then calls virtual slot 3 (vtable offset 0x24) on that object, and if still non-
 *   null, calls virtual slot 1 (vtable offset 0x0c) with argument 3. Finally, it sets
 *   param_1+4 to 0. The caller is the deleting destructor of cls_105a0bec, suggesting this
 *   is a cleanup/release method for a member object. No camera-specific subsystem is
 *   identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_and_clear_slot(cls_105a0bec *param_1)

{
  int iVar1;
  
  if ((param_1->field_0x4 != 0) &&
     (iVar1 = *(int *)(param_1->field_0x4 + 4),
     (((vtbl_entry*)(iVar1))[4].fn)(param_1->field_0x4 + ((vtbl_entry*)(iVar1))[4].adj),
     param_1->field_0x4 != 0)) {
    iVar1 = *(int *)(param_1->field_0x4 + 4);
    (((vtbl_entry*)(iVar1))[1].fn)(param_1->field_0x4 + *(short *)(iVar1 + 8),3);
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  return;
}
