/* @k10d enable_two_channels_1051a840 @ 0x1051a840
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Enables two channels (indices 0 and 1) of a device by calling a channel-enable routine.
 * summary:
 *   The function calls write_to_dynamic_array twice with the same first argument (param_2)
 *   and a constant third argument of 1, varying the second argument from 0 to 1. This
 *   pattern suggests enabling or activating two distinct channels, ports, or bits
 *   identified by the index. The specific device or subsystem (e.g., GPIO, SPI, display) is
 *   not identifiable from the pseudocode or the unknown callee name.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void enable_two_channels_1051a840(uint32_t param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,1);
  write_to_dynamic_array(param_2,1,1);
  return;
}
