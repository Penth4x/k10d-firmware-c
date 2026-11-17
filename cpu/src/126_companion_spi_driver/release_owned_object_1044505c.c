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

void release_owned_object_1044505c(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x24))(*(short *)(*(int *)(iVar1 + 4) + 0x20) + iVar1);
    iVar1 = *(int *)((int)param_1 + 4);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 4) + 0xc))(*(short *)(*(int *)(iVar1 + 4) + 8) + iVar1,3);
    }
  }
  *(uint32_t *)((int)param_1 + 4) = 0;
  return;
}
