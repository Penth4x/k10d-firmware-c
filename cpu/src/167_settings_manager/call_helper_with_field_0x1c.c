/* @k10d call_helper_with_field_0x1c @ 0x10477f42
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 0x1c of the object in param_1 and passes it to
 *   compute_exposure_compensation_value_10473590, returning the result.
 * summary:
 *   This is a thin wrapper that extracts a pointer or value from offset 0x1c of the
 *   structure pointed to by param_1. It passes this value along with the implicit r5
 *   register to the callee compute_exposure_compensation_value_10473590 and returns the
 *   callee's return value directly. No other side effects or global state modifications are
 *   visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_field_0x1c(int param_1)

{
  int iVar1;
  char *r5_in;
  
  iVar1 = compute_exposure_compensation_value_10473590(*(int *)(param_1 + 0x1c),r5_in);
  return iVar1;
}
