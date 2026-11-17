/* @k10d sum_two_values_plus_six @ 0x104a8836
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns the sum of two helper results plus a constant 6.
 * summary:
 *   Calls compute_scaled_interval and sum_range_via_two_helpers with the same parameter and
 *   adds their return values together with the constant 6. No side effects are visible in
 *   this function itself. The role of the two callees is unknown, so the camera subsystem
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sum_two_values_plus_six(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = compute_scaled_interval((int)param_1);
  iVar2 = sum_range_via_two_helpers((int)param_1);
  return iVar1 + 6 + iVar2;
}
