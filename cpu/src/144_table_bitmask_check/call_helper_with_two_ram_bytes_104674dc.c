/* @k10d call_helper_with_two_ram_bytes_104674dc @ 0x104674dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 144_table_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Reads two bytes from fixed RAM addresses and passes them with param_1 to a single
 *   callee.
 * summary:
 *   The function extracts the low byte of uRam105a7f78 and the byte at uRam105a7f7c, then
 *   calls check_bit_in_indexed_byte with param_1 and those two values. No other operations
 *   or side effects are visible. The role of the callee and the RAM locations is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_ram_bytes_104674dc(uint32_t param_1)

{
  check_bit_in_indexed_byte(param_1,uRam105a7f78 & 0xff,uRam105a7f7c);
  return;
}
