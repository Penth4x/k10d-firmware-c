/* @k10d call_two_helpers_and_return_one_1040fb82 @ 0x1040fb82
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions with the given object pointer and returns 1.
 * summary:
 *   The function takes a single pointer argument (param_1) and passes it to
 *   release_subobject_triplets and invoke_fourteen_helpers_on_subobject in sequence. It
 *   then returns the constant value 1. As a virtual method slot 3 of cls_1059be70, it
 *   likely performs a specific operation on the object, but the exact behavior is obscured
 *   by the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_one_1040fb82(void *param_1)

{
  release_subobject_triplets(param_1);
  invoke_fourteen_helpers_on_subobject(param_1);
  return 1;
}
