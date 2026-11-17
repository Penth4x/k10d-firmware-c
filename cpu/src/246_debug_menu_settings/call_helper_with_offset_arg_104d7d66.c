/* @k10d call_helper_with_offset_arg_104d7d66 @ 0x104d7d66
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls a helper passing param_2 and a pointer offset 0x1ec into the param_1 structure.
 * summary:
 *   This is a thin wrapper that forwards two arguments to write_byte_at_offset_104de518.
 *   The first argument is param_2, and the second is param_1 plus the constant offset
 *   0x1ec, suggesting it passes a specific field within a larger structure. No other
 *   operations or side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_104d7d66(int param_1,void *param_2)

{
  write_byte_at_offset_104de518(param_2,param_1 + 0x1ec);
  return;
}
