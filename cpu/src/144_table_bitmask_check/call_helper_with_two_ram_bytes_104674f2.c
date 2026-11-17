/* @k10d call_helper_with_two_ram_bytes_104674f2 @ 0x104674f2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 144_table_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Reads two bytes from fixed RAM addresses and passes them with param_1 to a single
 *   helper.
 * summary:
 *   The function loads uRam105a7f80 masked to 8 bits and uRam105a7f84, then calls
 *   check_bit_in_indexed_byte with param_1 and those two values. No other side effects are
 *   visible in this function. The role of the RAM bytes and the callee is not determinable
 *   from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_ram_bytes_104674f2(uint32_t param_1)

{
  check_bit_in_indexed_byte(param_1,uRam105a7f80 & 0xff,uRam105a7f84);
  return;
}
