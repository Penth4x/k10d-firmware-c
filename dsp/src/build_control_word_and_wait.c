/* @k10d build_control_word_and_wait @ 0x000da638
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Decodes a 16-bit lookup-table entry into a control word, performs busy-wait loops, and
 *   calls helper functions on two stack buffers.
 * summary:
 *   The function selects a 16-bit value from one of three lookup tables (DAT_000fc1b4,
 *   DAT_000fc1ac, DAT_000fc1bc) based on the value of DAT_0003c492 and an index derived
 *   from DAT_0003c190. It decodes bits of this value into a control word stored at [puVar4
 *   - 4], sets DAT_00000050 to 0xff and DAT_00000056 to 3, and performs busy-wait loops
 *   dependent on the decoded value. It then calls write_32_shorts_via_mmio on the stack
 *   buffers and compute_16_sample_histograms with the buffers and a flag, finally calling
 *   poll_and_average_status_bytes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_control_word_and_wait(void)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint in_ps;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint8_t auStack_214 [256];
  uint8_t auStack_114 [256];
  
  bVar10 = 0;
  bVar9 = 0;
  puVar4 = auStack_214;
  uVar3 = 0;
  iVar1 = (int)(uint)DAT_0003c190 >> 6;
  if ((DAT_0003c492 == '\r') || (DAT_0003c492 == '\x16')) {
    uVar2 = (uint)*(ushort *)(&DAT_000fc1bc + iVar1 * 2);
  }
  else if (((DAT_0003c492 == '\v') || (DAT_0003c492 == '\f')) || (DAT_0003c492 == '\x0f')) {
    uVar2 = (uint)*(ushort *)(&DAT_000fc1ac + iVar1 * 2);
  }
  else {
    uVar2 = (uint)*(ushort *)(&DAT_000fc1b4 + iVar1 * 2);
  }
  bVar6 = 0;
  bVar5 = (uVar2 & 1) != 0;
  uVar2 = uVar2 / 2;
  bVar8 = 0;
  bVar7 = uVar2 == 0;
  FUN_000dab0e();
  *(uint *)(puVar4 + -4) =
       in_ps & 0xffffffc0 | (uint)(bVar10 & 1) * 0x20 | (uint)(bVar9 & 1) * 0x10 |
       (uint)(bVar8 & 1) * 8 | (uint)(bVar7 & 1) * 4 | (uint)(bVar6 & 1) * 2 | (uint)(bVar5 & 1);
  DAT_00000050 = 0xff;
  DAT_00000056 = 3;
  do {
  } while (0xff05 - uVar2 < _DAT_00000052);
  write_32_shorts_via_mmio((uint)(uintptr_t)auStack_214);
  if (((DAT_0003c492 == '\r') || (DAT_0003c492 == '\v')) ||
     ((DAT_0003c492 == '\f' || ((DAT_0003c492 == '\x0f' || (DAT_0003c492 == '\x16')))))) {
    do {
    } while (0xfc49 - uVar2 < _DAT_00000052);
    write_32_shorts_via_mmio((uint)(uintptr_t)auStack_114);
    uVar3 = 1;
  }
  DAT_00000057 = DAT_00000057 & 0xfd;
  compute_16_sample_histograms((uint)(uintptr_t)auStack_214,(uint)(uintptr_t)auStack_114,uVar3);
  poll_and_average_status_bytes();
  return;
}
