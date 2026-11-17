/* @k10d call_single_helper_10443718 @ 0x10443718
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Forwards two arguments to a single callee and returns.
 * summary:
 *   The function takes a pointer and an undefined4 value and immediately passes them to
 *   call_helper_with_fixed_args_104438ea. It performs no other operations, local state
 *   changes, or side effects. It acts as a thin wrapper or trampoline around the callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_10443718(void *param_1,uint32_t param_2)

{
  call_helper_with_fixed_args_104438ea(param_1,param_2);
  return;
}
