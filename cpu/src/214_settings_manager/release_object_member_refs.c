/* @k10d release_object_member_refs @ 0x104b1bbc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a struct's pointer fields, invoking a virtual method with argument 3 on
 *   each non-null object and freeing the container arrays.
 * summary:
 *   The function systematically processes fields at indices 0 through 0x12 of the input
 *   structure. For each field containing an object pointer, it calls virtual slot 1 (offset
 *   0xc) with the value 3, likely signaling a release or close operation. It also calls
 *   heap_free_2 on several fields, which appears to be a deallocation or cleanup routine
 *   for the container pointers. All processed fields are set to zero to prevent double-
 *   frees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_member_refs(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  param_1[0xb] = 0;
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  param_1[10] = 0;
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  param_1[9] = 0;
  piVar1 = (int *)param_1[0x12];
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  param_1[0x12] = 0;
  free_heap_block_if_flagged_104b4186(param_1[8],3);
  param_1[8] = 0;
  heap_free_2(param_1[7]);
  param_1[7] = 0;
  piVar1 = (int *)param_1[0x11];
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  param_1[0x11] = 0;
  piVar1 = (int *)param_1[0x10];
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  param_1[0x10] = 0;
  piVar1 = (int *)param_1[0xf];
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  param_1[0xf] = 0;
  heap_free_2(param_1[0xe]);
  uVar2 = 2;
  do {
    iVar3 = (uVar2 - 1) * 4;
    piVar1 = *(int **)(param_1[0xd] + iVar3);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    uVar2 = uVar2 - 1 & 0xff;
    *(uint32_t *)(param_1[0xd] + iVar3) = 0;
  } while (uVar2 != 0);
  heap_free_2(param_1[0xd]);
  param_1[0xd] = 0;
  uVar2 = 2;
  do {
    iVar3 = (uVar2 - 1) * 4;
    piVar1 = *(int **)(param_1[4] + iVar3);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    uVar2 = uVar2 - 1 & 0xff;
    *(uint32_t *)(param_1[4] + iVar3) = 0;
  } while (uVar2 != 0);
  heap_free_2(param_1[4]);
  param_1[4] = 0;
  uVar2 = 2;
  do {
    iVar3 = (uVar2 - 1) * 4;
    piVar1 = *(int **)(param_1[3] + iVar3);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    uVar2 = uVar2 - 1 & 0xff;
    *(uint32_t *)(param_1[3] + iVar3) = 0;
  } while (uVar2 != 0);
  heap_free_2(param_1[3]);
  param_1[3] = 0;
  uVar2 = 2;
  do {
    iVar3 = (uVar2 - 1) * 4;
    piVar1 = *(int **)(param_1[2] + iVar3);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    uVar2 = uVar2 - 1 & 0xff;
    *(uint32_t *)(param_1[2] + iVar3) = 0;
  } while (uVar2 != 0);
  heap_free_2(param_1[2]);
  param_1[2] = 0;
  uVar2 = 2;
  do {
    iVar3 = (uVar2 - 1) * 4;
    piVar1 = *(int **)(*param_1 + iVar3);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    uVar2 = uVar2 - 1 & 0xff;
    *(uint32_t *)(*param_1 + iVar3) = 0;
  } while (uVar2 != 0);
  heap_free_2(*param_1);
  *param_1 = 0;
  uVar2 = 2;
  do {
    iVar3 = (uVar2 - 1) * 4;
    piVar1 = *(int **)(param_1[1] + iVar3);
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    uVar2 = uVar2 - 1 & 0xff;
    *(uint32_t *)(param_1[1] + iVar3) = 0;
  } while (uVar2 != 0);
  heap_free_2(param_1[1]);
  param_1[1] = 0;
  return;
}
