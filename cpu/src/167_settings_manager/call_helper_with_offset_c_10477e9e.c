/* @k10d call_helper_with_offset_c_10477e9e @ 0x10477e9e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte value at param_1+0xc and passes it to check_flag_at_offset_8,
 *   returning the result.
 * summary:
 *   This is a one-line wrapper that dereferences the field at offset 0xc of the object
 *   pointed to by param_1 and forwards it as the sole argument to check_flag_at_offset_8.
 *   The return value of the callee is returned directly. No other side effects or globals
 *   are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_c_10477e9e(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = check_flag_at_offset_8(*(uint32_t *)(param_1 + 0xc),__frv_reg_unset(5),(int *)__frv_reg_unset(6));
  return uVar1;
}
