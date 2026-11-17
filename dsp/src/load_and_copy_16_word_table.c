/* @k10d load_and_copy_16_word_table @ 0x000d857c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Loads 8 entries from a table into a 16-word buffer at 0x3c5e0, then copies them to
 *   0x3c500.
 * summary:
 *   Iterates 8 times, reading a byte from DAT_000fbf60 and a nibble from DAT_000fbf68. It
 *   waits on bits in DAT_00000079 and _DAT_00000082, updates _DAT_00000004, and writes two
 *   shorts to 0x3c5e0 using the table byte as an index. It calls busy_wait_on_mode_flag(10)
 *   each iteration. Finally, it copies the 16 words from 0x3c5e0 to 0x3c500.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_and_copy_16_word_table(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    uVar2 = _DAT_00000082;
    DAT_00000078 = 0;
    DAT_0000007a = 0x8c;
    DAT_00000086 = 0x8c;
    _DAT_00000082 = _DAT_00000082 & 0xffff00ff | 2;
    do {
    } while ((DAT_00000079 & 0x40) == 0);
    do {
    } while ((uVar2 & 0x40) == 0);
    _DAT_00000004 = CONCAT13((byte)_DAT_00000004 & 0x8f | (&DAT_000fbf68)[uVar3] << 4,_DAT_00000005)
    ;
    bVar1 = (&DAT_000fbf60)[uVar3];
    DAT_00000079 = DAT_00000079 | 2;
    *(short *)((uint)bVar1 * 4 + 0x3c5e0) = (short)_DAT_00000082;
    *(short *)(((uint)bVar1 * 2 + 1) * 2 + 0x3c5e0) = (short)_DAT_00000088;
    busy_wait_on_mode_flag(10);
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 8);
  uVar3 = 0;
  do {
    *(uint16_t *)(uVar3 * 2 + 0x3c500) = *(uint16_t *)(uVar3 * 2 + 0x3c5e0);
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x10);
  return;
}
