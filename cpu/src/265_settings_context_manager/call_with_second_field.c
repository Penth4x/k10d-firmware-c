/* @k10d call_with_second_field @ 0x105017d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Extracts the second int field of a struct and passes it to a helper, returning the
 *   helper's result.
 * summary:
 *   The function reads the 32-bit value at offset 4 of the object pointed to by param_1 and
 *   passes it as the sole argument to check_transaction_context_flag. It returns whatever
 *   check_transaction_context_flag returns. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_with_second_field(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = check_transaction_context_flag(*(int *)(param_1 + 4));
  return uVar1;
}
