/* @k10d call_helper_with_offset_and_flag_104efd36 @ 0x104efd36
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a value from param_1+0x10, constant 0x16, and a boolean derived
 *   from param_2.
 * summary:
 *   The function reads a 32-bit value from the memory location at param_1 + 0x10 and passes
 *   it as the first argument to write_object_field_byte. It also passes the constant 0x16
 *   and a boolean (true if param_2 is non-zero) as the second and third arguments,
 *   respectively. No other operations or side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_and_flag_104efd36(int param_1,int param_2)

{
  write_object_field_byte(*(uint32_t *)(param_1 + 0x10),0x16,param_2 != 0);
  return;
}
