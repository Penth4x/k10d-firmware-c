/* @k10d release_owned_object_1044505c @ 0x1044505c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual cleanup methods on an owned sub-object and nulls the owning pointer.
 * summary:
 *   Reads a pointer from offset 4 of the object. If non-null, it calls virtual slot 3
 *   (offset 0x24) and then virtual slot 1 (offset 0xc) on the sub-object, passing the
 *   constant 3 to the latter. Finally, it sets the pointer at offset 4 to zero. This is
 *   virtual slot 4 of cls_105a1698, likely a cleanup or release method called during
 *   destruction.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_1044505c(cls_105a1698 *param_1)

{
  void *puVar1;
  
  puVar1 = (void *)((uintptr_t)(param_1->field_0x4));
  if (puVar1 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar1 + 4)))[4].fn)((char*)puVar1 + ((vtbl_entry*)(*(int *)((char*)puVar1 + 4)))[4].adj);
    puVar1 = (void *)((uintptr_t)(param_1->field_0x4));
    if (puVar1 != 0) {
      (((vtbl_entry*)(*(int *)((char*)puVar1 + 4)))[1].fn)((char*)puVar1 + *(short *)(*(int *)((char*)puVar1 + 4) + 8),3);
    }
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  return;
}
