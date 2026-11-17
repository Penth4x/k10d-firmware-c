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

void release_owned_object_reference_10444840(void *param_1)

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
