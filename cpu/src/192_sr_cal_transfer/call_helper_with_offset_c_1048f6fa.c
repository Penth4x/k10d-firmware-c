/* @k10d call_helper_with_offset_c_1048f6fa @ 0x1048f6fa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at param_1+0xc to clamp_and_write_byte_field and returns.
 * summary:
 *   Single-instruction wrapper that dereferences the field at offset 0xc of the object
 *   pointed to by param_1 and forwards it as the sole argument to
 *   clamp_and_write_byte_field. No other side effects or state changes are visible in the
 *   pseudocode. The caller at 0x1052b7f2 invokes this wrapper, but the callee's role is
 *   unknown, so the camera subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_c_1048f6fa(int param_1, uint32_t param_x1)

{
  clamp_and_write_byte_field(*(uint32_t *)(param_1 + 0xc), __frv_reg_unset(5));
  return;
}
