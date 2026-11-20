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

void release_owned_member(cls_105a0f58 *param_1)

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
