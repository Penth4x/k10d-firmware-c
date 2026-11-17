/* @k10d call_and_store_result_1043893a @ 0x1043893a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper with one argument and stores the return value into a caller-provided
 *   pointer.
 * summary:
 *   Invokes call_two_stage_helper with param_1, writes the returned value to the memory
 *   location pointed to by param_2, and returns 1. The specific role of
 *   call_two_stage_helper is unknown, so the operation is described mechanically as a
 *   wrapper that captures a helper's return value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_and_store_result_1043893a(int param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  uVar1 = call_two_stage_helper(param_1);
  *param_2 = uVar1;
  return 1;
}
