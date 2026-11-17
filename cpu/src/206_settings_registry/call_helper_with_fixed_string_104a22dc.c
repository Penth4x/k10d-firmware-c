/* @k10d call_helper_with_fixed_string_104a22dc @ 0x104a22dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls a helper with param_2, a fixed ROM address, and the constant 1.
 * summary:
 *   The function forwards its first argument (param_2) and a hardcoded pointer to
 *   0x105b5abc (within the ROM region) to copy_bytes_to_struct_field, passing 1 as the
 *   third argument. It does not use param_1. The specific role of the helper and the data
 *   at the fixed address are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_string_104a22dc(uint32_t param_1,int param_2)

{
  copy_bytes_to_struct_field(param_2,(void *)0x105b5abc/*ROM*/,1);
  return;
}
