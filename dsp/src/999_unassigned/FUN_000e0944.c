/* @k10d FUN_000e0944 @ 0x000e0944
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e0944(void)

{
  if ((DAT_0003c008 & 0x80) != 0) {
    write_masked_field_and_call_two_routines(0x17,0xf0);
    write_masked_field_and_call_two_routines(0x17,0xc0);
    write_masked_field_and_call_two_routines(0x17,0);
  }
  write_masked_field_and_call_two_routines(7,DAT_0003c008 & 3);
  clear_and_set_flag_bits_000e00cc();
  return;
}
