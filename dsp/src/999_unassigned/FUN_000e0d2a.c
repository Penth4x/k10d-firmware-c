/* @k10d FUN_000e0d2a @ 0x000e0d2a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e0d2a(void)

{
  set_ram_flags_and_counters();
  call_subroutine_with_100();
  if ((DAT_00000484 & 3) == 2) {
    call_subroutine_with_100();
  }
  write_masked_field_and_call_two_routines(0x17,0xf0);
  if ((DAT_00000484 & 3) == 2) {
    busy_wait_on_mode_flag(0x24);
  }
  write_masked_field_and_call_two_routines(0x17,0xe0);
  FUN_000e32ec(8);
  update_ram_byte_bits(0x1f);
  DAT_00000400 = DAT_00000400 & 0xfe;
  bRam00000000 = bRam00000000 & 0xbf;
  return;
}
