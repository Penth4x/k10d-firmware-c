/* @k10d call_helper_with_two_results @ 0x1049199e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls two helpers and passes their results to a third function with a constant flag.
 * summary:
 *   The function calls get_or_init_sram_block_1052b6fc() to get a value, calls
 *   select_buffer_by_index(param_1) to get a second value, and then calls
 *   transfer_sr_calibration_data with the first result, the second result, and the constant
 *   1. It is virtual method slot 3 of class cls_105b4130. The specific roles of the callees
 *   are unknown, so the operation is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_results(cls_105b4130 *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = get_or_init_sram_block_1052b6fc();
  uVar2 = select_buffer_by_index((void *)param_1);
  transfer_sr_calibration_data((void *)uVar1, uVar2, 1);
  return;
}
