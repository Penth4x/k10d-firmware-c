/* @k10d call_helper_with_fixed_address_104a2072 @ 0x104a2072
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a helper function with a second argument of a fixed ROM address and a third
 *   argument of 4.
 * summary:
 *   The function takes two parameters and calls copy_bytes_to_struct_field, passing the
 *   second parameter, the constant address 0x105b5aac, and the integer 4. It then returns
 *   immediately. The specific role of the helper and the data at the fixed address are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_address_104a2072(uint32_t param_1,int param_2)

{
  copy_bytes_to_struct_field(param_2,(void *)0x105b5aac/*ROM*/,4);
  return;
}
