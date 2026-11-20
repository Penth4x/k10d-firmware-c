/* @k10d poll_and_store_byte_stream @ 0x000d7000
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Waits for a status flag, then reads a byte from a register and optionally copies a
 *   0x1bfe-byte buffer.
 * summary:
 *   The function polls DAT_00000005 and _DAT_00000001 for specific bit conditions. If a
 *   condition is met, it updates a flag in DAT_0003c030 and calls FUN_000d5fbe. Otherwise,
 *   it waits for DAT_00000005 bit 0, calls initialize_several_globals, and reads a byte
 *   from _DAT_000000c1 into DAT_0003c31a. If that byte is 0xf1, it loops 0x1bfe times,
 *   reading bytes from _DAT_000000c1 and writing them to memory at 0x3d000.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int poll_and_store_byte_stream(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if ((DAT_00000005 & 2) != 0) goto LAB_000d7044;
  } while ((_DAT_00000001 & 0x4000000) == 0);
  if ((_DAT_00000001 & 7) >> 2 == 0) {
    DAT_0003c030 = DAT_0003c030 & 0xfb;
  }
  else {
    DAT_0003c030 = DAT_0003c030 | 4;
  }
  FUN_000d5fbe();
  iVar2 = 1;
LAB_000d7044:
  if (iVar2 == 0) {
    DAT_000000d1 = DAT_000000d1 & 0xfe;
    DAT_0000000a = DAT_0000000a | 0x80;
    do {
    } while ((DAT_00000005 & 1) == 0);
    initialize_several_globals();
    _DAT_000000c1 = _DAT_000000c1 & 0xffffff;
    DAT_0000000a = DAT_0000000a & 0xbf;
    do {
    } while ((DAT_000000c0 & 0x10) == 0);
    DAT_0003c31a = (char)_DAT_000000c1;
    do {
    } while ((DAT_00000005 & 1) != 0);
    if (DAT_0003c31a == -0xf) {
      uVar1 = 0;
      do {
        do {
        } while ((DAT_00000005 & 1) == 0);
        _DAT_000000c1 = _DAT_000000c1 & 0xffffff;
        DAT_0000000a = DAT_0000000a & 0xbf;
        do {
        } while ((DAT_000000c0 & 0x10) == 0);
        *(char *)(uVar1 + 0x3d000) = (char)_DAT_000000c1;
        do {
        } while ((DAT_00000005 & 1) != 0);
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0x1bfe);
    }
  }
  return iVar2;
}
