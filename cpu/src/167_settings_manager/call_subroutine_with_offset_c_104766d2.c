/* @k10d call_subroutine_with_offset_c_104766d2 @ 0x104766d2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at param_1+0xc to invoke_object_method_and_update and returns.
 * summary:
 *   Single-instruction wrapper that dereferences the field at offset 0xc of the object
 *   pointed to by param_1 and forwards it as the sole argument to
 *   invoke_object_method_and_update. No other side effects or state changes are visible in
 *   this function. The caller is process_event_with_retry_10473fae.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_c_104766d2(int param_1, uint32_t param_x1)

{
  invoke_object_method_and_update(*(uint32_t *)(param_1 + 0xc), __frv_reg_unset(5));
  return;
}
