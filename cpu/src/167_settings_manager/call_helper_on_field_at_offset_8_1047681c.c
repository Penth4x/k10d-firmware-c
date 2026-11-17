/* @k10d call_helper_on_field_at_offset_8_1047681c @ 0x1047681c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 8 of the object in param_1 and passes it to
 *   get_value_from_struct_field, returning the result.
 * summary:
 *   This is a one-line wrapper: it dereferences *(param_1 + 8) and forwards that value as
 *   the sole argument to get_value_from_struct_field, returning whatever that callee
 *   returns in r4. No other side effects, no globals touched, no camera-specific behavior
 *   visible in this function itself. The role of get_value_from_struct_field is unknown, so
 *   the wrapper's semantic role cannot be determined beyond this mechanical forwarding.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_on_field_at_offset_8_1047681c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = get_value_from_struct_field(*(uint32_t *)(param_1 + 8), __frv_reg_unset(5));
  return uVar1;
}
