/* @k10d FUN_000c28e2 @ 0x000c28e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint FUN_000c28e2(uint param_1)

{
  int iVar1;
  
  iVar1 = multiply_two_integers((&DAT_000f9b03)[param_1 & 7],1 << ((byte)((int)param_1 >> 3) & 0xf));
  return iVar1 + 0x40U >> 7;
}
