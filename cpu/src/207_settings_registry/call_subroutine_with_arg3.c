/* @k10d call_subroutine_with_arg3 @ 0x104aa09a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls extract_bitfield_from_table with param_1 and constant 3, returning its result.
 * summary:
 *   This is a thin wrapper that forwards its single argument to extract_bitfield_from_table
 *   along with the constant 3. The return value of the callee is passed directly back to
 *   the caller. No other side effects or state modifications are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_arg3(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = extract_bitfield_from_table(param_1,3);
  return uVar1;
}
