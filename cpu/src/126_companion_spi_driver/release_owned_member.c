/* @k10d release_owned_member @ 0x10444058
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual cleanup on a member object and nulls the pointer.
 * summary:
 *   This function is virtual slot 4 of cls_105a0f58. It reads the pointer at offset 4 of
 *   the object, and if non-null, calls virtual slot 3 (offset 0x24) and then virtual slot 1
 *   (offset 0xc) on the pointed-to object with argument 3. Finally, it sets the member
 *   pointer at offset 4 to zero. The specific behavior of the called virtual methods is
 *   unknown as no callees are provided.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_owned_member(void *param_1)

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
