/* @k10d forward_param_to_helper_1051cf18 @ 0x1051cf18
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes a value from an object field to a helper function with a zero argument.
 * summary:
 *   The function reads a 32-bit value from the memory location pointed to by *(param_1 +
 *   0x30) + 4. It then calls write_to_dynamic_array with param_2 as the first argument, 0
 *   as the second, and the read value as the third. The role of the helper and the object
 *   structure is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_helper_1051cf18(int param_1,void *param_2)

{
  write_to_dynamic_array((int)param_2,0,*(uint32_t *)(*(int *)(param_1 + 0x30) + 4));
  return;
}
