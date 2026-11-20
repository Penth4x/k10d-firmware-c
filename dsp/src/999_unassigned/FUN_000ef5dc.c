/* @k10d FUN_000ef5dc @ 0x000ef5dc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000ef5dc(void)

{
  DAT_0003c00c = 7;
  write_masked_field_and_call_two_routines(0xb,7);
  DAT_0003c006 = DAT_0003c006 & 0x8f | 0x50;
  write_masked_field_and_call_two_routines(0x15,DAT_0003c006);
  busy_wait_on_mode_flag(0x1db);
  DAT_0003c00c = 0xd;
  write_masked_field_and_call_two_routines(0xb,0xd);
  DAT_0003c006 = DAT_0003c006 & 0x8f | 0xa0;
  write_masked_field_and_call_two_routines(0x15,DAT_0003c006);
  busy_wait_on_mode_flag(0x1db);
  return;
}
