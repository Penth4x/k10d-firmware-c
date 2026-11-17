/* @k10d copy_first_field_to_second @ 0x1045cc8e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the object and its first two fields, then copies the first field
 *   into the second.
 * summary:
 *   Takes a pointer param_1, invokes zero_memory_range passing param_1, *param_1, and
 *   param_1[1]. After the call, it overwrites param_1[1] with the value of *param_1. The
 *   function appears to be a small state-update or initialization routine for a two-word
 *   structure, but the specific role of zero_memory_range is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_first_field_to_second(uint32_t *param_1)

{
  zero_memory_range(param_1,(uint32_t *)*param_1,(uint32_t *)param_1[1]);
  param_1[1] = *param_1;
  return;
}
