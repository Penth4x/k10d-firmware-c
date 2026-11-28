/* @k10d forward_struct_and_second_field @ 0x1045cb1c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes a struct pointer and its second field to a helper, returning the helper's
 *   result.
 * summary:
 *   This is a thin wrapper that extracts param_1[1] and calls grow_dynamic_buffer_1045cb38
 *   with param_1, that extracted value, and param_2. It returns the callee's return value
 *   unchanged. No other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_struct_and_second_field(int *entry, void *aux)

{
  uint32_t result;

  /* Forward entry, its second word (offset +4), and aux to the helper. */
  result = grow_dynamic_buffer_1045cb38(entry, (uint32_t *)entry[1], aux);
  return result;
}
