/* @k10d forward_byte_with_flag @ 0x000e39c6
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Forwards a byte to write_byte_to_ram_and_call_two_routines with bit 1 forced from
 *   DAT_0003c00a.
 * summary:
 *   Takes a byte, clears bit 1, ORs it with bit 1 of DAT_0003c00a, and passes the result as
 *   the second argument to write_byte_to_ram_and_call_two_routines with a constant first
 *   argument of 9. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_byte_with_flag(byte param_1)

{
  write_byte_to_ram_and_call_two_routines(9,param_1 & 0xfd | DAT_0003c00a & 2);
  return;
}
