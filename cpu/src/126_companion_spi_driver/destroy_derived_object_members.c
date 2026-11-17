/* @k10d destroy_derived_object_members @ 0x10446950
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_derived_object_members(int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  
  piVar2 = (int *)(param_1 + 4);
  (**(code **)(*(int *)(*piVar2 + 4) + 0x24))
            (*piVar2 + (int)*(short *)(*(int *)(*piVar2 + 4) + 0x20));
  if (*piVar2 != 0) {
    (**(code **)(*(int *)(*piVar2 + 4) + 0xc))
              (*piVar2 + (int)*(short *)(*(int *)(*piVar2 + 4) + 8),3);
  }
  pvVar3 = *(void **)(param_1 + 0xc);
  if (pvVar3 != (void *)0x0) {
    cls_105a2be0_delete(pvVar3,2);
    heap_free((int)pvVar3);
  }
  *(uint32_t *)(param_1 + 4) = 0;
  *(uint32_t *)(param_1 + 0xc) = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
  (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 0x20));
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 8),3);
  }
  pvVar3 = *(void **)(param_1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    cls_105a2be0_delete(pvVar3,2);
    heap_free((int)pvVar3);
  }
  *(uint32_t *)(param_1 + 8) = 0;
  *(uint32_t *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x14) + (int)*(short *)(iVar1 + 8),3);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x18) + (int)*(short *)(iVar1 + 8),3);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x1c) + (int)*(short *)(iVar1 + 8),3);
  }
  return;
}
