/* @k10d call_helper_with_fixed_address_104d8dee @ 0x104d8dee
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls a helper function passing the second argument and a fixed constant address.
 * summary:
 *   The function takes two parameters and immediately calls append_string_to_buffer with
 *   the second parameter and the constant 0x105ba384. It is virtual method slot 11 of class
 *   cls_105ba1b8. The role of the callee and the constant address is not determinable from
 *   the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_address_104d8dee(uint32_t param_1,int *param_2)

{
  append_string_to_buffer(param_2,(void *)0x105ba384/*ROM*/);
  return;
}
