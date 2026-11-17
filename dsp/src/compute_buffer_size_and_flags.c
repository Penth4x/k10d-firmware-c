/* @k10d compute_buffer_size_and_flags @ 0x000c123c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Calculates a size by summing conditional fields and sets two status bits based on the
 *   result.
 * summary:
 *   The function sums a series of values from DAT_0003c520 through DAT_0003c52d,
 *   conditionally adding some based on comparisons with DAT_0003f503. It passes the total
 *   and a count to unsigned_divide. If the result times 4 exceeds 0x350, it sets bit 1 of
 *   DAT_0003c581; if it is less than 0x90, it sets bit 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_buffer_size_and_flags(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  DAT_0003c581 = DAT_0003c581 & 0xfc;
  uVar1 = (uint)DAT_0003c520;
  if (DAT_0003f503 < DAT_0003c521) {
    uVar1 = uVar1 + DAT_0003c521;
  }
  uVar3 = (uint)(DAT_0003c521 <= DAT_0003f503);
  iVar2 = uVar1 + DAT_0003c522;
  if (DAT_0003f503 < DAT_0003c523) {
    iVar2 = iVar2 + (uint)DAT_0003c523;
  }
  else {
    uVar3 = uVar3 + 1;
  }
  iVar2 = iVar2 + (uint)DAT_0003c524 + (uint)DAT_0003c525 + (uint)DAT_0003c526 + (uint)DAT_0003c527;
  if (DAT_0003f503 < DAT_0003c528) {
    iVar2 = iVar2 + (uint)DAT_0003c528;
  }
  else {
    uVar3 = uVar3 + 1;
  }
  if (DAT_0003f503 < DAT_0003c529) {
    iVar2 = iVar2 + (uint)DAT_0003c529;
  }
  else {
    uVar3 = uVar3 + 1;
  }
  if (DAT_0003f503 < DAT_0003c52a) {
    iVar2 = iVar2 + (uint)DAT_0003c52a;
  }
  else {
    uVar3 = uVar3 + 1;
  }
  if (DAT_0003f503 < DAT_0003c52b) {
    iVar2 = iVar2 + (uint)DAT_0003c52b;
  }
  else {
    uVar3 = uVar3 + 1;
  }
  if (DAT_0003f503 < DAT_0003c52c) {
    iVar2 = iVar2 + (uint)DAT_0003c52c;
  }
  else {
    uVar3 = uVar3 + 1;
  }
  if (DAT_0003f503 < DAT_0003c52d) {
    iVar2 = iVar2 + (uint)DAT_0003c52d;
  }
  else {
    uVar3 = uVar3 + 1;
  }
  iVar2 = unsigned_divide(iVar2,0xe - uVar3);
  if (0x350 < (uint)(iVar2 * 4)) {
    DAT_0003c581 = DAT_0003c581 | 2;
  }
  if ((uint)(iVar2 * 4) < 0x90) {
    DAT_0003c581 = DAT_0003c581 | 1;
  }
  return;
}
