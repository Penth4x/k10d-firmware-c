/* @k10d call_helper_with_two_args_10491b54 @ 0x10491b54
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with two values obtained from two other functions.
 * summary:
 *   The function calls get_or_init_sram_block_1052b6fc() to get a first value and
 *   select_buffer_by_index(param_1) to get a second value, then passes both to
 *   transfer_sr_calibration_data along with a zero. It is virtual slot 3 of cls_105b4160.
 *   No camera-specific behavior is evident from the pseudocode or callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_args_10491b54(cls_105b4160 *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = get_or_init_sram_block_1052b6fc();
  uVar2 = select_buffer_by_index((void *)param_1);
  transfer_sr_calibration_data((void *)uVar1, uVar2, 0);
  return;
}
