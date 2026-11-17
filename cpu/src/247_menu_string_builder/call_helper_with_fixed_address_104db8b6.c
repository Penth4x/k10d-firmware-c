/* @k10d call_helper_with_fixed_address_104db8b6 @ 0x104db8b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function passing the second argument and a fixed ROM address
 *   constant.
 * summary:
 *   The function takes two parameters and immediately calls append_string_to_buffer with
 *   param_2 and the constant 0x105baae0. It is a virtual method (slot 31) of class
 *   cls_105ba1b8. The specific role of the helper and the constant is not determinable from
 *   this pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_address_104db8b6(uint32_t param_1,int *param_2)

{
  append_string_to_buffer(param_2,(void *)0x105baae0/*ROM*/);
  return;
}
