/* @k10d destroy_lens_update_objects @ 0x10536344
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Destroys a single object and an array of objects by invoking their virtual slot 2
 *   (destructor) methods.
 * summary:
 *   The function first checks the pointer at offset 8 of the input structure; if non-null,
 *   it calls virtual slot 2 of that object and clears the pointer. It then iterates over an
 *   array of object pointers stored at offset 0x1c, using the count at offset 0x14, calling
 *   virtual slot 2 for each. This pattern is consistent with a cleanup or destructor
 *   routine for a collection of lens firmware update objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_lens_update_objects(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0x18)))[4].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0x18)))[4].adj + iVar1);
    *(uint32_t *)(param_1 + 8) = 0;
  }
  uVar2 = 0;
  if (*(char *)(param_1 + 0x14) != '\0') {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + uVar2 * 4);
      iVar3 = *(int *)(iVar1 + 0x18);
      (((vtbl_entry*)(iVar3))[4].fn)(iVar1 + ((vtbl_entry*)(iVar3))[4].adj);
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 0x14));
  }
  return;
}
