/* @k10d dispatch_virtual_slot_two_10491970 @ 0x10491970
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions and passes their results to a third function with a constant
 *   argument.
 * summary:
 *   The function retrieves a value from get_or_init_sram_block_1052b6fc and another from
 *   select_channel_by_index (using param_1), then calls transfer_sr_calibration_data with
 *   these two values and the integer 1. It is identified as virtual method slot 2 of class
 *   cls_105b4130. The specific roles of the callees are unknown, so the behavior is
 *   described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_two_10491970(uint32_t *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = get_or_init_sram_block_1052b6fc();
  uVar2 = select_channel_by_index(param_1);
  transfer_sr_calibration_data((void *)uVar1, uVar2, 1);
  return;
}
