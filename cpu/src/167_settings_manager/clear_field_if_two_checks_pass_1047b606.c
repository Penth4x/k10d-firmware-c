/* @k10d clear_field_if_two_checks_pass_1047b606 @ 0x1047b606
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks two derived values from an object and clears a 4-byte field if both are non-
 *   zero.
 * summary:
 *   The function calls check_six_char_pattern with the value at offset 0x48 of the object
 *   passed in param_1. If that result is non-zero, it calls
 *   call_with_offset_c_field_10477e7a with the value at offset 0x50. If the second call
 *   also returns non-zero, it writes 0 to the 4-byte field at offset 0x34 of the object.
 *   The specific roles of the object and the two callee functions are not determinable from
 *   the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_field_if_two_checks_pass_1047b606(int param_1)

{
  int iVar1;
  
  iVar1 = check_six_char_pattern((void *)(param_1 + 0x48));
  if ((iVar1 != 0) && (iVar1 = call_with_offset_c_field_10477e7a(*(int *)(param_1 + 0x50)), iVar1 != 0)) {
    *(uint32_t *)(param_1 + 0x34) = 0;
  }
  return;
}
