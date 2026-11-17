/* @k10d enable_two_channels_1051a7dc @ 0x1051a7dc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Enables two channels (indices 0 and 1) of a device identified by param_2 via a helper
 *   call.
 * summary:
 *   Calls write_to_dynamic_array twice with the same device ID (param_2), channel indices 0
 *   and 1, and an enable flag of 1. The first argument param_1 is unused. The specific
 *   device and channel semantics are unknown because the callee is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void enable_two_channels_1051a7dc(uint32_t param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,1);
  write_to_dynamic_array(param_2,1,1);
  return;
}
