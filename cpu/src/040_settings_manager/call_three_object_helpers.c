/* @k10d call_three_object_helpers @ 0x10398cc2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions on an object, passing fields at offsets 0xcc and 0xd0 as
 *   arguments.
 * summary:
 *   The function takes an object pointer in param_1 and calls call_helper_with_size_608
 *   with the object and its field at offset 0xd0. It then calls
 *   dispatch_virtual_then_call_helper with the object, its field at offset 0xcc, and its
 *   field at offset 0xd0. Finally, it calls apply_param_to_twelve_fields with just the
 *   object pointer. The specific roles of the callees and the object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_object_helpers(int param_1)

{
  call_helper_with_size_608(param_1,*(uint32_t *)(param_1 + 0xd0));
  dispatch_virtual_then_call_helper(param_1,*(uint32_t *)(param_1 + 0xcc),*(uint32_t *)(param_1 + 0xd0));
  apply_param_to_twelve_fields(param_1);
  return;
}
