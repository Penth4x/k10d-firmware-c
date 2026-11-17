/* @k10d call_helper_with_byte_and_ptr_10467534 @ 0x10467534
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 144_table_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Calls a helper passing param_1, a masked byte from DAT_105a7f98, and DAT_105a7f9c.
 * summary:
 *   This function is a thin wrapper that invokes check_bit_in_indexed_byte with three
 *   arguments: the input parameter, the low byte of the global DAT_105a7f98, and the global
 *   DAT_105a7f9c. It performs no other operations and returns void. The specific role of
 *   the callee and the globals is not determinable from this snippet alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_helper_with_byte_and_ptr_10467534(uint32_t param_1)

{
  check_bit_in_indexed_byte(param_1,_DAT_105a7f98/*ROM*/ & 0xff,DAT_105a7f9c/*ROM*/);
  return;
}
