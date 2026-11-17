/* @k10d dispatch_mode_two_variants @ 0x10499652
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Selects one of two helper functions based on a mode parameter and returns its result.
 * summary:
 *   The function branches on param_3: if 0 it calls dispatch_three_way_on_param3, if 1 it
 *   calls dispatch_event_by_type_10499932, otherwise it returns 1. It is virtual slot 3 of
 *   cls_105b5668. The callees are unnamed, so the specific subsystem role is not
 *   determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_two_variants(uint32_t param_1,ushort *param_2,int param_3,int param_4)

{
  uint32_t uVar1;
  
  if (param_3 == 0) {
    uVar1 = dispatch_three_way_on_param3(param_1,param_2,param_4);
  }
  else if (param_3 == 1) {
    uVar1 = dispatch_event_by_type_10499932(param_1,param_2,param_4);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
