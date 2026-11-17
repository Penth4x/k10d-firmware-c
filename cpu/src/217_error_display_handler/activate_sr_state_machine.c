/* @k10d activate_sr_state_machine @ 0x104b5286
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Invokes a sequence of helper functions to configure an object with two integer
 *   parameters.
 * summary:
 *   Checks that param_2 and param_3 are non-zero. If valid, calls sr_state_machine with the
 *   object pointer and both parameters, then calls sr_enable_channels with the object and
 *   0x7fff. It then retrieves a value from get_or_init_sram_block_1052b6fc twice and passes
 *   it along with param_3 and param_2 respectively to transfer_sr_calibration_data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void activate_sr_state_machine(int *param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    sr_state_machine(*param_1,param_2,param_3);
    sr_enable_channels(*param_1,0x7fff);
    uVar1 = get_or_init_sram_block_1052b6fc();
    transfer_sr_calibration_data((void *)uVar1,param_3,1);
    uVar1 = get_or_init_sram_block_1052b6fc();
    transfer_sr_calibration_data((void *)uVar1,param_2,1);
  }
  return;
}
