/* @k10d call_two_helpers_and_return_10427b54 @ 0x10427b54
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper, then calls a second helper with the input argument and returns
 *   its result.
 * summary:
 *   The function performs no local computation. It first invokes
 *   dispatch_virtual_slot_two_and_set_flag with no arguments, then invokes
 *   check_flag_in_struct_field passing param_1, and returns the value produced by
 *   check_flag_in_struct_field. The roles of both callees are unknown, so the overall
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_10427b54(uint32_t param_1)

{
  uint32_t uVar1;
  
  dispatch_virtual_slot_two_and_set_flag(__frv_reg_unset(4), __frv_reg_unset(5));
  uVar1 = check_flag_in_struct_field(param_1);
  return uVar1;
}
