/* @k10d enable_two_channels_1051a868 @ 0x1051a868
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Enables two channels (indices 0 and 1) of a device identified by param_2 by calling a
 *   channel-enable routine.
 * summary:
 *   The function calls write_to_dynamic_array twice with the same device identifier
 *   (param_2), channel indices 0 and 1, and a constant value of 1 (likely an enable flag).
 *   The first argument param_1 is unused. Without knowledge of write_to_dynamic_array's
 *   specific role, the exact subsystem (e.g., display, sensor, or companion chip) cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void enable_two_channels_1051a868(uint32_t param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,1);
  write_to_dynamic_array(param_2,1,1);
  return;
}
