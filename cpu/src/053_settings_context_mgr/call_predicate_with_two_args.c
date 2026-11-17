/* @k10d call_predicate_with_two_args @ 0x103b90d0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 053_settings_context_mgr (unit names are model-proposed)
 * purpose:
 *   Calls set_object_reference_and_check_flags with two arguments and returns its boolean
 *   result.
 * summary:
 *   This is a thin wrapper that invokes set_object_reference_and_check_flags, passing the
 *   incoming r4 and r5 registers as arguments. It converts the callee's return value to a
 *   boolean and returns it as a uint. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_predicate_with_two_args(void)

{
  uint r4_in;
  bool bVar1;
  int *r5_in;
  
  bVar1 = set_object_reference_and_check_flags(r4_in,r5_in);
  return (uint)bVar1;
}
