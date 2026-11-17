/* @k10d call_seven_helpers_on_subobject @ 0x10443cee
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes seven helper functions in sequence, each receiving the pointer stored at offset
 *   0x18 of the input object.
 * summary:
 *   The function dereferences param_1 + 0x18 to obtain a sub-object pointer and passes it
 *   to seven callees (write_three_words_to_param,
 *   invoke_object_method_at_offset_0x10_104406b8,
 *   invoke_object_method_at_offset_0x10_10440712, call_subroutine_on_field_0x10,
 *   invoke_object_method_at_offset_0x18_10440820,
 *   invoke_object_method_at_offset_0x18_1044087a, call_subroutine_on_field_0x18_104407d8)
 *   in a fixed order. No return values are used and no other state is modified. The
 *   specific roles of the callees are unknown, so the camera subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_seven_helpers_on_subobject(void *param_1)

{
  write_three_words_to_param(*(void **)((int)param_1 + 0x18));
  invoke_object_method_at_offset_0x10_104406b8(*(void **)((int)param_1 + 0x18));
  invoke_object_method_at_offset_0x10_10440712(*(void **)((int)param_1 + 0x18));
  call_subroutine_on_field_0x10(*(void **)((int)param_1 + 0x18));
  invoke_object_method_at_offset_0x18_10440820(*(void **)((int)param_1 + 0x18));
  invoke_object_method_at_offset_0x18_1044087a(*(void **)((int)param_1 + 0x18));
  call_subroutine_on_field_0x18_104407d8(*(void **)((int)param_1 + 0x18));
  return;
}
