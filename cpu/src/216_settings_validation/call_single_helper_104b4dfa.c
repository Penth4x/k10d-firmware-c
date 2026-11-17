/* @k10d call_single_helper_104b4dfa @ 0x104b4dfa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Forwards two untyped registers to a single callee and returns.
 * summary:
 *   The function body consists solely of a call to process_param_with_two_helpers passing
 *   the values in r8 and r9, then returns. No local computation, memory access, or
 *   branching is visible. The role of the callee is unknown, so the wrapper's purpose
 *   cannot be further specified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104b4dfa(void)

{
  int caller_r8;
  void *caller_r9;
  
  process_param_with_two_helpers(caller_r8,caller_r9);
  return;
}
