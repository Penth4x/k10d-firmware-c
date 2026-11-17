/* @k10d call_helper_with_fixed_address_104dd3fe @ 0x104dd3fe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the second argument and a fixed 32-bit constant.
 * summary:
 *   The function takes two parameters and immediately calls append_string_to_buffer,
 *   passing param_2 and the constant 0x105bae8c. It returns void. The constant 0x105bae8c
 *   is a ROM address, likely a data structure or string pointer, but its specific role is
 *   not determinable from this snippet alone. As virtual slot 47 of cls_105ba1b8, it likely
 *   performs a specific state transition or query defined by the class, but the exact
 *   camera subsystem is not identifiable from the single call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_address_104dd3fe(uint32_t param_1,int *param_2)

{
  append_string_to_buffer(param_2,(void *)0x105bae8c/*ROM*/);
  return;
}
