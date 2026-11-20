/* @k10d FUN_000da752 @ 0x000da752
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000da752(void)

{
  DAT_00000400 = DAT_00000400 | 0x77;
  write_masked_field_and_call_two_routines(0xb,2);
  busy_wait_on_mode_flag(0x55);
  write_nibble_to_ram_region(4);
  DAT_0003c193 = DAT_0003c193 & 0xfe;
  if ((DAT_0003c004 & 4) == 0) {
    DAT_0003c193 = DAT_0003c193 | 1;
    call_e31d6_with_masked_dat();
  }
  return;
}
