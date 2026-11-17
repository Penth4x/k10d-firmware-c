/* @k10d FUN_000ed7b6 @ 0x000ed7b6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000ed7b6(void)

{
  DAT_0003c207 = DAT_0003c007;
  write_masked_field_and_call_two_routines(6,0xf);
  write_masked_field_and_call_two_routines(0x15,DAT_0003c006 & 0xdf | 0x50);
  return;
}
