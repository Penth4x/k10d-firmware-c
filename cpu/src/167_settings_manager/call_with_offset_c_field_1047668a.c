/* @k10d call_with_offset_c_field_1047668a @ 0x1047668a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 0xc of the object in param_1 and passes it to
 *   lookup_value_by_key, returning the result.
 * summary:
 *   A one-line thunk that dereferences param_1 + 0xc and forwards that value as the sole
 *   argument to lookup_value_by_key. The return value of lookup_value_by_key is returned
 *   directly to the caller. No other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_with_offset_c_field_1047668a(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = lookup_value_by_key(*(uint32_t *)(param_1 + 0xc), __frv_reg_unset(5));
  return uVar1;
}
