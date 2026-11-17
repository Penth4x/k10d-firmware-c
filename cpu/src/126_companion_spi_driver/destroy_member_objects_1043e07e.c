/* @k10d destroy_member_objects_1043e07e @ 0x1043e07e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Iterates through object pointers in a struct, calls virtual cleanup methods on each,
 *   and nulls the pointers.
 * summary:
 *   The function loops through 15 pointer fields (offsets 0x4-0x54) of the input structure.
 *   For each non-null pointer, it invokes a virtual method at slot 3 (offset 0x24) and then
 *   slot 1 (offset 0xc) with an argument of 3, before setting the field to zero. This
 *   pattern is consistent with destroying or resetting member objects during a class
 *   teardown or reset operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_member_objects_1043e07e(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 3;
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
    if ((*(int *)((int)param_1 + iVar1 + 0xc) != 0) &&
       (iVar3 = *(int *)(*(int *)((int)param_1 + iVar1 + 0xc) + 4),
       (**(code **)(iVar3 + 0x24))
                 (*(int *)((int)param_1 + iVar1 + 0xc) + (int)*(short *)(iVar3 + 0x20)),
       *(int *)((int)param_1 + iVar1 + 0xc) != 0)) {
      iVar3 = *(int *)(*(int *)((int)param_1 + iVar1 + 0xc) + 4);
      (**(code **)(iVar3 + 0xc))
                (*(int *)((int)param_1 + iVar1 + 0xc) + (int)*(short *)(iVar3 + 8),3);
    }
    *(uint32_t *)((int)param_1 + iVar1 + 0xc) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0xc;
  } while (-1 < iVar2);
  if ((*(int *)((int)param_1 + 0x44) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)param_1 + 0x44) + 4),
     (**(code **)(iVar1 + 0x24))(*(int *)((int)param_1 + 0x44) + (int)*(short *)(iVar1 + 0x20)),
     *(int *)((int)param_1 + 0x44) != 0)) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x44) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 0x44) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)((int)param_1 + 0x44) = 0;
  if ((*(int *)((int)param_1 + 0x48) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)param_1 + 0x48) + 4),
     (**(code **)(iVar1 + 0x24))(*(int *)((int)param_1 + 0x48) + (int)*(short *)(iVar1 + 0x20)),
     *(int *)((int)param_1 + 0x48) != 0)) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x48) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 0x48) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)((int)param_1 + 0x48) = 0;
  if ((*(int *)((int)param_1 + 0x4c) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)param_1 + 0x4c) + 4),
     (**(code **)(iVar1 + 0x24))(*(int *)((int)param_1 + 0x4c) + (int)*(short *)(iVar1 + 0x20)),
     *(int *)((int)param_1 + 0x4c) != 0)) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x4c) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 0x4c) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)((int)param_1 + 0x4c) = 0;
  if ((*(int *)((int)param_1 + 0x50) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)param_1 + 0x50) + 4),
     (**(code **)(iVar1 + 0x24))(*(int *)((int)param_1 + 0x50) + (int)*(short *)(iVar1 + 0x20)),
     *(int *)((int)param_1 + 0x50) != 0)) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x50) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 0x50) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)((int)param_1 + 0x50) = 0;
  if ((*(int *)((int)param_1 + 0x54) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)param_1 + 0x54) + 4),
     (**(code **)(iVar1 + 0x24))(*(int *)((int)param_1 + 0x54) + (int)*(short *)(iVar1 + 0x20)),
     *(int *)((int)param_1 + 0x54) != 0)) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x54) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)((int)param_1 + 0x54) + (int)*(short *)(iVar1 + 8),3);
  }
  *(uint32_t *)((int)param_1 + 0x54) = 0;
  return;
}
