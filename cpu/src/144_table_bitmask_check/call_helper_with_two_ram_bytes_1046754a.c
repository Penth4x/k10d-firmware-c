/* @k10d call_helper_with_two_ram_bytes_1046754a @ 0x1046754a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 144_table_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Calls test_bitmask_condition with param_1 and two byte values read from fixed RAM
 *   addresses.
 * summary:
 *   The function reads the low byte of uRam105a7f78 (masked with 0xff) and the byte at
 *   uRam105a7f7c, then passes them along with param_1 to test_bitmask_condition. It
 *   performs no other operations and returns immediately. The role of the RAM locations and
 *   the callee is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_ram_bytes_1046754a(uint32_t param_1)

{
  test_bitmask_condition(param_1,uRam105a7f78 & 0xff,uRam105a7f7c);
  return;
}
