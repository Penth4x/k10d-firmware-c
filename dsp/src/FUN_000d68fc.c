/* @k10d FUN_000d68fc @ 0x000d68fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d68fc(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (_DAT_0003c328 != 0) {
    iVar2 = 4;
    do {
      FUN_000f2782(_DAT_0003c324 + uVar1 & 0xffff,(&DAT_0003c284)[iVar2]);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (uVar1 < _DAT_0003c328);
  }
  set_ram_flags_and_counters();
  return;
}
