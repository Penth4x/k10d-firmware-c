/* @k10d unpack_and_write_byte_pairs @ 0x000d784c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Decodes 16-bit packed values into separate high/low byte arrays and writes them to
 *   memory via a helper.
 * summary:
 *   The function branches on a flag (DAT_0003c3f9) to select one of two source/destination
 *   buffer pairs. It iterates through 16-bit words, extracting the upper 14 bits (shifted
 *   right by 2) and the lower 2 bits into separate byte arrays. It then calls
 *   check_and_run_two_routines to write these reconstructed byte pairs to specific memory
 *   addresses (0x1b0, 0x1a0/0x1a8, or 0x190/0x198 depending on the branch).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void unpack_and_write_byte_pairs(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (DAT_0003c3f9 == '\0') {
    DAT_0003f321 = DAT_0003c3fa;
    check_and_run_two_routines(0x1b0,(uint)DAT_0003f320 * 0x100 + (uint)DAT_0003c3fa);
    iVar1 = 0;
    iVar3 = 4;
    iVar2 = 0;
    do {
      *(char *)(iVar1 + 0x3f300) = (char)((int)(uint)*(ushort *)(iVar2 + 0x3c500) >> 2);
      *(byte *)(iVar1 + 0x3f310) = (byte)*(uint16_t *)(iVar2 + 0x3c500) & 3;
      (&DAT_0003f301)[iVar1] = (char)((int)(uint)*(ushort *)(iVar2 + 0x3c502) >> 2);
      (&DAT_0003f311)[iVar1] = (byte)*(uint16_t *)(iVar2 + 0x3c502) & 3;
      *(char *)(iVar1 + 0x3f302) = (char)((int)(uint)*(ushort *)(&DAT_0003c504 + iVar2) >> 2);
      *(byte *)(iVar1 + 0x3f312) = (byte)*(uint16_t *)(&DAT_0003c504 + iVar2) & 3;
      (&DAT_0003f303)[iVar1] = (char)((int)(uint)*(ushort *)(iVar2 + 0x3c506) >> 2);
      (&DAT_0003f313)[iVar1] = (byte)*(uint16_t *)(iVar2 + 0x3c506) & 3;
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    iStack_28 = 2;
    sVar5 = 0x1a0;
    iStack_24 = 0;
    iVar1 = 1;
    sVar4 = 0x1a8;
    do {
      check_and_run_two_routines(sVar5,(uint)*(byte *)(iStack_24 + 0x3f300) * 0x100 +
                         (uint)*(byte *)(iVar1 + 0x3f300));
      check_and_run_two_routines(sVar4,(uint)*(byte *)(iStack_24 + 0x3f310) * 0x100 +
                         (uint)*(byte *)(iVar1 + 0x3f310));
      check_and_run_two_routines(sVar5 + 1,
                   (uint)*(byte *)(iStack_24 + 0x3f302) * 0x100 + (uint)*(byte *)(iVar1 + 0x3f302));
      check_and_run_two_routines(sVar4 + 1,
                   (uint)*(byte *)(iStack_24 + 0x3f312) * 0x100 + (uint)*(byte *)(iVar1 + 0x3f312));
      check_and_run_two_routines(sVar5 + 2,
                   (uint)(byte)(&DAT_0003f304)[iStack_24] * 0x100 +
                   (uint)(byte)(&DAT_0003f304)[iVar1]);
      check_and_run_two_routines(sVar4 + 2,
                   (uint)*(byte *)(iStack_24 + 0x3f314) * 0x100 + (uint)*(byte *)(iVar1 + 0x3f314));
      check_and_run_two_routines(sVar5 + 3,
                   (uint)*(byte *)(iStack_24 + 0x3f306) * 0x100 + (uint)*(byte *)(iVar1 + 0x3f306));
      check_and_run_two_routines(sVar4 + 3,
                   (uint)*(byte *)(iStack_24 + 0x3f316) * 0x100 + (uint)*(byte *)(iVar1 + 0x3f316));
      sVar4 = sVar4 + 4;
      sVar5 = sVar5 + 4;
      iVar1 = iVar1 + 8;
      iStack_24 = iStack_24 + 8;
      iStack_28 = iStack_28 + -1;
    } while (0 < iStack_28);
  }
  else if (DAT_0003c3f9 == '\x01') {
    DAT_0003f320 = DAT_0003c3fa;
    check_and_run_two_routines(0x1b0,(uint)DAT_0003c3fa * 0x100 + (uint)DAT_0003f321);
    iVar1 = 0;
    iVar3 = 4;
    iVar2 = 0;
    do {
      *(char *)(iVar1 + 0x3f2e0) = (char)((int)(uint)*(ushort *)(iVar2 + 0x3c500) >> 2);
      *(byte *)(iVar1 + 0x3f2f0) = (byte)*(uint16_t *)(iVar2 + 0x3c500) & 3;
      (&DAT_0003f2e1)[iVar1] = (char)((int)(uint)*(ushort *)(iVar2 + 0x3c502) >> 2);
      (&DAT_0003f2f1)[iVar1] = (byte)*(uint16_t *)(iVar2 + 0x3c502) & 3;
      *(char *)(iVar1 + 0x3f2e2) = (char)((int)(uint)*(ushort *)(&DAT_0003c504 + iVar2) >> 2);
      *(byte *)(iVar1 + 0x3f2f2) = (byte)*(uint16_t *)(&DAT_0003c504 + iVar2) & 3;
      (&DAT_0003f2e3)[iVar1] = (char)((int)(uint)*(ushort *)(iVar2 + 0x3c506) >> 2);
      (&DAT_0003f2f3)[iVar1] = (byte)*(uint16_t *)(iVar2 + 0x3c506) & 3;
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    iStack_20 = 2;
    sVar5 = 400;
    iStack_1c = 0;
    iVar1 = 1;
    sVar4 = 0x198;
    do {
      check_and_run_two_routines(sVar5,(uint)*(byte *)(iStack_1c + 0x3f2e0) * 0x100 +
                         (uint)*(byte *)(iVar1 + 0x3f2e0));
      check_and_run_two_routines(sVar4,(uint)*(byte *)(iStack_1c + 0x3f2f0) * 0x100 +
                         (uint)*(byte *)(iVar1 + 0x3f2f0));
      check_and_run_two_routines(sVar5 + 1,
                   (uint)*(byte *)(iStack_1c + 0x3f2e2) * 0x100 + (uint)*(byte *)(iVar1 + 0x3f2e2));
      check_and_run_two_routines(sVar4 + 1,
                   (uint)*(byte *)(iStack_1c + 0x3f2f2) * 0x100 + (uint)*(byte *)(iVar1 + 0x3f2f2));
      check_and_run_two_routines(sVar5 + 2,
                   (uint)*(byte *)(iStack_1c + 0x3f2e4) * 0x100 + (uint)*(byte *)(iVar1 + 0x3f2e4));
      check_and_run_two_routines(sVar4 + 2,
                   (uint)*(byte *)(iStack_1c + 0x3f2f4) * 0x100 + (uint)*(byte *)(iVar1 + 0x3f2f4));
      check_and_run_two_routines(sVar5 + 3,
                   (uint)*(byte *)(iStack_1c + 0x3f2e6) * 0x100 + (uint)*(byte *)(iVar1 + 0x3f2e6));
      check_and_run_two_routines(sVar4 + 3,
                   (uint)*(byte *)(iStack_1c + 0x3f2f6) * 0x100 + (uint)*(byte *)(iVar1 + 0x3f2f6));
      sVar4 = sVar4 + 4;
      sVar5 = sVar5 + 4;
      iVar1 = iVar1 + 8;
      iStack_1c = iStack_1c + 8;
      iStack_20 = iStack_20 + -1;
    } while (0 < iStack_20);
  }
  return;
}
