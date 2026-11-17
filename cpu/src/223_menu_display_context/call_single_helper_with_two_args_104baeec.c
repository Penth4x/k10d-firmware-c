/* @k10d call_single_helper_with_two_args_104baeec @ 0x104baeec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 223_menu_display_context (unit names are model-proposed)
 * purpose:
 *   Forwards two arguments to a single callee and returns.
 * summary:
 *   The function takes two parameters and immediately calls
 *   call_helper_with_two_offsets_104b9984 with them, then returns. It performs no other
 *   operations, so it acts as a thin wrapper or trampoline around the callee. No camera-
 *   specific behavior is evident from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_two_args_104baeec(int param_1,void *param_2)

{
  call_helper_with_two_offsets_104b9984(param_1,param_2);
  return;
}
