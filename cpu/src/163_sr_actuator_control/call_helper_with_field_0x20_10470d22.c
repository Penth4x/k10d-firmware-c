/* @k10d call_helper_with_field_0x20_10470d22 @ 0x10470d22
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 163_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte field at offset 0x20 of param_1 to configure_sensor_readout_mode with
 *   two zero arguments.
 * summary:
 *   The function dereferences param_1 + 0x20 and forwards that value as the first argument
 *   to configure_sensor_readout_mode, along with two zero arguments. No other operations or
 *   side effects are visible in the pseudocode. The role of configure_sensor_readout_mode
 *   is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_field_0x20_10470d22(int param_1)

{
  configure_sensor_readout_mode(*(uint32_t *)(param_1 + 0x20),0,0);
  return;
}
