/* @k10d call_subroutine_with_offset_args @ 0x10395b0e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards three arguments to a callee, passing the first as param_1 plus 8.
 * summary:
 *   This function is a thin wrapper that calls store_two_words_and_call_helper_1039ae84
 *   with (param_1 + 8) as the first argument and the values in r5 and r6 as the second and
 *   third arguments. It performs no other operations and returns immediately. The role of
 *   the callee and the meaning of the offset are not determinable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_args(int param_1)

{
  uint16_t r5_in;
  uint16_t r6_in;
  
  store_two_words_and_call_helper_1039ae84((void *)(param_1 + 8),r5_in,r6_in);
  return;
}
