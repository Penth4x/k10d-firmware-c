/* @k10d dispatch_three_way_on_param3 @ 0x10499682
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Selects and calls one of three helper functions based on the value of param_3,
 *   returning the helper's result or 1 for unknown values.
 * summary:
 *   The function branches on param_3: 0 calls dispatch_command_by_code_104996aa, 1 calls
 *   dispatch_command_by_type_104997fa, 2 calls dispatch_command_by_type_10499896, and any
 *   other value returns 1. param_1 and param_2 are received but not used in the visible
 *   logic. It is invoked as virtual method slot 3 of class cls_105b5668.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_three_way_on_param3(uint32_t param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  
  if (param_3 == 0) {
    uVar1 = dispatch_command_by_code_104996aa((uint32_t)param_1,(ushort *)(uint32_t)param_2);
  }
  else if (param_3 == 1) {
    uVar1 = dispatch_command_by_type_104997fa((uint32_t)param_1,(short *)(uint32_t)param_2);
  }
  else if (param_3 == 2) {
    uVar1 = dispatch_command_by_type_10499896((uint32_t)param_1,(short *)(uint32_t)param_2);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
