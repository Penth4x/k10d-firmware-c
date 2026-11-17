/* @k10d init_struct_with_offset_field_10395fe8 @ 0x10395fe8
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an initializer then sets a field at offset 0xb8 of the given struct to
 *   0xffffffff.
 * summary:
 *   Takes a pointer param_1, calls call_two_helpers_and_return_second with no arguments,
 *   then calls forward_params_via_helper_1039462c passing param_1, a pointer to
 *   param_1+0xb8, and the constant 0xffffffff. The second call appears to write or
 *   initialize the field at offset 0xb8. No camera-specific behavior is evident from the
 *   pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_offset_field_10395fe8(void *param_1)

{
  call_two_helpers_and_return_second();
  forward_params_via_helper_1039462c(param_1,(void *)((int)param_1 + 0xb8),0xffffffff);
  return;
}
