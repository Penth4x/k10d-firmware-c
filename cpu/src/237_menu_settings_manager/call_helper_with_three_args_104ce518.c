/* @k10d call_helper_with_three_args_104ce518 @ 0x104ce518
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards three register arguments to compute_division_ratio and returns its result.
 * summary:
 *   This is a thin wrapper that passes in_r4, in_r5, and in_r6 to compute_division_ratio
 *   and returns the uint result. No local state is modified and no other side effects are
 *   visible. The caller is compute_clamped_division_value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_helper_with_three_args_104ce518(void)

{
  int r4_in;
  uint uVar1;
  int r5_in;
  uint32_t r6_in;
  
  uVar1 = compute_division_ratio(r4_in,r5_in,r6_in);
  return uVar1;
}
