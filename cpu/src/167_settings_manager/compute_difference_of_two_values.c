/* @k10d compute_difference_of_two_values @ 0x10474498
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves two values via helper calls and returns their difference.
 * summary:
 *   The function calls check_and_fetch_value_10476550 and check_and_fetch_value_104765a4
 *   with the same first two arguments (derived from param_1 and param_2) and pointers to
 *   local stack variables. It then returns the result of subtracting the second retrieved
 *   value from the first. The specific meaning of the values depends on the unverified
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_difference_of_two_values(int param_1,uint32_t param_2)

{
  uintptr_t sp;
  int iStack_10;
  int iStack_c;
  
  iStack_10 = 0;
  iStack_c = 0;
  check_and_fetch_value_10476550(*(uint32_t *)(param_1 + 8),param_2,&iStack_10);
  check_and_fetch_value_104765a4(*(uint32_t *)(param_1 + 8),param_2,&iStack_c);
  return iStack_10 - iStack_c;
}
