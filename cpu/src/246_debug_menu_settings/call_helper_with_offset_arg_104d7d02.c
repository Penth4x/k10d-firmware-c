/* @k10d call_helper_with_offset_arg_104d7d02 @ 0x104d7d02
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing param_2 and a pointer offset 0x14c into param_1.
 * summary:
 *   The function forwards its two arguments to write_byte_at_offset_104de518, passing
 *   param_2 as the first argument and (param_1 + 0x14c) as the second. It performs no other
 *   operations and returns void. The role of the callee and the meaning of the 0x14c offset
 *   are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_104d7d02(int param_1,void *param_2)

{
  write_byte_at_offset_104de518(param_2,param_1 + 0x14c);
  return;
}
