/* @k10d call_subroutine_with_offset_c_1047669c @ 0x1047669c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from param_1+0xc and passes it as the sole argument to
 *   get_cached_value_by_key, returning the result.
 * summary:
 *   This is a thin wrapper that dereferences the field at offset 0xc of the object pointed
 *   to by param_1 and forwards it to the callee get_cached_value_by_key. The return value
 *   of the callee is passed directly back to the caller. No other side effects or globals
 *   are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_with_offset_c_1047669c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_cached_value_by_key(*(uint32_t *)(param_1 + 0xc), __frv_reg_unset(5));
  return uVar1;
}
