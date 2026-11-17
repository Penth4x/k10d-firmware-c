/* @k10d FUN_000cdaa4 @ 0x000cdaa4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_000cdaa4(void)

{
  FUN_000d0eea();
  DAT_0003ce63 = 0;
  DAT_0003ce62 = DAT_0003ce62 & 0xf7;
  _DAT_0003ce2c = 0;
  FUN_000cd58c();
  DAT_0003ce01 = DAT_0003ce01 & 0x8a;
  DAT_0003ce02 = DAT_0003ce02 & 0xb3;
  dispatch_on_bit_flag();
  clear_byte_array_fields();
  FUN_000d19f0();
  extract_nibble_from_byte();
  DAT_0003ce10 = 1;
  return 1;
}
