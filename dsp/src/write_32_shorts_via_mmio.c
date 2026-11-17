/* @k10d write_32_shorts_via_mmio @ 0x000d7e60
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes 32 short values into a buffer at param_1 by reading them from MMIO registers in
 *   a 4x8 loop.
 * summary:
 *   The function iterates 4 times over an outer loop and 8 times over an inner loop. In
 *   each iteration, it polls DAT_00000079 and _DAT_00000082 for bit 6, then writes the low
 *   16 bits of _DAT_00000082 and _DAT_00000088 to offsets calculated from param_1, iVar2,
 *   and the outer loop index. It also updates DAT_00000078, DAT_0000007a, DAT_00000086, and
 *   _DAT_00000004, and calls busy_wait_on_mode_flag with arguments 0x96 and 7.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_32_shorts_via_mmio(int param_1)

{
  int iVar1;
  int iVar2;
  short sStack_1a;
  
  busy_wait_on_mode_flag(0x96);
  sStack_1a = 0;
  do {
    iVar2 = 0;
    do {
      _DAT_00000082 = _DAT_00000082 & 0xffff00ff | 2;
      do {
      } while ((DAT_00000079 & 0x40) == 0);
      iVar1 = (uint)(byte)(&DAT_000fbf60)[iVar2] * 4 + sStack_1a * 0x40;
      DAT_00000079 = DAT_00000079 | 2;
      *(short *)(iVar1 + param_1) = (short)_DAT_00000082;
      do {
      } while ((_DAT_00000082 & 0x40) == 0);
      *(short *)(param_1 + iVar1 + 2) = (short)_DAT_00000088;
      DAT_00000078 = 0;
      DAT_0000007a = 0x8c;
      DAT_00000086 = 0x8c;
      _DAT_00000082 = _DAT_00000082 & 0xffff00ff | 2;
      do {
      } while ((DAT_00000079 & 0x40) == 0);
      DAT_00000079 = DAT_00000079 | 2;
      *(short *)(param_1 + iVar1 + 0x20) = (short)_DAT_00000082;
      do {
      } while ((_DAT_00000082 & 0x40) == 0);
      *(short *)(param_1 + iVar1 + 0x22) = (short)_DAT_00000088;
      _DAT_00000004 =
           CONCAT13((byte)_DAT_00000004 & 0x8f | (&DAT_000fbf68)[iVar2] << 4,_DAT_00000005);
      busy_wait_on_mode_flag(7);
      iVar2 = (int)(short)((short)iVar2 + 1);
    } while (iVar2 < 8);
    sStack_1a = sStack_1a + 1;
  } while (sStack_1a < 4);
  return;
}
