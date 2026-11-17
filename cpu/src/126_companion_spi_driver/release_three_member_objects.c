/* @k10d release_three_member_objects @ 0x10440b4a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 then slot 1 on three pointer members, then nulls them out.
 * summary:
 *   The function operates on a struct with three pointer fields at offsets 4, 8, and 0xc.
 *   For each non-null pointer, it performs a virtual call to slot 2 (vtable offset 0x24)
 *   followed by a virtual call to slot 1 (vtable offset 0xc) with an argument of 3, then
 *   sets the field to zero. It is called from the deleting destructor of cls_105a0b64,
 *   indicating it cleans up member objects before the object itself is freed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_three_member_objects(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)param_1 + 4);
  if ((*piVar1 != 0) &&
     ((**(code **)(*(int *)(*piVar1 + 4) + 0x24))
                (*piVar1 + (int)*(short *)(*(int *)(*piVar1 + 4) + 0x20)), *piVar1 != 0)) {
    (**(code **)(*(int *)(*piVar1 + 4) + 0xc))
              (*piVar1 + (int)*(short *)(*(int *)(*piVar1 + 4) + 8),3);
  }
  *(uint32_t *)((int)param_1 + 4) = 0;
  if ((*(int *)((int)param_1 + 8) != 0) &&
     (iVar2 = *(int *)(*(int *)((int)param_1 + 8) + 4),
     (**(code **)(iVar2 + 0x24))(*(int *)((int)param_1 + 8) + (int)*(short *)(iVar2 + 0x20)),
     *(int *)((int)param_1 + 8) != 0)) {
    iVar2 = *(int *)(*(int *)((int)param_1 + 8) + 4);
    (**(code **)(iVar2 + 0xc))(*(int *)((int)param_1 + 8) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)((int)param_1 + 8) = 0;
  if ((*(int *)((int)param_1 + 0xc) != 0) &&
     (iVar2 = *(int *)(*(int *)((int)param_1 + 0xc) + 4),
     (**(code **)(iVar2 + 0x24))(*(int *)((int)param_1 + 0xc) + (int)*(short *)(iVar2 + 0x20)),
     *(int *)((int)param_1 + 0xc) != 0)) {
    iVar2 = *(int *)(*(int *)((int)param_1 + 0xc) + 4);
    (**(code **)(iVar2 + 0xc))(*(int *)((int)param_1 + 0xc) + (int)*(short *)(iVar2 + 8),3);
  }
  *(uint32_t *)((int)param_1 + 0xc) = 0;
  return;
}
