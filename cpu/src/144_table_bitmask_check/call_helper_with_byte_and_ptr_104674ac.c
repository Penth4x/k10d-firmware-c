/* @k10d call_helper_with_byte_and_ptr_104674ac @ 0x104674ac
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 144_table_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Calls a helper passing param_1, a masked byte from a global, and another global
 *   pointer.
 * summary:
 *   The function extracts the low byte of DAT_105a7f68, ANDs it with 0xff, and passes it
 *   along with param_1 and DAT_105a7f6c to check_bit_in_indexed_byte. It acts as a thin
 *   wrapper that prepares specific arguments from global state before delegating to the
 *   callee. No other operations or side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_helper_with_byte_and_ptr_104674ac(uint32_t param_1)

{
  check_bit_in_indexed_byte(param_1,_DAT_105a7f68/*ROM*/ & 0xff,DAT_105a7f6c/*ROM*/);
  return;
}
