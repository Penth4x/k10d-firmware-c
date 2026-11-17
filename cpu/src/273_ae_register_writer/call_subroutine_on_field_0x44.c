/* @k10d call_subroutine_on_field_0x44 @ 0x1051567e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Passes the value at offset 0x44 of the object pointed to by param_1 to
 *   check_aperture_blade_state.
 * summary:
 *   This is a one-line wrapper that dereferences param_1 + 0x44 and passes that 32-bit
 *   value as the sole argument to check_aperture_blade_state. No other operations, side
 *   effects, or flags are visible. The role of the field and the callee is unknown, so no
 *   camera-specific term is applied.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_0x44(int param_1)

{
  check_aperture_blade_state(*(uint32_t *)(param_1 + 0x44));
  return;
}
