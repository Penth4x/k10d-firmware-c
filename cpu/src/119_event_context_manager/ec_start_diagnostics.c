/* @k10d ec_start_diagnostics @ 0x10433876
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed release_three_heap_pointers)
 * unit: 119_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Frees up to three heap pointers stored at offsets 0x4, 0x2c, and 0x38 of the object if
 *   non-null.
 * summary:
 *   Checks three pointer fields in the object (offsets 0x4, 0x2c, 0x38) and calls
 *   kernel_diag_taskstack on the value at each offset plus a small constant (8 or 4) if the
 *   pointer is non-zero. The callee kernel_diag_taskstack is not named, but the pattern of
 *   checking for null and calling a single function on each pointer is consistent with a
 *   cleanup or deallocation routine. The function is virtual slot 5 of cls_1059f284.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void ec_start_diagnostics(void *param_1)

{
  if (*(int *)((int)param_1 + 0x2c) != 0) {
    kernel_diag_taskstack((void *)(*(int *)((int)param_1 + 0x2c) + 4));
  }
  if (*(int *)((int)param_1 + 4) != 0) {
    kernel_diag_taskstack((void *)(*(int *)((int)param_1 + 4) + 8));
  }
  if (*(int *)((int)param_1 + 0x38) != 0) {
    kernel_diag_taskstack((void *)(*(int *)((int)param_1 + 0x38) + 4));
  }
  return;
}
