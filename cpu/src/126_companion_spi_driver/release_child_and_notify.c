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

void release_child_and_notify(cls_105a1c3c *param_1)

{
  void *puVar1;
  
  puVar1 = (void *)((uintptr_t)(param_1->field_0x4));
  if (puVar1 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar1 + 4)))[4].fn)((char*)puVar1 + ((vtbl_entry*)(*(int *)((char*)puVar1 + 4)))[4].adj);
  }
  puVar1 = (void *)((uintptr_t)(param_1->field_0x4));
  if (puVar1 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar1 + 4)))[1].fn)((char*)puVar1 + *(short *)(*(int *)((char*)puVar1 + 4) + 8),3);
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  return;
}
