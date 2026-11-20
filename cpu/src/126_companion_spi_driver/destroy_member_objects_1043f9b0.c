/* @k10d destroy_member_objects_1043f9b0 @ 0x1043f9b0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Iterates over 13 object pointers in the object, calls their virtual destroy methods,
 *   and nulls the pointers.
 * summary:
 *   This function loops 13 times (0xd) over a 4-byte aligned array of pointers starting at
 *   offset 4 of param_1. For each non-null pointer, it loads the vtable from offset 4 of
 *   the pointed-to object and invokes virtual slot 3 (offset 0x24) and then virtual slot 1
 *   (offset 0xc) with an argument of 3. It then sets the pointer in the array to 0. This is
 *   a standard C++ member cleanup routine, likely called by the deleting destructor
 *   cls_105a0a54_delete before freeing the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_member_objects_1043f9b0(cls_105a0a54 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 0xd;
  do {
    if ((*(int *)((int)&param_1->field_0x4 + iVar2) != 0) &&
       (iVar4 = *(int *)(*(int *)((int)&param_1->field_0x4 + iVar2) + 4),
       (((vtbl_entry*)(iVar4))[4].fn)
                 (*(int *)((int)&param_1->field_0x4 + iVar2) + (int)((vtbl_entry*)(iVar4))[4].adj),
       *(int *)((int)&param_1->field_0x4 + iVar2) != 0)) {
      iVar4 = *(int *)(*(int *)((int)&param_1->field_0x4 + iVar2) + 4);
      (((vtbl_entry*)(iVar4))[1].fn)
                (*(int *)((int)&param_1->field_0x4 + iVar2) + (int)*(short *)(iVar4 + 8),3);
    }
    *(uint32_t *)((int)&param_1->field_0x4 + iVar2) = 0;
    iVar4 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar2 = iVar2 + 4;
    iVar3 = iVar4;
  } while (bVar1 && iVar4 != 0);
  return;
}
