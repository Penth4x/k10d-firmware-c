/* @k10d call_two_helpers_on_object_1040db9a @ 0x1040db9a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions on the given object pointer, passing a derived offset to
 *   the first.
 * summary:
 *   The function takes a single pointer argument. It calls check_kernel_object_id_valid
 *   with the argument plus 0x40, then calls clear_struct_field_at_offset_8 with the
 *   original argument. It returns 0. The roles of the callees are unknown, so the specific
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_on_object_1040db9a(cls_10564e90 *param_1)

{
  check_kernel_object_id_valid((void *)(&param_1->field_0x40));
  clear_struct_field_at_offset_8(param_1);
  return 0;
}
