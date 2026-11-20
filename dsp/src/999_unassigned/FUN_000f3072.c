/* @k10d FUN_000f3072 @ 0x000f3072
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f3072(void)

{
  write_masked_field_and_call_two_routines(7,DAT_0003c008 | 0xc);
  DAT_00000403 = DAT_00000403 & 0xef;
  DAT_00000503 = DAT_00000503 | 0x10;
  write_masked_field_and_call_two_routines(0x17,0xf0);
  if ((DAT_00000484 & 3) == 2) {
    busy_wait_on_mode_flag(0x41);
  }
  FUN_000e32ec(8);
  write_masked_field_and_call_two_routines(0x17,0xe0);
  busy_wait_on_mode_flag(0x14);
  write_masked_field_and_call_two_routines(0x17,0xf0);
  update_ram_byte_bits(0x1f);
  write_ram_config_bytes();
  return;
}
