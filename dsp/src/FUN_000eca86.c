/* @k10d FUN_000eca86 @ 0x000eca86
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_000eca86(void)

{
  uint32_t uVar1;
  
  uVar1 = 4;
  if ((DAT_0003c003 & 0x10) != 0) {
    DAT_0003c1ea = DAT_0003c1ea & 0xfe;
    DAT_0003c02f = DAT_0003c02f & 0xfe;
    DAT_0003c00b = DAT_0003c00b | 0x80;
    write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
    busy_wait_on_mode_flag(0x1e);
    accumulate_ten_sample_values_000ece5c();
    DAT_0003c00b = DAT_0003c00b & 0x7f;
    write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
    DAT_0003c02d = (byte)_DAT_0003c210;
    DAT_0003c250 = DAT_0003c02d;
    if (DAT_0003c02d < DAT_0003c23f) {
      uVar1 = 1;
      DAT_0003c1ea = DAT_0003c1ea | 1;
      DAT_0003c02f = DAT_0003c02f & 0xf1 | 1;
    }
  }
  return uVar1;
}
