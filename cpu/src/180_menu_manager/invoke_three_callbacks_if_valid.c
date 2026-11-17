/* @k10d invoke_three_callbacks_if_valid @ 0x10486464
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls three helper functions with fields from param_1 if two pointer fields are non-
 *   null.
 * summary:
 *   Checks that the integers at offsets 0xa4 and 0xa8 of the object pointed to by param_1
 *   are non-zero. If both are set, it calls sr_state_machine with the values at offsets
 *   0xa0, 0xa4, and 0xa8, then calls configure_sensor_readout_mode with the value at 0xa0
 *   and constants 9 and 0, and finally calls trigger_sr_cal_transfer_104864a0 with param_1.
 *   The specific roles of the callees and the object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_three_callbacks_if_valid(int param_1)

{
  if ((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(param_1 + 0xa8) != 0)) {
    sr_state_machine(*(int *)(param_1 + 0xa0),*(int *)(param_1 + 0xa4),*(int *)(param_1 + 0xa8));
    configure_sensor_readout_mode(*(uint32_t *)(param_1 + 0xa0),9,0);
    trigger_sr_cal_transfer_104864a0(param_1);
  }
  return;
}
