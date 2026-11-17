/* @k10d call_single_helper_10486794 @ 0x10486794
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the provided parameter and returns.
 * summary:
 *   This function is a thin wrapper that passes its single integer argument directly to
 *   call_helper_with_second_field_104867ae. It performs no other operations, local variable
 *   manipulation, or state changes. The specific role of the underlying helper is unknown
 *   as it is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_10486794(int param_1)

{
  call_helper_with_second_field_104867ae(param_1);
  return;
}
