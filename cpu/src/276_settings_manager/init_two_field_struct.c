/* @k10d init_two_field_struct @ 0x1051c840
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes two values into a memory block at param_2 via a helper function.
 * summary:
 *   The function calls write_to_dynamic_array twice with param_2 as the first argument. The
 *   first call passes 0 and 0x48 as the second and third arguments, while the second call
 *   passes 1 and 1. The role of write_to_dynamic_array is unknown, but the pattern suggests
 *   initializing or setting fields in a structure or memory region pointed to by param_2.
 *   No camera-specific subsystem is identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_field_struct(uint32_t param_1,void *param_2)

{
  write_to_dynamic_array((int)param_2,0,0x48);
  write_to_dynamic_array((int)param_2,1,1);
  return;
}
