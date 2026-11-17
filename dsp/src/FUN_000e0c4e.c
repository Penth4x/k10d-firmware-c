/* @k10d FUN_000e0c4e @ 0x000e0c4e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e0c4e(void)

{
  write_masked_field_and_call_two_routines(7,DAT_0003c008 & 3);
  clear_and_set_flag_bits_000e00cc();
  return;
}
