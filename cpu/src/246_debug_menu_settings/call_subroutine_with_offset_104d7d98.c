/* @k10d call_subroutine_with_offset_104d7d98 @ 0x104d7d98
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls write_byte_at_offset_104de518 with param_2 and a pointer offset 0x26c from
 *   param_1.
 * summary:
 *   This function is a thin wrapper that forwards its arguments to
 *   write_byte_at_offset_104de518. It passes param_2 as the first argument and a pointer
 *   calculated as param_1 + 0x26c as the second argument. No other operations or side
 *   effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_104d7d98(int param_1,void *param_2)

{
  write_byte_at_offset_104de518(param_2,param_1 + 0x26c);
  return;
}
