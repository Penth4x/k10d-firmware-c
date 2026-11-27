/* @k10d dispatch_two_mode_query_1045d646 @ 0x1045d646
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the result of one of two helper functions selected by an integer mode
 *   parameter.
 * summary:
 *   The function takes an integer selector in param_2. If the value is 2 it calls
 *   call_virtual_slot_two_1045d528 and returns its result; if the value is 3 it calls
 *   invoke_virtual_slot_two_1045d564 and returns its result. For any other value it returns
 *   0. The role of the two callees is unknown, so the specific subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_mode_query_1045d646(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 2) {
    uVar1 = call_virtual_slot_two_1045d528((int *)(uint32_t)param_1);
  }
  else if (param_2 == 3) {
    uVar1 = invoke_virtual_slot_two_1045d564((int *)(uint32_t)param_1);
  }
  return uVar1;
}
