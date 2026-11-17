/* @k10d accumulate_threshold_offsets @ 0x000c0dc8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sums a variable number of offsets from param_1 based on comparisons of DAT_0003f503
 *   against a table of thresholds.
 * summary:
 *   The function compares the value at DAT_0003f503 against a series of threshold values
 *   stored in DAT_0003c520 through DAT_0003c52f. Depending on whether the value is less
 *   than or greater than each threshold, it accumulates corresponding offsets from the
 *   array pointed to by param_1 into iVar1 and sets bits in the status words DAT_0003c5a3
 *   and DAT_0003c5a4. If the count of 'greater than' conditions (uVar2) exceeds 1, it calls
 *   unsigned_divide with the accumulated sum and a calculated size (0x10 - uVar2). The
 *   result of unsigned_divide is stored in _DAT_0003c5a0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_threshold_offsets(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  DAT_0003c5a3 = 0;
  DAT_0003c5a4 = 0;
  if ((int)(uint)_DAT_0003c5a0 >> 2 <= (int)(DAT_0003c576 - 0xc)) {
    DAT_0003c5a3 = DAT_0003c520 <= DAT_0003f503;
    iVar1 = *param_1;
    if (DAT_0003f503 < DAT_0003c521) {
      iVar1 = iVar1 + param_1[1];
    }
    DAT_0003c5a4 = DAT_0003f503 >= DAT_0003c521;
    uVar2 = (uint)(DAT_0003c521 <= DAT_0003f503);
    if (DAT_0003c522 <= DAT_0003f503) {
      DAT_0003c5a3 = DAT_0003c5a3 | 2;
    }
    iVar1 = iVar1 + param_1[2];
    if (DAT_0003f503 < DAT_0003c523) {
      iVar1 = iVar1 + param_1[3];
    }
    else {
      uVar2 = uVar2 + 1;
      DAT_0003c5a4 = DAT_0003c5a4 | 2;
    }
    if (DAT_0003c524 <= DAT_0003f503) {
      DAT_0003c5a3 = DAT_0003c5a3 | 4;
    }
    if (DAT_0003c525 <= DAT_0003f503) {
      DAT_0003c5a4 = DAT_0003c5a4 | 4;
    }
    if (DAT_0003c526 <= DAT_0003f503) {
      DAT_0003c5a3 = DAT_0003c5a3 | 8;
    }
    if (DAT_0003c527 <= DAT_0003f503) {
      DAT_0003c5a4 = DAT_0003c5a4 | 8;
    }
    iVar1 = iVar1 + param_1[4] + param_1[5] + param_1[6] + param_1[7];
    if (DAT_0003f503 < DAT_0003c528) {
      iVar1 = iVar1 + param_1[8];
    }
    else {
      uVar2 = uVar2 + 1;
      DAT_0003c5a3 = DAT_0003c5a3 | 0x10;
    }
    if (DAT_0003f503 < DAT_0003c529) {
      iVar1 = iVar1 + param_1[9];
    }
    else {
      uVar2 = uVar2 + 1;
      DAT_0003c5a4 = DAT_0003c5a4 | 0x10;
    }
    if (DAT_0003f503 < DAT_0003c52a) {
      iVar1 = iVar1 + param_1[10];
    }
    else {
      uVar2 = uVar2 + 1;
      DAT_0003c5a3 = DAT_0003c5a3 | 0x20;
    }
    if (DAT_0003f503 < DAT_0003c52b) {
      iVar1 = iVar1 + param_1[0xb];
    }
    else {
      uVar2 = uVar2 + 1;
      DAT_0003c5a4 = DAT_0003c5a4 | 0x20;
    }
    if (DAT_0003f503 < DAT_0003c52c) {
      iVar1 = iVar1 + param_1[0xc];
    }
    else {
      uVar2 = uVar2 + 1;
      DAT_0003c5a3 = DAT_0003c5a3 | 0x40;
    }
    if (DAT_0003f503 < DAT_0003c52d) {
      iVar1 = iVar1 + param_1[0xd];
    }
    else {
      uVar2 = uVar2 + 1;
      DAT_0003c5a4 = DAT_0003c5a4 | 0x40;
    }
    if (DAT_0003c52e <= DAT_0003f503) {
      DAT_0003c5a3 = DAT_0003c5a3 | 0x80;
    }
    if (DAT_0003c52f <= DAT_0003f503) {
      DAT_0003c5a4 = DAT_0003c5a4 | 0x80;
    }
    if (1 < uVar2) {
      _DAT_0003c5a0 = unsigned_divide(iVar1 + param_1[0xe] + param_1[0xf],0x10 - uVar2);
    }
  }
  return;
}
