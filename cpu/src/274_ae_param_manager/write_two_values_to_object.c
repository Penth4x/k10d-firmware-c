/* @k10d write_two_values_to_object @ 0x1051a7a0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Writes two 32-bit values from a nested structure into a target object via a helper
 *   function.
 * summary:
 *   The function extracts two 32-bit integers from a structure pointed to by *(param_1 +
 *   0x6c) + 0x70. It calls write_to_dynamic_array twice, passing param_2 as the first
 *   argument, an index (0 or 1) as the second, and the extracted values as the third. The
 *   specific role of param_1, param_2, and the helper function is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_values_to_object(int param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,**(uint32_t **)(*(int *)(param_1 + 0x6c) + 0x70));
  write_to_dynamic_array(param_2,1,*(uint32_t *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x70) + 4));
  return;
}
