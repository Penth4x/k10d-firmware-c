/* @k10d dispatch_two_param_query @ 0x1045d626
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the result of one of two helper functions selected by param_2, or zero
 *   otherwise.
 * summary:
 *   The function branches on param_2: if it equals 2 it calls
 *   call_virtual_slot_two_1045d50a, if it equals 3 it calls
 *   invoke_virtual_slot_two_1045d546, and returns the callee's return value in r4. For any
 *   other value of param_2 it returns 0. param_1 is unused. No camera subsystem is
 *   identifiable from the pseudocode or the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_param_query(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 2) {
    uVar1 = call_virtual_slot_two_1045d50a((int *)(uint32_t)param_1);
  }
  else if (param_2 == 3) {
    uVar1 = invoke_virtual_slot_two_1045d546((int *)(uint32_t)param_1);
  }
  return uVar1;
}
