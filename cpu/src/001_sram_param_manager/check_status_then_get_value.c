/* @k10d check_status_then_get_value @ 0x100f0b60
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls a status check function and returns a value from another function if the status
 *   is zero, otherwise returns -1.
 * summary:
 *   The function first calls call_function_pointer_and_delay with argument 1. It then calls
 *   run_nine_step_init_sequence to get a status code. If the status is 0, it calls and
 *   returns the result of init_state_and_wait_for_ready. If the status is non-zero, it
 *   returns 0xffffffff (-1). The specific roles of the callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_status_then_get_value(void)

{
  int iVar1;
  uint32_t uVar2;
  
  call_function_pointer_and_delay(1);
  iVar1 = run_nine_step_init_sequence();
  if (iVar1 == 0) {
    uVar2 = init_state_and_wait_for_ready();
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
