/* @k10d FUN_000ed26e @ 0x000ed26e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ed26e(void)

{
  DAT_0003c00b = DAT_0003c00b | 1;
  write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
  busy_wait_on_mode_flag(10);
  accumulate_ten_sample_values_000ece5c();
  DAT_0003c02d = (uint8_t)_DAT_0003c210;
  DAT_0003c00b = DAT_0003c00b & 0xfe;
  write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
  return;
}
