/* @k10d forward_param_and_two_bytes @ 0x10467560
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 144_table_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Forwards param_1 and two byte values from 0x105a7f80/0x105a7f84 to
 *   test_bitmask_condition.
 * summary:
 *   Reads the low byte of uRam105a7f80 (masked with 0xff) and the byte at uRam105a7f84,
 *   then calls test_bitmask_condition with param_1 and those two values. No other side
 *   effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_and_two_bytes(uint32_t param_1)

{
  test_bitmask_condition(param_1,uRam105a7f80 & 0xff,uRam105a7f84);
  return;
}
