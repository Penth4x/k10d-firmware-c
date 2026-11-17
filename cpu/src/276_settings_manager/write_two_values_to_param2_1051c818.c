/* @k10d write_two_values_to_param2_1051c818 @ 0x1051c818
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes two values to param_2 via a helper with offset and length arguments.
 * summary:
 *   Calls write_to_dynamic_array twice with param_2 as the first argument. The first call
 *   uses offset 0 and length 0x48; the second uses offset 1 and value 1. param_1 is unused.
 *   The helper's role is unknown, so the operation is described mechanically as two
 *   writes/updates to param_2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_values_to_param2_1051c818(uint32_t param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,0x48);
  write_to_dynamic_array(param_2,1,1);
  return;
}
