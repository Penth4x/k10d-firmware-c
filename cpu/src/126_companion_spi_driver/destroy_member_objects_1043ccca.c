/* @k10d destroy_member_objects_1043ccca @ 0x1043ccca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Iterates over 5 object pointers in the class, calls their virtual destructors, and
 *   nulls the pointers.
 * summary:
 *   This function is virtual slot 4 of cls_105a06e8. It loops through 5 consecutive 4-byte
 *   fields starting at offset 0x4 of the object. For each non-null pointer, it performs a
 *   virtual call to slot 2 (offset 0x24) and then slot 1 (offset 0xc) of the pointed-to
 *   object's vtable, passing the adjusted object pointer and the integer 3. Finally, it
 *   sets the field to 0. This pattern is consistent with destroying member objects or
 *   clearing a list of resources during cleanup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_member_objects_1043ccca(void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 4;
  iVar3 = 5;
  do {
    if ((*(int *)((int)param_1 + iVar2 + 4) != 0) &&
       (iVar4 = *(int *)(*(int *)((int)param_1 + iVar2 + 4) + 4),
       (**(code **)(iVar4 + 0x24))
                 (*(int *)((int)param_1 + iVar2 + 4) + (int)*(short *)(iVar4 + 0x20)),
       *(int *)((int)param_1 + iVar2 + 4) != 0)) {
      iVar4 = *(int *)(*(int *)((int)param_1 + iVar2 + 4) + 4);
      (**(code **)(iVar4 + 0xc))(*(int *)((int)param_1 + iVar2 + 4) + (int)*(short *)(iVar4 + 8),3);
    }
    *(uint32_t *)((int)param_1 + iVar2 + 4) = 0;
    iVar4 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar2 = iVar2 + 4;
    iVar3 = iVar4;
  } while (bVar1 && iVar4 != 0);
  return;
}
