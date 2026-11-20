/* @k10d dispatch_param_to_callees @ 0x000d073e
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Conditionally resolves param_1 via compute_adjusted_value_000d0770, then forwards the
 *   low 16 bits to write_byte_to_ram_and_call_two_routines and calls
 *   busy_wait_on_mode_flag.
 * summary:
 *   If param_1 equals the global DAT_0003f250, it is replaced by the return value of
 *   compute_adjusted_value_000d0770(0). The lower 16 bits of param_1 are passed to
 *   write_byte_to_ram_and_call_two_routines along with the constant 0xe. Finally
 *   busy_wait_on_mode_flag is called with DAT_0003f48f. No return value is produced.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_param_to_callees(uint param_1)

{
  if (param_1 == _DAT_0003f250) {
    param_1 = compute_adjusted_value_000d0770(0);
  }
  write_byte_to_ram_and_call_two_routines(0xe,param_1 & 0xffff);
  busy_wait_on_mode_flag(DAT_0003f48f);
  return;
}
