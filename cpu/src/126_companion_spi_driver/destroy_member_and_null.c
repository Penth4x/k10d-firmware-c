/* @k10d destroy_member_and_null @ 0x104419ba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 and slot 1 on the object stored at offset 4, then nulls the
 *   pointer.
 * summary:
 *   This function acts as a cleanup routine for a member object. It checks if the pointer
 *   at offset 4 is non-null, then calls virtual slot 2 (offset 0x24) and virtual slot 1
 *   (offset 0xc) on that member object. Finally, it sets the pointer at offset 4 to zero.
 *   It is called by the deleting destructor of cls_105a0c74.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_member_and_null(cls_105a0c74 *param_1)

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
