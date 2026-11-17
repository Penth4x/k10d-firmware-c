/* @k10d initialize_subsystem_with_param @ 0x1049918a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Calls three initialization helpers in sequence, passing the input parameter to the last
 *   two, and returns 1.
 * summary:
 *   The function invokes query_object_property_flag with no arguments, then calls
 *   check_and_update_struct_flags and check_and_set_object_flags, both receiving param_1.
 *   It unconditionally returns 1, suggesting a successful initialization or setup routine.
 *   The specific subsystem is not identifiable from the provided pseudocode and unknown
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_subsystem_with_param(uint32_t param_1)

{
  query_object_property_flag(__frv_reg_unset(4));
  check_and_update_struct_flags(param_1);
  check_and_set_object_flags(param_1);
  return 1;
}
