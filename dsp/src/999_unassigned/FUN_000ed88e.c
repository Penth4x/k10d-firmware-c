/* @k10d FUN_000ed88e @ 0x000ed88e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000ed88e(void)

{
  DAT_0003c00d = DAT_0003c00d & 0xf4;
  write_masked_field_and_call_two_routines(0xc,DAT_0003c00d | 8);
  return;
}
