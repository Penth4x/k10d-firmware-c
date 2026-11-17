/* @k10d wait_for_flag_then_toggle_state @ 0x10492f28
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 196_settings_event_handler (unit names are model-proposed)
 * purpose:
 *   Polls a flag at offset 4 until it clears, then calls setup and teardown routines on
 *   offset 0x24.
 * summary:
 *   The function first calls call_kernel_with_short_id on the pointer at param_1 + 0x24. It
 *   then enters a loop calling call_kernel_with_offset_arg on param_1 + 4 until the return
 *   value is zero. Finally, it calls check_kernel_call_success_10459d88 on the pointer at
 *   param_1 + 0x24. The specific roles of the callees and the data structure are unknown,
 *   but the pattern suggests a wait-for-completion or synchronization sequence bracketed by
 *   initialization and finalization calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x10492f6e) */
/* WARNING: Removing unreachable block (ram,0x10492f88) */
/* WARNING: Removing unreachable block (ram,0x10492f7c) */
/* WARNING: Removing unreachable block (ram,0x10492faa) */
/* WARNING: Removing unreachable block (ram,0x10492fb4) */

void wait_for_flag_then_toggle_state(int param_1)

{
  int iVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x24));
  iVar1 = call_kernel_with_offset_arg(param_1 + 4);
  while (iVar1 != 0) {
    iVar1 = call_kernel_with_offset_arg(param_1 + 4);
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x24));
  return;
}
