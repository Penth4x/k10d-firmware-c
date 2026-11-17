/* @k10d call_helper_with_constant_arg_104dcbd2 @ 0x104dcbd2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function passing the second argument and a fixed constant.
 * summary:
 *   The function takes two parameters and immediately calls append_string_to_buffer with
 *   param_2 and the constant 0x105badac. It is a virtual method (slot 43) of class
 *   cls_105ba1b8. No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_arg_104dcbd2(uint32_t param_1,int *param_2)

{
  append_string_to_buffer(param_2,(void *)0x105badac/*ROM*/);
  return;
}
