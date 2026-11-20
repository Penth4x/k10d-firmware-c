/* @k10d release_owned_object_reference_10444840 @ 0x10444840
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Releases the object pointer stored at offset 4 by invoking two virtual methods on it,
 *   then nulls the pointer.
 * summary:
 *   The function reads a pointer from param_1+4. If non-null, it calls virtual slot 3
 *   (offset 0x24) and then virtual slot 1 (offset 0xc) on the pointed-to object, passing
 *   the constant 3 to the second call. Finally, it sets param_1+4 to 0. This is virtual
 *   slot 4 of cls_105a1418, likely a cleanup or release operation for a member object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_object_reference_10444840(cls_105a1418 *param_1)

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
