/* @k10d forward_param2_and_struct_field @ 0x104a5956
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Passes param_2 and a 16-bit field from a struct pointed to by param_1+0x60 to a helper.
 * summary:
 *   The function dereferences the pointer at offset 0x60 of the object in param_1, then
 *   reads the 16-bit value at offset 0x22 of that sub-object. It calls
 *   write_word_to_dynamic_array with param_2, 0, and this 16-bit value. No other operations
 *   are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param2_and_struct_field(int param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,*(uint16_t *)(*(int *)(param_1 + 0x60) + 0x22));
  return;
}
