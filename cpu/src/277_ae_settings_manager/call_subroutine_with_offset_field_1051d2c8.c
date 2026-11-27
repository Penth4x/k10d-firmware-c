/* @k10d call_subroutine_with_offset_field_1051d2c8 @ 0x1051d2c8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte value at param_1+4 and passes it as the sole argument to
 *   branch_on_param_two_and_call_helpers.
 * summary:
 *   The function dereferences the second word of the object pointed to by param_1 and
 *   forwards it to the callee branch_on_param_two_and_call_helpers. No other operations,
 *   flags, or globals are touched. The role of the callee is unknown, so the subsystem
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_field_1051d2c8(int param_1, uint32_t param_2)
{
  branch_on_param_two_and_call_helpers(*(uint32_t *)(param_1 + 4), (uint32_t)param_2);
  return;
}
