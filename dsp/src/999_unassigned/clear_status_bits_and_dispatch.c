/* @k10d clear_status_bits_and_dispatch @ 0x000e8680
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears specific bits in two global variables and calls a sequence of unverified helper
 *   functions.
 * summary:
 *   The function masks out bits 0 and 1 of DAT_0003c066 and bits 1 and 2 of DAT_0000000a.
 *   It interleaves these modifications with calls to FUN_000d5642 (with arguments 5 and
 *   0x32), write_byte_to_ram_and_call_two_routines, clear_flag_bits_in_globals_000d5a9e,
 *   and clear_status_flag_bytes_000e86ce. The specific roles of the global variables and
 *   callees are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_status_bits_and_dispatch(void)

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
  return;
}
