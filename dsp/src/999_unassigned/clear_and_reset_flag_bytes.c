/* @k10d clear_and_reset_flag_bytes @ 0x000e5eea
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Clears specific bits in several global flag bytes, zeroes a small block of globals, and
 *   sets two bytes to 0x80.
 * summary:
 *   The function performs bitwise AND/OR operations on multiple DAT_000000xx and
 *   DAT_0003c0xx globals to clear or set individual bits, then zeroes four consecutive
 *   bytes at 0x0003c043-0x0003c04f. It calls call_d5678_with_0x14 and
 *   busy_wait_on_mode_flag twice with arguments 100 and 300, whose roles are unknown.
 *   Finally it sets DAT_000000b7 and DAT_000000bb to 0x80 and clears DAT_000000b4 and
 *   DAT_000000b8. The specific meaning of these globals is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_and_reset_flag_bytes(void)

{
  DAT_000000b7 = DAT_000000b7 & 0x7f;
  DAT_000000bb = DAT_000000bb & 0x7f;
  DAT_000000b5 = DAT_000000b5 & 0xf7;
  DAT_000000b9 = DAT_000000b9 & 0xf7;
  DAT_0003c021 = DAT_0003c021 & 0xdf;
  DAT_0003c043 = 0;
  DAT_0003c044 = 0;
  DAT_0003c04e = 0;
  DAT_0003c04f = 0;
  DAT_00000403 = DAT_00000403 & 0x93;
  DAT_00000503 = DAT_00000503 | 0x6c;
  call_d5678_with_0x14();
  busy_wait_on_mode_flag(100);
  busy_wait_on_mode_flag(300);
  DAT_000000b4 = 0;
  DAT_000000b7 = 0x80;
  DAT_000000b8 = 0;
  DAT_000000bb = 0x80;
  return;
}
