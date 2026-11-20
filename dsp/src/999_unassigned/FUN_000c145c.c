/* @k10d FUN_000c145c @ 0x000c145c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c145c(void)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  
  uVar4 = (uint)_DAT_0003c5a0;
  uVar1 = (ushort)DAT_0003c568;
  sVar2 = compute_buffer_overflow_delta();
  sVar3 = read_shifted_status_field();
  _DAT_0003c562 = ((short)(uVar4 + 2 >> 2) + uVar1 + sVar2) - sVar3;
  return;
}
