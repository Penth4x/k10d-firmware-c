/* @k10d destroy_two_member_objects @ 0x104425da
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Iterates over two object pointers in the struct, invokes their virtual destructors, and
 *   nulls the pointers.
 * summary:
 *   This function is virtual slot 4 of cls_105a0d28. It loops once (iVar2=1) to process two
 *   4-byte pointers at offsets 4 and 8 of param_1. For each non-null pointer, it calls the
 *   virtual method at vtable offset 0x24 (likely a cleanup or release method) and then the
 *   virtual method at vtable offset 0xc (likely the destructor) with an argument of 3.
 *   Finally, it sets the pointer to 0. The caller is the deleting destructor of the class,
 *   indicating this is a member-cleanup routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_two_member_objects(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar1 = 0;
  do {
    if ((*(int *)((int)param_1 + iVar1 + 4) != 0) &&
       (iVar3 = *(int *)(*(int *)((int)param_1 + iVar1 + 4) + 4),
       (**(code **)(iVar3 + 0x24))
                 (*(int *)((int)param_1 + iVar1 + 4) + (int)*(short *)(iVar3 + 0x20)),
       *(int *)((int)param_1 + iVar1 + 4) != 0)) {
      iVar3 = *(int *)(*(int *)((int)param_1 + iVar1 + 4) + 4);
      (**(code **)(iVar3 + 0xc))(*(int *)((int)param_1 + iVar1 + 4) + (int)*(short *)(iVar3 + 8),3);
    }
    *(uint32_t *)((int)param_1 + iVar1 + 4) = 0;
    if ((*(int *)((int)param_1 + iVar1 + 8) != 0) &&
       (iVar3 = *(int *)(*(int *)((int)param_1 + iVar1 + 8) + 4),
       (**(code **)(iVar3 + 0x24))
                 (*(int *)((int)param_1 + iVar1 + 8) + (int)*(short *)(iVar3 + 0x20)),
       *(int *)((int)param_1 + iVar1 + 8) != 0)) {
      iVar3 = *(int *)(*(int *)((int)param_1 + iVar1 + 8) + 4);
      (**(code **)(iVar3 + 0xc))(*(int *)((int)param_1 + iVar1 + 8) + (int)*(short *)(iVar3 + 8),3);
    }
    *(uint32_t *)((int)param_1 + iVar1 + 8) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 8;
  } while (-1 < iVar2);
  return;
}
