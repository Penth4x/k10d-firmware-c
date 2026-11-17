/* @k10d toggle_state_via_param_flag @ 0x10471452
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 164_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Branches on param_2 to either query and update a field at offset 0x54 or call a helper
 *   and reset the field.
 * summary:
 *   If param_2 is zero, it reads the value at param_1+0x54, passes it to
 *   set_high_bit_of_field, and writes the result back via sr_cal_transfer. Otherwise, it
 *   calls allocate_display_buffers_and_enable with param_1 and calls
 *   configure_sensor_readout_mode with the value at param_1+0x54 and two zeros. The
 *   function acts as a state toggle or mode switch based on the second argument.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_state_via_param_flag(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = set_high_bit_of_field(*(uint32_t *)(param_1 + 0x54));
    sr_cal_transfer(*(uint32_t *)(param_1 + 0x54),uVar1,0);
  }
  else {
    allocate_display_buffers_and_enable(param_1);
    configure_sensor_readout_mode(*(uint32_t *)(param_1 + 0x54),0,0);
  }
  return;
}
