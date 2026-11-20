/* @k10d compare_and_adjust_value_000ea04e @ 0x000ea04e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks if a value from param_1 matches param_2, returning 0 if equal or calling a
 *   helper to compute a result if different.
 * summary:
 *   The function calls FUN_000e9fd2 with param_1 to retrieve a value. If this value equals
 *   param_2, it returns 0. Otherwise, it calls FUN_000ea0d2 with both parameters and
 *   returns the result. The specific roles of the callees are unknown, so the exact domain
 *   (e.g., settings, hardware) cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compare_and_adjust_value_000ea04e(uint32_t param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = FUN_000e9fd2(param_1);
  if (iVar1 == param_2) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_000ea0d2(param_1,param_2);
  }
  return uVar2;
}
