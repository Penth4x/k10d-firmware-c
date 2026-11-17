/* @k10d call_single_helper_104b4e0a @ 0x104b4e0a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with two unaffined register arguments.
 * summary:
 *   This function is a thin wrapper that invokes call_helper_and_store_result_104b50a4,
 *   passing the values in unaff_r8 and unaff_r9. It performs no other operations and
 *   returns immediately. The specific role of the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104b4e0a(void)

{
  int caller_r8;
  void *caller_r9;
  
  call_helper_and_store_result_104b50a4(caller_r8,caller_r9);
  return;
}
