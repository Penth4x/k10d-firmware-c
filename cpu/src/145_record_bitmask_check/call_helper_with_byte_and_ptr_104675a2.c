/* @k10d call_helper_with_byte_and_ptr_104675a2 @ 0x104675a2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 145_record_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Calls test_bitmask_condition with param_1, a low byte of DAT_105a7f98, and
 *   DAT_105a7f9c, returning the result.
 * summary:
 *   This is a thin wrapper that forwards its single argument plus two globals (a masked
 *   byte and a pointer) to test_bitmask_condition and returns that callee's return value.
 *   No other logic, loops, or side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t call_helper_with_byte_and_ptr_104675a2(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = test_bitmask_condition(param_1,_DAT_105a7f98/*ROM*/ & 0xff,DAT_105a7f9c/*ROM*/);
  return uVar1;
}
