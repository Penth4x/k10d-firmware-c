/* @k10d FUN_000e32ec @ 0x000e32ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e32ec(ushort param_1)

{
  write_masked_field_and_call_two_routines(0xf,_DAT_0003c012 & 7 | param_1);
  return;
}
