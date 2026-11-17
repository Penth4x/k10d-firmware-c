/* @k10d call_single_helper_with_two_args_104b4dbc @ 0x104b4dbc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Forwards two untyped arguments to a single helper function and returns.
 * summary:
 *   The function takes no declared parameters but passes the contents of unaff_r8 and
 *   unaff_r9 to check_and_process_field_5c. It performs no other operations, side effects,
 *   or state changes. The role of the callee is unknown, so the wrapper's specific purpose
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_two_args_104b4dbc(void)

{
  int caller_r8;
  void *caller_r9;
  
  check_and_process_field_5c(caller_r8,caller_r9);
  return;
}
