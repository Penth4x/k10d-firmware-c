/* @k10d call_with_offset_lock_1050b8de @ 0x1050b8de
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with a lock/unlock pair around an offset pointer.
 * summary:
 *   The function calls call_kernel_with_short_id on the pointer at param_1 + 0x60, then
 *   calls dispatch_event_via_virtual_slot_1050d12e with the original three arguments, and
 *   finally calls check_kernel_call_success_10459d88 on the same offset pointer. It returns
 *   the result of the middle call. The pattern suggests a critical section or state
 *   transition around the core operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_with_offset_lock_1050b8de(int param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x60));
  uVar1 = dispatch_event_via_virtual_slot_1050d12e(param_1,param_2,param_3);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x60));
  return uVar1;
}
