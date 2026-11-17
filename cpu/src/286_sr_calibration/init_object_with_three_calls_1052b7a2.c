/* @k10d init_object_with_three_calls_1052b7a2 @ 0x1052b7a2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling three helper functions on its first and second fields.
 * summary:
 *   Takes a pointer to a structure, calls call_kernel_with_short_id on the second field,
 *   write_value_to_object_offset_0x14 on the first field, and
 *   check_kernel_call_success_10459d88 on the second field again. Returns 1
 *   unconditionally. The specific roles of the callees are unknown, so the operation is
 *   described mechanically as a sequence of initialization or setup calls on object
 *   members.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_three_calls_1052b7a2(uint32_t *param_1)

{
  call_kernel_with_short_id(param_1 + 1);
  write_value_to_object_offset_0x14(*param_1);
  check_kernel_call_success_10459d88(param_1 + 1);
  return 1;
}
