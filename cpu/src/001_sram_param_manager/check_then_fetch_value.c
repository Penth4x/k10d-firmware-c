/* @k10d check_then_fetch_value @ 0x100f0e8e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls a check function and returns a value from a second function if the check passes,
 *   otherwise returns -1.
 * summary:
 *   The function calls retry_acquire_resource_0x31a and checks if the result is zero. If
 *   the result is zero, it calls wait_for_event_then_cleanup and returns its result. If the
 *   result is non-zero, it returns 0xffffffff (-1). This pattern suggests a conditional
 *   retrieval or status check followed by data fetch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_then_fetch_value(void)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = retry_acquire_resource_0x31a();
  if (iVar1 == 0) {
    uVar2 = wait_for_event_then_cleanup();
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
