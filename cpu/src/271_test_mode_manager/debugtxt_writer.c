/* @k10d debugtxt_writer @ 0x10511790
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_two_values_to_memory)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper to compute a value, stores it to a pointer, and calls a second helper
 *   with a computed address and a constant.
 * summary:
 *   The function takes param_1, passes it to compute_indexed_offset_delta with a second
 *   argument of 0, and stores the result to the address in unaff_r10. It then calls
 *   copy_null_terminated_string with an address derived from unaff_r8 + 0x818 + 8 and a
 *   constant pointer DAT_105d5f8c. The specific roles of the callees and the data
 *   structures are not clear from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* C:\Debug.txt telemetry writer. */

void debugtxt_writer(uint32_t param_1)

{
  uint32_t uVar1;
  int caller_r8;
  uint32_t *caller_r10;
  
  uVar1 = compute_indexed_offset_delta(param_1,0);
  *caller_r10 = uVar1;
  copy_null_terminated_string((void *)(*(int *)(caller_r8 + 0x818) + 8),&DAT_105d5f8c/*ROM*/);
  return;
}
