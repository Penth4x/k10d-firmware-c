/* @k10d call_four_initialization_routines_000e25aa @ 0x000e25aa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sequentially invokes four adjacent helper functions with no arguments or data
 *   manipulation.
 * summary:
 *   The function acts as a simple wrapper that calls empty_stub_000e25c8,
 *   enter_infinite_loop_000e25ca, enter_infinite_loop_000e2622, and
 *   sample_eight_channel_min_max_000e267a in order. It does not perform any local
 *   computation, memory access, or state modification itself. The specific roles of the
 *   callees are unknown, so the overall purpose is limited to this sequential invocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_four_initialization_routines_000e25aa(void)

{
  empty_stub_000e25c8();
  enter_infinite_loop_000e25ca();
  enter_infinite_loop_000e2622();
  sample_eight_channel_min_max_000e267a();
  return;
}
