/* @k10d call_helper_with_byte_and_ptr_1046758c @ 0x1046758c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 145_record_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Calls test_bitmask_condition with param_1, a low byte of DAT_105a7f90, and
 *   DAT_105a7f94, returning the result.
 * summary:
 *   This function is a thin wrapper that forwards its single argument to
 *   test_bitmask_condition along with two global values: the low byte of DAT_105a7f90 and
 *   the value of DAT_105a7f94. It returns the result of that call directly. The specific
 *   role of the callee and the globals is not determinable from this pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t call_helper_with_byte_and_ptr_1046758c(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = test_bitmask_condition(param_1,_DAT_105a7f90/*ROM*/ & 0xff,DAT_105a7f94/*ROM*/);
  return uVar1;
}
