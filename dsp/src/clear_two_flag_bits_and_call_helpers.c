/* @k10d clear_two_flag_bits_and_call_helpers @ 0x000e862a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears specific bits in two global byte variables and calls a sequence of helper
 *   functions with constant arguments.
 * summary:
 *   The function masks off bits 1 and 0 of DAT_0003c066 and bits 2 and 1 of DAT_0000000a.
 *   It interleaves these bit-clearing operations with calls to FUN_000d5642 (with arguments
 *   5, 0x32, and 10), write_byte_to_ram_and_call_two_routines,
 *   clear_flag_bits_in_globals_000d5a9e, and clear_status_flag_bytes_000e86ce. The specific
 *   roles of the global variables and helper functions are not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_two_flag_bits_and_call_helpers(void)

{
  DAT_0003c066 = DAT_0003c066 & 0xfc;
  DAT_0000000a = DAT_0000000a & 0xfd;
  FUN_000d5642(5);
  DAT_0000000a = DAT_0000000a & 0xfb;
  FUN_000d5642(0x32);
  DAT_0003c00b = DAT_0003c00b & 0xbf;
  write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
  FUN_000d5642(5);
  clear_flag_bits_in_globals_000d5a9e();
  clear_status_flag_bytes_000e86ce();
  FUN_000d5642(10);
  return;
}
