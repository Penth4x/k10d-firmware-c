/* @k10d call_helper_with_byte_and_ptr_1046751e @ 0x1046751e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 144_table_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Calls a helper passing param_1, a masked byte from DAT_105a7f90, and DAT_105a7f94.
 * summary:
 *   This function is a thin wrapper that forwards its single argument along with two
 *   globals to check_bit_in_indexed_byte. It masks the low byte of DAT_105a7f90 and passes
 *   DAT_105a7f94 as the third argument. No other operations or side effects are visible in
 *   this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_helper_with_byte_and_ptr_1046751e(uint32_t param_1)

{
  check_bit_in_indexed_byte(param_1,_DAT_105a7f90/*ROM*/ & 0xff,DAT_105a7f94/*ROM*/);
  return;
}
