/* @k10d call_two_helpers_and_combine @ 0x1047a62e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from param_1, calls two helper functions with it, and passes their
 *   results to a third function.
 * summary:
 *   The function dereferences the field at offset 4 of the object in param_1. It passes
 *   this value to two separate functions at 0x10478e56 and 0x10478c52. The return values of
 *   these two calls, along with param_2, are then passed as arguments to a third function
 *   at 0x104df5cc. The final return value is the result of this third call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_combine(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = (*(code *)0x10478e56/*ROM*/)(*(uint32_t *)(param_1 + 4));
  uVar2 = (*(code *)0x10478c52/*ROM*/)(*(uint32_t *)(param_1 + 4));
  uVar1 = (*(code *)0x104df5cc/*ROM*/)(param_2,uVar1,uVar2);
  return uVar1;
}
