/* @k10d call_helper_on_field_c @ 0x10477f1e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 0xc of the object in param_1 and passes it to
 *   dispatch_param_by_type_10476604, returning the result.
 * summary:
 *   A one-line thunk that dereferences param_1 + 0xc and forwards that value as the sole
 *   argument to dispatch_param_by_type_10476604, returning whatever that callee returns. No
 *   other side effects are visible in this function. The role of
 *   dispatch_param_by_type_10476604 and the object layout are unknown, so no camera-
 *   subsystem term is applied.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_on_field_c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = dispatch_param_by_type_10476604(*(uint32_t *)(param_1 + 0xc), __frv_reg_unset(5), __frv_reg_unset(6));
  return uVar1;
}
