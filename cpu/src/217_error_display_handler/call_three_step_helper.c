/* @k10d call_three_step_helper @ 0x104b5302
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Calls a getter on the object, a no-arg function, and a setter with the two results and
 *   a constant.
 * summary:
 *   The function takes a pointer to an object, calls set_high_bit_of_read_value with the
 *   object's first field, calls get_or_init_sram_block_1052b6fc with no arguments, and then
 *   calls transfer_sr_calibration_data passing the result of the second call, the result of
 *   the first call, and the constant 1. The specific roles of the callees are unknown, so
 *   the operation is described mechanically as a three-step sequence of calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_step_helper(uint32_t *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = set_high_bit_of_read_value(*param_1);
  uVar2 = get_or_init_sram_block_1052b6fc();
  transfer_sr_calibration_data((void *)uVar2,uVar1,1);
  return;
}
