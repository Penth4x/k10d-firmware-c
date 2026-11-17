/* @k10d call_helper_with_byte_and_ptr_10467576 @ 0x10467576
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 145_record_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Calls test_bitmask_condition with param_1, a low byte of DAT_105a7f88, and
 *   DAT_105a7f8c, returning the result.
 * summary:
 *   This is a thin wrapper that forwards its single argument plus two globals (a masked
 *   byte and a pointer/value) to test_bitmask_condition and returns that callee's return
 *   value unchanged. No other logic, loops, or side effects are visible in this function
 *   itself. The role of the underlying operation depends entirely on
 *   test_bitmask_condition, which is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t call_helper_with_byte_and_ptr_10467576(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = test_bitmask_condition(param_1,_DAT_105a7f88/*ROM*/ & 0xff,DAT_105a7f8c/*ROM*/);
  return uVar1;
}
