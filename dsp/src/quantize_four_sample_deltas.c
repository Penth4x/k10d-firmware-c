/* @k10d quantize_four_sample_deltas @ 0x000c0fae
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Converts four 16-bit input samples into 6-bit and 2-bit quantized outputs using a
 *   lookup table and helper functions.
 * summary:
 *   Iterates four times, reading 16-bit values from param_1 and comparing them against
 *   table entries at 0x3f2e0-0x3f313. It calls unsigned_divide and clamp_and_call_helper to
 *   process the differences, then writes the high 6 bits to param_2 and low 2 bits to
 *   param_3. The function performs fixed-point arithmetic with sign correction before the
 *   final quantization step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void quantize_four_sample_deltas(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iStack_28;
  
  iVar4 = 0;
  iStack_28 = 4;
  iVar5 = 0;
  do {
    iVar3 = (uint)*(byte *)(iVar4 + 0x3f2e0) * 4 + (uint)*(byte *)(iVar4 + 0x3f2f0);
    iVar1 = (uint)*(ushort *)(iVar5 + param_1) - iVar3;
    bVar6 = iVar1 < 0;
    if (bVar6) {
      iVar1 = -iVar1;
    }
    uVar2 = unsigned_divide(iVar1 * ((uint)DAT_0003f320 - (uint)DAT_0003f321) * 4,
                         iVar3 - ((uint)*(byte *)(iVar4 + 0x3f300) * 4 +
                                 (uint)*(byte *)(iVar4 + 0x3f310)));
    if (bVar6) {
      uVar2 = (uVar2 ^ 0xffffffff) + 1;
    }
    uVar2 = clamp_and_call_helper(uVar2 + (uint)DAT_0003f320 * 4);
    *(char *)(iVar4 + param_2) = (char)(uVar2 >> 2);
    *(byte *)(iVar4 + param_3) = (byte)uVar2 & 3;
    iVar3 = (uint)(byte)(&DAT_0003f2e1)[iVar4] * 4 + (uint)(byte)(&DAT_0003f2f1)[iVar4];
    iVar1 = (uint)*(ushort *)(param_1 + iVar5 + 2) - iVar3;
    bVar6 = iVar1 < 0;
    if (bVar6) {
      iVar1 = -iVar1;
    }
    uVar2 = unsigned_divide(iVar1 * ((uint)DAT_0003f320 - (uint)DAT_0003f321) * 4,
                         iVar3 - ((uint)(byte)(&DAT_0003f301)[iVar4] * 4 +
                                 (uint)(byte)(&DAT_0003f311)[iVar4]));
    if (bVar6) {
      uVar2 = (uVar2 ^ 0xffffffff) + 1;
    }
    uVar2 = clamp_and_call_helper(uVar2 + (uint)DAT_0003f320 * 4);
    *(char *)(param_2 + iVar4 + 1) = (char)(uVar2 >> 2);
    *(byte *)(param_3 + iVar4 + 1) = (byte)uVar2 & 3;
    iVar3 = (uint)*(byte *)(iVar4 + 0x3f2e2) * 4 + (uint)*(byte *)(iVar4 + 0x3f2f2);
    iVar1 = (uint)*(ushort *)(param_1 + iVar5 + 4) - iVar3;
    bVar6 = iVar1 < 0;
    if (bVar6) {
      iVar1 = -iVar1;
    }
    uVar2 = unsigned_divide(iVar1 * ((uint)DAT_0003f320 - (uint)DAT_0003f321) * 4,
                         iVar3 - ((uint)*(byte *)(iVar4 + 0x3f302) * 4 +
                                 (uint)*(byte *)(iVar4 + 0x3f312)));
    if (bVar6) {
      uVar2 = (uVar2 ^ 0xffffffff) + 1;
    }
    uVar2 = clamp_and_call_helper(uVar2 + (uint)DAT_0003f320 * 4);
    *(char *)(param_2 + iVar4 + 2) = (char)(uVar2 >> 2);
    *(byte *)(param_3 + iVar4 + 2) = (byte)uVar2 & 3;
    iVar3 = (uint)(byte)(&DAT_0003f2e3)[iVar4] * 4 + (uint)(byte)(&DAT_0003f2f3)[iVar4];
    iVar1 = (uint)*(ushort *)(param_1 + iVar5 + 6) - iVar3;
    bVar6 = iVar1 < 0;
    if (bVar6) {
      iVar1 = -iVar1;
    }
    uVar2 = unsigned_divide(iVar1 * ((uint)DAT_0003f320 - (uint)DAT_0003f321) * 4,
                         iVar3 - ((uint)(byte)(&DAT_0003f303)[iVar4] * 4 +
                                 (uint)(byte)(&DAT_0003f313)[iVar4]));
    if (bVar6) {
      uVar2 = (uVar2 ^ 0xffffffff) + 1;
    }
    uVar2 = clamp_and_call_helper(uVar2 + (uint)DAT_0003f320 * 4);
    *(char *)(param_2 + iVar4 + 3) = (char)(uVar2 >> 2);
    *(byte *)(param_3 + iVar4 + 3) = (byte)uVar2 & 3;
    iVar5 = iVar5 + 8;
    iVar4 = iVar4 + 4;
    iStack_28 = iStack_28 + -1;
  } while (0 < iStack_28);
  return;
}
