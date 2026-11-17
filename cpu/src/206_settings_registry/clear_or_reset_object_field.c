/* @k10d clear_or_reset_object_field @ 0x104a8cca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Resets a field at offset 8 if the pointer at offset 0xc is null, otherwise calls a
 *   helper with that pointer and the value at offset 4.
 * summary:
 *   The function checks if the pointer stored at param_1 + 0xc is NULL. If it is, it writes
 *   0 to the field at param_1 + 8. If not, it calls fill_byte_array with the pointer at
 *   param_1 + 0xc, the constant 0, and the integer value at param_1 + 4. The role of
 *   fill_byte_array is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_or_reset_object_field(int param_1)

{
  if (*(void **)(param_1 + 0xc) == (void *)0x0) {
    *(uint32_t *)(param_1 + 8) = 0;
  }
  else {
    fill_byte_array(*(void **)(param_1 + 0xc),0,*(int *)(param_1 + 4));
  }
  return;
}
