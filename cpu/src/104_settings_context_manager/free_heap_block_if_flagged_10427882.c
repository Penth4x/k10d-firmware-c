/* @k10d free_heap_block_if_flagged_10427882 @ 0x10427882
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown helper then frees param_1 on the heap if param_2's low bit is set.
 * summary:
 *   Guards on param_1 being non-NULL. Unconditionally calls lens_fw_update_teardown (role
 *   unknown). If bit 0 of param_2 is set, calls heap_free on param_1. The heap_free callee
 *   is the standard operator delete path, suggesting param_1 is a heap-allocated object
 *   pointer. No camera-specific behavior is evident from the code or named callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_block_if_flagged_10427882(int param_1,uint param_2)

{
  if (param_1 != 0) {
    lens_fw_update_teardown();
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
