/* @k10d run_sequential_init_checks @ 0x100f0db8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls a sequence of eight initialization functions and returns 0 only if all succeed,
 *   otherwise returns -1.
 * summary:
 *   The function invokes eight callees in a fixed order, checking each return value for -1.
 *   If any callee fails, it immediately returns 0xffffffff. If all eight succeed, it calls
 *   call_handler_with_two_state_toggles with a local stack variable (initialized to 0) as
 *   an argument and returns 0. The pattern suggests a multi-stage initialization or setup
 *   routine where each step must complete successfully before proceeding to the next.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t run_sequential_init_checks(void)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint16_t uStack_a;
  
  uStack_a = 0;
  iVar1 = check_two_calls_for_error();
  if (((((iVar1 == -1) || (iVar1 = wait_for_flag_with_timeout_100f0e2c(), iVar1 == -1)) ||
       (iVar1 = retry_acquire_resource_0x209(), iVar1 == -1)) ||
      ((iVar1 = check_then_fetch_value(), iVar1 == -1 || (iVar1 = check_five_conditions(), iVar1 == -1)))) ||
     ((iVar1 = check_two_conditions_sequentially(), iVar1 == -1 ||
      ((iVar1 = check_and_init_state_flag(), iVar1 == -1 || (iVar1 = calculate_exposure_time_us(&uStack_a), iVar1 == -1)))))) {
    uVar2 = 0xffffffff;
  }
  else {
    call_handler_with_two_state_toggles(uStack_a);
    uVar2 = 0;
  }
  return uVar2;
}
