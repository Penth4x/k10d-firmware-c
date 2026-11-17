/* @k10d init_subobject_with_pointers @ 0x10510c76
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object at param_1+0x7fc by setting multiple internal pointers and
 *   copying state from param_1.
 * summary:
 *   The function writes a pointer to param_1+0x6cc into the slot at param_1+0x7fc, then
 *   populates several offsets within that sub-object with pointers to other fields in
 *   param_1 (0x6e8, 0x704, 0x720, 0x758). It calls compare_two_short_pairs_10511af8 twice
 *   to retrieve a value stored at offset 0x10, sets flags at 0x11 and 0x12 to 1, and copies
 *   a 4-byte value from param_1+0xf0 to offset 0x14. It calls compute_centered_range_bounds
 *   with several parameters derived from param_1, then halves the 16-bit values at
 *   param_1+0x6a6 and 0x6a8. The specific camera subsystem is not identifiable from the
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_subobject_with_pointers(int param_1,uint8_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  int *piVar4;
  uint8_t auStack_2c [4];
  uint8_t uStack_9;
  
  piVar4 = (int *)auStack_2c;
  **(int **)(param_1 + 0x7fc) = param_1 + 0x6cc;
  *(int *)(*(int *)(param_1 + 0x7fc) + 4) = param_1 + 0x6e8;
  *(int *)(*(int *)(param_1 + 0x7fc) + 8) = param_1 + 0x704;
  *(int *)(*(int *)(param_1 + 0x7fc) + 0xc) = param_1 + 0x720;
  *(int *)(*(int *)(param_1 + 0x7fc) + 0x1c) = param_1 + 0x758;
  iVar1 = *(int *)(param_1 + 0x7fc);
  uVar2 = compare_two_short_pairs_10511af8(param_1);
  *(char *)(iVar1 + 0x10) = (char)uVar2;
  *(uint8_t *)(*(int *)(param_1 + 0x7fc) + 0x11) = 1;
  *(uint8_t *)(*(int *)(param_1 + 0x7fc) + 0x12) = 1;
  *(uint8_t *)(*(int *)(param_1 + 0x7fc) + 0x20) = param_2;
  *(uint32_t *)(*(int *)(param_1 + 0x7fc) + 0x14) = *(uint32_t *)(param_1 + 0xf0);
  *(bool *)(*(int *)(param_1 + 0x7fc) + 0x18) = *(int *)(param_1 + 0xf0) != 0;
  iVar3 = compare_two_short_pairs_10511af8(param_1);
  iVar1 = param_1 + 0x6e8;
  if (iVar3 == 0) {
    iVar1 = param_1 + 0x6cc;
  }
  *piVar4 = param_1 + 0x6a8;
  compute_centered_range_bounds(&uStack_9,iVar1,param_1 + 0x704,(short *)(param_1 + 0x6a6),(short *)*piVar4);
  *(short *)(param_1 + 0x6aa) = (short)((int)(uint)*(ushort *)(param_1 + 0x6a6) >> 1);
  *(short *)(param_1 + 0x6ac) = (short)((int)(uint)*(ushort *)(param_1 + 0x6a8) >> 1);
  return;
}
