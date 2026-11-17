/* @k10d release_child_and_notify @ 0x1044c192
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slots 3 and 1 on a child object, then clears the parent's child
 *   pointer.
 * summary:
 *   The function reads a pointer from offset 4 of the input object. If non-null, it
 *   performs a virtual call to slot 3 (offset 0x24) on the child object, then a virtual
 *   call to slot 1 (offset 0xc) with argument 3. Finally, it sets the parent's offset 4 to
 *   0. This pattern suggests a cleanup or detach operation where the child is notified
 *   before the link is severed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_child_and_notify(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0x24))(*(short *)(*(int *)(iVar1 + 4) + 0x20) + iVar1);
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 4) + 0xc))(*(short *)(*(int *)(iVar1 + 4) + 8) + iVar1,3);
  }
  *(uint32_t *)(param_1 + 4) = 0;
  return;
}
