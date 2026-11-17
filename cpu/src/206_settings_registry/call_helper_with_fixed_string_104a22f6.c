/* @k10d call_helper_with_fixed_string_104a22f6 @ 0x104a22f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls a helper with param_2, a fixed ROM address, and the constant 1.
 * summary:
 *   The function forwards its first argument to copy_bytes_to_struct_field along with the
 *   fixed pointer 0x105b5abd and the integer 1. It performs no other operations and returns
 *   immediately. The role of the callee and the fixed string is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_string_104a22f6(uint32_t param_1,int param_2)

{
  copy_bytes_to_struct_field(param_2,(void *)0x105b5abd/*ROM*/,1);
  return;
}
