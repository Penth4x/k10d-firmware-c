/* @k10d release_all_member_objects @ 0x1049ae1c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 1 on each non-null member object pointer within the struct to
 *   release resources.
 * summary:
 *   The function iterates through multiple member pointers stored at offsets 0x04, 0x08,
 *   0x0c, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, and 0x2c of the object. For each non-
 *   null pointer, it performs a virtual call to slot 1 (offset 0x0c in the vtable) with an
 *   argument of 3. It also performs virtual calls to slot 4 (offset 0x24) on some members
 *   before the slot 1 calls. This pattern is consistent with a cleanup or destructor-like
 *   routine that releases child objects or resources.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_all_member_objects(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  (**(code **)(iVar2 + 0x24))(*(int *)(param_1 + 8) + (int)*(short *)(iVar2 + 0x20));
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x10);
  (**(code **)(iVar2 + 0x24))(*(int *)(param_1 + 0xc) + (int)*(short *)(iVar2 + 0x20));
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
  (**(code **)(iVar2 + 0x24))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar2 + 0x20));
  iVar2 = **(int **)(param_1 + 4);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 4) + 0xc))(*(short *)(*(int *)(iVar2 + 4) + 8) + iVar2,3);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 4) + 0xc))(*(short *)(*(int *)(iVar2 + 4) + 8) + iVar2,3);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 4) + 0xc))(*(short *)(*(int *)(iVar2 + 4) + 8) + iVar2,3);
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))(*(short *)(*(int *)(iVar2 + 0x10) + 8) + iVar2,3);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))(*(short *)(*(int *)(iVar2 + 0x10) + 8) + iVar2,3);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))(*(short *)(*(int *)(iVar2 + 0x10) + 8) + iVar2,3);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  return;
}
