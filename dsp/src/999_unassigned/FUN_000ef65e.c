/* @k10d FUN_000ef65e @ 0x000ef65e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ef65e(void)

{
  uint32_t uVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = DAT_00000401;
  uVar1 = _DAT_00000001;
  DAT_00000401 = DAT_00000401 | 3;
  bVar3 = 0;
  do {
    toggle_status_flags_based_on_read();
    bVar3 = bVar3 + 1;
  } while (bVar3 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    toggle_status_flags_based_on_read();
  }
  while ((DAT_00000005 & 4) != 0) {
    toggle_status_flags_based_on_read();
  }
  DAT_00000401 = bVar2;
  _DAT_00000001 = CONCAT13((char)uVar1,(undefined3)_DAT_00000001);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
