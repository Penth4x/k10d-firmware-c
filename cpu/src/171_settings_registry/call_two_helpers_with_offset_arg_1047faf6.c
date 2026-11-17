/* @k10d call_two_helpers_with_offset_arg_1047faf6 @ 0x1047faf6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing the value at offset 8 of the object to the
 *   second.
 * summary:
 *   This virtual method (slot 4 of cls_105aafd8) first calls
 *   release_lens_update_context_105441b6 with no arguments, then calls heap_free_2 with the
 *   integer stored at param_1 + 8. The object is 0x14 bytes and derives from cls_1059e4e0.
 *   No camera-specific behavior is evident from the pseudocode or callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_offset_arg_1047faf6(int param_1)

{
  release_lens_update_context_105441b6();
  heap_free_2(*(int *)(param_1 + 8));
  return;
}
