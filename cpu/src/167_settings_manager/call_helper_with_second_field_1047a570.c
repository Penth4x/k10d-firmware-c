/* @k10d call_helper_with_second_field_1047a570 @ 0x1047a570
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte value at offset 4 of the object pointed to by param_1 and passes it to
 *   a helper function.
 * summary:
 *   This function acts as a thin wrapper or accessor. It dereferences the pointer in
 *   param_1, extracts the 32-bit value at offset +4, and passes it as the sole argument to
 *   check_division_result_within_limit. The return value of
 *   check_division_result_within_limit is returned directly to the caller. Without
 *   knowledge of check_division_result_within_limit's behavior, the specific subsystem role
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_second_field_1047a570(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = check_division_result_within_limit(*(uint32_t *)(param_1 + 4));
  return uVar1;
}
