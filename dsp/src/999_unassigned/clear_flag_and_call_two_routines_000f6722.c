/* @k10d clear_flag_and_call_two_routines_000f6722 @ 0x000f6722
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 3 of DAT_0003c4bf and calls or_bytes_into_four_globals_000f6ad6 twice with
 *   fixed argument sets.
 * summary:
 *   The function performs a bitwise AND with 0xf7 on the global DAT_0003c4bf, clearing bit
 *   3. It then invokes or_bytes_into_four_globals_000f6ad6 twice: first with arguments
 *   (0x10, 0x10, 0x20, 0x30) and second with (0xc0, 0xc0, 0, 0x40). The role of
 *   DAT_0003c4bf and or_bytes_into_four_globals_000f6ad6 is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_two_routines_000f6722(void)

{
  DAT_0003c4bf = DAT_0003c4bf & 0xf7;
  or_bytes_into_four_globals_000f6ad6(0x10,0x10,0x20,0x30);
  or_bytes_into_four_globals_000f6ad6(0xc0,0xc0,0,0x40);
  return;
}
