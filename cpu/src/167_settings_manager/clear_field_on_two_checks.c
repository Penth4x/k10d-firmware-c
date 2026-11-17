/* @k10d clear_field_on_two_checks @ 0x1047ba14
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks two derived values from an object and clears a 4-byte field if both are non-
 *   zero.
 * summary:
 *   Reads a pointer at param_1+0x48 and passes it to check_six_char_pattern. If the result
 *   is non-zero, it calls call_two_helpers_and_combine with a value from param_1+0x54 and a
 *   double-dereferenced value from param_1+0x70. If that second call also returns non-zero,
 *   it writes 0 to the 4-byte field at param_1+0x34. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_field_on_two_checks(int param_1)

{
  int iVar1;
  
  iVar1 = check_six_char_pattern((void *)(param_1 + 0x48));
  if ((iVar1 != 0) &&
     (iVar1 = call_two_helpers_and_combine(*(int *)(param_1 + 0x54),
                           **(uint32_t **)(*(int *)(param_1 + 0x70) + 0xc)), iVar1 != 0)) {
    *(uint32_t *)(param_1 + 0x34) = 0;
  }
  return;
}
