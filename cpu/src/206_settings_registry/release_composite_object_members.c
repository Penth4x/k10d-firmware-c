/* @k10d release_composite_object_members @ 0x104a30e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_composite_object_members(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 8);
  (**(code **)(iVar3 + 0x24))(*(int *)(param_1 + 0x24) + (int)*(short *)(iVar3 + 0x20));
  iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 8);
  (**(code **)(iVar3 + 0x24))(*(int *)(param_1 + 0x20) + (int)*(short *)(iVar3 + 0x20));
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x1c);
  (**(code **)(iVar3 + 0x24))(*(int *)(param_1 + 0xc) + (int)*(short *)(iVar3 + 0x20));
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
  (**(code **)(iVar3 + 0x24))(*(int *)(param_1 + 0x1c) + (int)*(short *)(iVar3 + 0x20));
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x1c);
  (**(code **)(iVar3 + 0x24))(*(int *)(param_1 + 8) + (int)*(short *)(iVar3 + 0x20));
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 8);
  (**(code **)(iVar3 + 0x24))(*(int *)(param_1 + 0x28) + (int)*(short *)(iVar3 + 0x20));
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x1c);
  (**(code **)(iVar3 + 0x24))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar3 + 0x20));
  iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  (**(code **)(iVar3 + 0x24))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar3 + 0x20));
  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x1c);
  (**(code **)(iVar3 + 0x24))(*(int *)(param_1 + 0x14) + (int)*(short *)(iVar3 + 0x20));
  iVar3 = **(int **)(param_1 + 4);
  (**(code **)(iVar3 + 0x24))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar3 + 0x20));
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 8) + 0xc))(*(short *)(*(int *)(iVar3 + 8) + 8) + iVar3,3);
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 8) + 0xc))(*(short *)(*(int *)(iVar3 + 8) + 8) + iVar3,3);
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x1c) + 0xc))(*(short *)(*(int *)(iVar3 + 0x1c) + 8) + iVar3,3);
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 8) + 0xc))(*(short *)(*(int *)(iVar3 + 8) + 8) + iVar3,3);
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x1c) + 0xc))(*(short *)(*(int *)(iVar3 + 0x1c) + 8) + iVar3,3);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 8) + 0xc))(*(short *)(*(int *)(iVar3 + 8) + 8) + iVar3,3);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x1c) + 0xc))(*(short *)(*(int *)(iVar3 + 0x1c) + 8) + iVar3,3);
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 8) + 0xc))(*(short *)(*(int *)(iVar3 + 8) + 8) + iVar3,3);
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x1c) + 0xc))(*(short *)(*(int *)(iVar3 + 0x1c) + 8) + iVar3,3);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x1c) + 0xc))(*(short *)(*(int *)(iVar3 + 0x1c) + 8) + iVar3,3);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  pvVar2 = (void *)get_system_heap();
  mempool_release_block(pvVar2,*(void **)(param_1 + 0x38));
  return;
}
