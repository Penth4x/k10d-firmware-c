/* @k10d call_two_helpers_on_struct_10503d44 @ 0x10503d44
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions using fields at offsets 0xc and 0x14 of the object passed
 *   in param_1.
 * summary:
 *   The function dereferences the object pointer in param_1, passes the 32-bit value at
 *   offset 0xc to the function at 0x10456fbe with a second argument of 0, and then passes
 *   the pointer at offset 0x14 to delete_signal_semaphore. No local computation or state
 *   modification is visible beyond these two calls. The roles of the callees and the object
 *   layout are not provided, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_struct_10503d44(int param_1)

{
  (*(code *)0x10456fbe/*ROM*/)(*(uint32_t *)(param_1 + 0xc),0);
  delete_signal_semaphore((void *)(param_1 + 0x14));
  return;
}
