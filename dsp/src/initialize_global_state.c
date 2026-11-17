/* @k10d initialize_global_state @ 0x000e534c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes a large set of constant values to global data variables and calls two helper
 *   functions.
 * summary:
 *   The function sets numerous DAT_ globals to specific constants, including zeros and
 *   small integers. It calls initialize_ram_control_words and FUN_000e5524 early in the
 *   sequence. It conditionally calls clear_bit_flags_in_dat_block based on a bit in
 *   DAT_0003c066.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_global_state(void)

{
  DAT_00000481 = 0x11;
  DAT_00000486 = 1;
  DAT_00000487 = 0xf0;
  DAT_0000048a = 0;
  initialize_ram_control_words();
  FUN_000e5524();
  DAT_00000064 = 3;
  DAT_00000067 = 2;
  DAT_00000062 = 0xb2;
  DAT_00000060 = 0;
  DAT_00000072 = 0xb2;
  DAT_00000078 = 0;
  DAT_0000007a = 0x23;
  DAT_00000084 = 0;
  DAT_00000086 = 0x23;
  DAT_00000096 = 0;
  DAT_00000092 = 0;
  DAT_0000042d = 0;
  DAT_0000004e = 0;
  DAT_00000056 = 0;
  DAT_0000005e = 0;
  DAT_000000ce = 0;
  DAT_000000d7 = 0x10;
  DAT_000000db = 0x10;
  DAT_000000ee = 0;
  DAT_000000ec = 0;
  DAT_000000e3 = 0;
  if ((DAT_0003c05d & 0x40) == 0) {
    DAT_00000126 = 0;
    DAT_0000012e = 0;
    DAT_00000136 = 0;
  }
  DAT_0000013e = 0;
  DAT_00000146 = 0;
  if ((DAT_0003c066 & 1) == 0) {
    DAT_0000014e = 0;
  }
  DAT_00000118 = 0;
  DAT_0000011a = 0;
  DAT_0000013a = 0xc0;
  DAT_0000013c = 0x2f;
  DAT_000000b7 = 0;
  DAT_000000bb = 0;
  DAT_000000b0 = 0;
  DAT_000000b4 = 0;
  DAT_000000b8 = 0;
  DAT_00000042 = 0;
  DAT_000000d2 = 2;
  DAT_00000466 = 0x14;
  DAT_0000045d = 0x10;
  DAT_00000449 = 0x10;
  DAT_00000460 = 0x14;
  DAT_00000461 = 0x13;
  DAT_0000046e = 0x14;
  DAT_0000046b = 0x14;
  DAT_0000046c = 0x14;
  DAT_0000045a = 0x14;
  DAT_00000440 = 0x15;
  DAT_00000441 = 0x15;
  DAT_00000442 = 0x15;
  DAT_00000443 = 0x15;
  DAT_00000445 = 0x15;
  DAT_00000455 = 0x10;
  DAT_00000444 = 0x15;
  DAT_00000446 = 0x15;
  DAT_00000462 = 0x1f;
  DAT_00000463 = 0x1f;
  if ((DAT_0003c066 & 1) == 0) {
    clear_bit_flags_in_dat_block();
  }
  return;
}
