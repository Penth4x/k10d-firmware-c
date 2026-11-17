/* @k10d call_helper_with_byte_and_ptr_10467508 @ 0x10467508
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 144_table_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Calls a helper passing param_1, a masked byte from DAT_105a7f88, and DAT_105a7f8c.
 * summary:
 *   The function forwards its single argument to check_bit_in_indexed_byte along with the
 *   low byte of DAT_105a7f88 and the value at DAT_105a7f8c. It performs no other operations
 *   and returns void. The roles of the globals and the callee are not determinable from
 *   this snippet alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_helper_with_byte_and_ptr_10467508(uint32_t param_1)

{
  check_bit_in_indexed_byte(param_1,_DAT_105a7f88/*ROM*/ & 0xff,DAT_105a7f8c/*ROM*/);
  return;
}
