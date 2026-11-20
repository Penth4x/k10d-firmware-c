/* @k10d apply_signed_offset_pair @ 0x000d3ea4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Adds two signed 16-bit offsets, derived from a global config word, to the first two
 *   shorts of a 4-short structure.
 * summary:
 *   Reads the first two shorts of param_1, computes their signed difference, and scales it
 *   by the low and high nibbles of DAT_0003f476 to produce two offset values. These offsets
 *   are added back to the original values and stored in param_1[2] and param_1[3]. The
 *   function has no callees and only modifies the input structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_signed_offset_pair(short *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  
  iVar3 = (int)*param_1;
  iVar2 = (int)param_1[1];
  iVar1 = iVar2 - iVar3;
  if (iVar2 < iVar3) {
    iVar1 = -iVar1;
  }
  sVar4 = (short)(iVar1 * (DAT_0003f476 & 0xf) >> 4);
  sVar5 = (short)(iVar1 * (DAT_0003f476 & 0xf0) >> 8);
  if (iVar2 < iVar3) {
    sVar4 = -sVar4;
    sVar5 = -sVar5;
  }
  param_1[2] = *param_1 + sVar5;
  param_1[3] = param_1[1] + sVar4;
  return;
}
