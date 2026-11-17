/* @k10d compute_clamped_offset_value_000d8a3a @ 0x000d8a3a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes a clamped signed offset from global state and helper calls, storing the result
 *   in a global byte.
 * summary:
 *   The function reads multiple global state variables and calls helpers
 *   clamp_value_to_range_000d9ac0, compute_signed_half_sum, abs_value_via_helper,
 *   float32_subtract, and count_leading_zeros to derive intermediate values. It applies
 *   conditional adjustments based on flags in DAT_0003c127, DAT_0003c493, and DAT_0003c589,
 *   then clamps the final result between -0x60 and 0x31. The result is stored in
 *   DAT_0003c6ec (or DAT_0003c6ed if param_1 is 2) and returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_clamped_offset_value_000d8a3a(short param_1)

{
  byte bVar1;
  uint8_t uVar2;
  short sVar5;
  short sVar6;
  int iVar3;
  uint32_t uVar4;
  short sVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  char cVar11;
  ushort uStack_1e;
  
  sVar5 = compute_timing_parameters((int)param_1);
  cVar11 = DAT_0003c6ea;
  bVar1 = DAT_0003c6e6;
  if (param_1 == 2) {
    cVar11 = DAT_0003c6eb;
    bVar1 = DAT_0003c6e7;
  }
  uStack_1e = (ushort)bVar1;
  iVar10 = (int)cVar11;
  if (DAT_0003c564 < 0x81) {
    uVar8 = 0x7c;
  }
  else {
    uVar8 = (ushort)DAT_0003c564;
  }
  compute_offset_from_state_flags((int)param_1);
  if (((DAT_0003c127 & 4) == 0) || ((DAT_0003c129 & 1) == 0)) {
    sVar9 = (uVar8 + DAT_0003c565) - (ushort)DAT_0003c6f2;
  }
  else {
    sVar9 = (uVar8 + (DAT_0003c576 - 0x4e)) - (ushort)DAT_0003c6f2;
  }
  if (DAT_0003c493 == '\x15') {
    sVar7 = 0xac;
    sVar6 = clamp_value_to_range_000d9ac0(DAT_0003f32a & 0x7f,0,0x10);
    if ((DAT_0003f32a & 0x80) != 0) {
      sVar6 = -sVar6;
    }
    sVar6 = sVar9 + 6 + sVar6;
  }
  else {
    sVar7 = 0xa4;
    sVar6 = clamp_value_to_range_000d9ac0(DAT_0003f32b & 0x7f,0,0x10);
    if ((DAT_0003f32b & 0x80) != 0) {
      sVar6 = -sVar6;
    }
    sVar6 = sVar9 + 2 + sVar6;
  }
  sVar9 = clamp_value_to_range_000d9ac0((int)(short)(0x10 - (ushort)DAT_0003c6f5),0,0x20);
  iVar3 = clamp_value_to_range_000d9ac0((int)(short)((0x30 - ((((ushort)DAT_0003c564 + (ushort)DAT_0003c565) -
                                             (ushort)DAT_0003c568) - (ushort)DAT_0003c6f5)) - sVar9)
                       ,0x10,0x30);
  uVar4 = compute_signed_half_sum(8,iVar3);
  if (0 < iVar10) {
    uVar4 = compute_signed_half_sum(0x10,iVar10 * (short)uVar4);
    iVar10 = (int)(short)uVar4;
  }
  iVar3 = (int)(short)((((ushort)DAT_0003c564 + (ushort)DAT_0003c565) - (ushort)DAT_0003c568) -
                      (ushort)DAT_0003c6f5);
  if (DAT_0003c6f5 < 0x79) {
    uVar4 = compute_signed_half_sum(4,iVar3);
    sVar9 = (short)uVar4;
  }
  else {
    uVar4 = compute_signed_half_sum(4,iVar3 + -8);
    sVar9 = (short)uVar4;
  }
  sVar9 = clamp_value_to_range_000d9ac0((int)sVar9,0xfffffffc,0);
  if (sVar5 == 0x10) {
    if ((DAT_0003c589 & 0x80) == 0) {
      sVar7 = sVar7 + -0x20;
    }
    else {
      uVar4 = update_mode_indexed_state();
      sVar7 = sVar7 - (short)uVar4;
    }
  }
  else {
    sVar7 = clamp_value_to_range_000d9ac0(iVar10,0xfffffff2,0xc);
    sVar7 = sVar7 + uStack_1e;
  }
  uVar4 = abs_value_via_helper(-(((uint)DAT_0003c6fc -
                         ((((uint)DAT_0003c6f8 + (uint)DAT_0003c6f9) - (uint)DAT_0003c6fa) -
                         (uint)DAT_0003c6fb)) + 8));
  uVar4 = float32_subtract(uVar4,0x3f000000);
  iVar10 = count_leading_zeros(uVar4);
  if (iVar10 < -6) {
    iVar10 = -6;
  }
  else if (0 < iVar10) {
    iVar10 = 0;
  }
  iVar10 = (int)(short)((sVar6 - sVar7) + sVar9 + (short)iVar10);
  if (0x30 < iVar10) {
    iVar10 = 0x31;
  }
  if (iVar10 < -0x60) {
    iVar10 = -0x60;
  }
  uVar2 = (char)iVar10;
  if (param_1 == 2) {
    uVar2 = DAT_0003c6ec;
    DAT_0003c6ed = (char)iVar10;
  }
  DAT_0003c6ec = uVar2;
  return iVar10;
}
