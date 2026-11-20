/* @k10d FUN_000c33be @ 0x000c33be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int FUN_000c33be(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(param_1 + 0x3f330) - (uint)(byte)(&DAT_000f9d78)[param_1];
  iVar1 = divide_two_integers(iVar2,3);
  return (iVar2 + iVar1 * -3) / 2 + iVar1;
}
