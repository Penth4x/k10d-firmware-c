/* @k10d find_max_active_bit_value @ 0x000d9976
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Scans 16 bits of param_2 against two 16-byte lookup tables and returns the highest
 *   table value where the bit is clear.
 * summary:
 *   The function copies two 32-byte constant blocks from DAT_000fc0cb and DAT_000fc0eb into
 *   local buffers. It then iterates over 16 bit positions, selecting a byte from either
 *   0x3c6d0 or 0x3c6c0 based on param_1, and checking if the corresponding bit in param_2
 *   is 0. It tracks the maximum value found among these clear-bit positions and stores the
 *   index of that maximum in DAT_0003c6f6. The function returns the maximum value found, or
 *   0 if no valid bits were found.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ushort find_max_active_bit_value(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t uStack_45;
  ushort local_44 [15];
  uint8_t uStack_25;
  ushort local_24 [16];
  
  iVar6 = 0x20;
  do {
    iVar5 = iVar6 + -1;
    bVar2 = 0 < iVar6;
    *(uint8_t *)((int)local_44 + iVar6 + -1) = (&DAT_000fc0cb)[iVar6];
    iVar6 = iVar5;
  } while (bVar2 && iVar5 != 0);
  iVar6 = 0x20;
  do {
    iVar5 = iVar6 + -1;
    bVar2 = 0 < iVar6;
    *(uint8_t *)((int)local_24 + iVar6 + -1) = (&DAT_000fc0eb)[iVar6];
    iVar6 = iVar5;
  } while (bVar2 && iVar5 != 0);
  uVar3 = 0;
  do {
    if (param_1 == 2) {
      local_24[uVar3] = (ushort)*(byte *)(uVar3 + 0x3c6d0);
    }
    else {
      local_24[uVar3] = (ushort)*(byte *)(uVar3 + 0x3c6c0);
    }
    local_44[uVar3] = (ushort)(param_2 >> (uVar3 & 0x1f)) & 1;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x10);
  uVar4 = 0;
  if ((local_44[0] == 0) && (local_24[0] != 0xff)) {
    uVar4 = local_24[0];
  }
  uVar3 = 1;
  do {
    if (((local_44[uVar3] == 0) && (uVar1 = local_24[uVar3], uVar1 != 0xff)) && (uVar4 < uVar1)) {
      DAT_0003c6f6 = (uint8_t)uVar3;
      uVar4 = uVar1;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x10);
  return uVar4;
}
