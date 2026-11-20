/* @k10d call_helper_with_constant_arg_104dc0e0 @ 0x104dc0e0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Forwards its first argument to append_string_to_buffer with a fixed second argument of
 *   0x105babbc.
 * summary:
 *   This is a one-line wrapper that calls append_string_to_buffer, passing param_2 as the
 *   first argument and the constant 0x105babbc as the second. It is virtual slot 35 of
 *   class cls_105ba1b8. No other side effects or state changes are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_arg_104dc0e0(uint32_t param_1,int *param_2)

{
  append_string_to_buffer((int *)(param_2),(char *)(0x105babbc/*ROM*/));
  return;
}
