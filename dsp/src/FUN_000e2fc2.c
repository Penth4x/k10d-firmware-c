/* @k10d FUN_000e2fc2 @ 0x000e2fc2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char FUN_000e2fc2(int param_1)

{
  uint8_t uVar1;
  byte bVar2;
  char cVar3;
  
  uVar1 = DAT_00000420;
  cVar3 = '\0';
  if (param_1 < 5) {
    DAT_00000420 = 0;
    bRam00000000 = bRam00000000 & 0xe0 | (byte)param_1;
    toggle_ram_flag_bit5();
    DAT_00000400 = DAT_00000400 & 0xf0;
    bRam00000000 = bRam00000000 & 0xbf;
    empty_stub_000e33c4();
    bVar2 = bRam00000000 & 0xf;
    bRam00000000 = bRam00000000 | 0x10;
    empty_stub_000e33c4();
    cVar3 = bVar2 + bRam00000000 * '\x10';
    bRam00000000 = bRam00000000 | 0x40;
    DAT_00000400 = DAT_00000400 | 0xf;
    *(char *)(param_1 + 0x3c000) = cVar3;
  }
  DAT_00000420 = uVar1;
  return cVar3;
}
