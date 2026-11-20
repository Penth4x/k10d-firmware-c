/* @k10d poll_and_average_status_bytes @ 0x000d7f5c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls status registers 32 times, stores byte pairs, and writes 16 averaged values to
 *   memory.
 * summary:
 *   The function iterates 4 times, reading 8 samples per iteration by polling bit 6 of
 *   DAT_00000079 and _DAT_00000082. It stores the low and high bytes of these registers
 *   into a local buffer indexed by a lookup table. After collecting all samples, it sums
 *   the values for each of 16 columns and stores the averaged results ((sum + 4) >> 3) to
 *   memory at 0x3c500. The function calls busy_wait_on_mode_flag with arguments 2 and 7,
 *   likely to configure the hardware for reading.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_and_average_status_bytes(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  ushort local_118 [128];
  
  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      busy_wait_on_mode_flag(2);
      uVar2 = _DAT_00000082;
      _DAT_00000082 = _DAT_00000082 & 0xff | 2;
      uVar1 = (uint)(byte)(&DAT_000fbf60)[iVar3];
      do {
      } while ((DAT_00000079 & 0x40) == 0);
      local_118[iVar4 * 0x20 + uVar1 * 2] = (ushort)_DAT_00000082;
      do {
      } while ((uVar2 & 0x40) == 0);
      local_118[iVar4 * 0x20 + uVar1 * 2 + 1] = (ushort)_DAT_00000088;
      DAT_00000078 = 0;
      DAT_0000007a = 0x8c;
      DAT_00000086 = 0x8c;
      _DAT_00000082 = CONCAT31((int3)(uVar2 >> 8),DAT_00000085) & 0xffff00ff | 2;
      do {
      } while ((DAT_00000079 & 0x40) == 0);
      local_118[iVar4 * 0x20 + uVar1 * 2 + 0x10] = (ushort)_DAT_00000082;
      do {
      } while ((uVar2 & 0x40) == 0);
      local_118[iVar4 * 0x20 + uVar1 * 2 + 0x11] = (ushort)_DAT_00000088;
      _DAT_00000004 =
           CONCAT13((byte)_DAT_00000004 & 0x8f | (&DAT_000fbf68)[iVar3] << 4,_DAT_00000005);
      DAT_00000079 = DAT_00000079 | 2;
      busy_wait_on_mode_flag(7);
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 4);
  iVar4 = 0;
  do {
    uVar2 = 0;
    iVar3 = 0;
    do {
      uVar2 = uVar2 + local_118[iVar3 * 0x10 + iVar4] & 0xffff;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
    *(short *)(iVar4 * 2 + 0x3c500) = (short)(uVar2 + 4 >> 3);
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 0x10);
  return;
}
