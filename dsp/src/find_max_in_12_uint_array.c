/* @k10d find_max_in_12_uint_array @ 0x000c09a4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the maximum value among 12 consecutive uint elements starting at the given
 *   pointer.
 * summary:
 *   The function iterates over three groups of four uints (12 total) located at param_1,
 *   comparing each against a running maximum initialized to the first element. It has no
 *   callees and no side effects, returning the largest value found in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint find_max_in_12_uint_array(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  iVar3 = 3;
  iVar1 = 4;
  do {
    if (uVar2 < *(uint *)(iVar1 + (int)param_1)) {
      uVar2 = *(uint *)(iVar1 + (int)param_1);
    }
    if (uVar2 < *(uint *)(iVar1 + 4 + (int)param_1)) {
      uVar2 = *(uint *)(iVar1 + 4 + (int)param_1);
    }
    if (uVar2 < *(uint *)(iVar1 + 8 + (int)param_1)) {
      uVar2 = *(uint *)(iVar1 + 8 + (int)param_1);
    }
    if (uVar2 < *(uint *)(iVar1 + 0xc + (int)param_1)) {
      uVar2 = *(uint *)(iVar1 + 0xc + (int)param_1);
    }
    if (uVar2 < *(uint *)(iVar1 + 0x10 + (int)param_1)) {
      uVar2 = *(uint *)(iVar1 + 0x10 + (int)param_1);
    }
    iVar1 = iVar1 + 0x14;
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  return uVar2;
}
