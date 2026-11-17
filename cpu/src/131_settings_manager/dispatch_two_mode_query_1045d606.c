/* @k10d dispatch_two_mode_query_1045d606 @ 0x1045d606
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the result of one of two helper functions selected by a mode parameter,
 *   defaulting to zero.
 * summary:
 *   The function takes a mode selector in param_2 and an unused param_1. If param_2 is 2 it
 *   calls invoke_virtual_slot_two_1045d4ce, if 3 it calls invoke_virtual_slot_two_1045d4ec,
 *   and otherwise returns 0. The return value is passed through in r4. The callees are
 *   unnamed, so the specific subsystem queried is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_two_mode_query_1045d606(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 2) {
    uVar1 = invoke_virtual_slot_two_1045d4ce((int *)__frv_reg_unset(4));
  }
  else if (param_2 == 3) {
    uVar1 = invoke_virtual_slot_two_1045d4ec((int *)__frv_reg_unset(4));
  }
  return uVar1;
}
