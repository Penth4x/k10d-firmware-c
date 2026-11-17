/* @k10d FUN_000d9e2c @ 0x000d9e2c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d9e2c(void)

{
  DAT_0003c589 = DAT_0003c589 & 0xfe;
  DAT_0003c588 = DAT_0003c588 & 0xf7;
  FUN_000da752();
  if ((DAT_0003c193 & 1) == 0) {
    DAT_0003c18d = 0;
    DAT_0003c18e = 0;
    DAT_0003c18f = 0;
    DAT_0003c190 = 0;
    DAT_0003c191 = 0;
    DAT_00000420 = 0;
    write_nibble_to_ram_region(4);
    if ((DAT_0003c004 & 2) == 0) {
      _DAT_0003c57a = 0;
    }
    else {
      wait_for_flag_and_set_bits();
    }
  }
  else {
    busy_wait_on_mode_flag(0x1b2);
    reset_and_update_status_flags();
  }
  set_flag_bits_and_clear_counters();
  return;
}
