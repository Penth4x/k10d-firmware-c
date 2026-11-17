/* @k10d release_pointer_at_offset_0x1c_10466dcc @ 0x10466dcc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer stored at offset 0x1c of the given structure and passes it to a
 *   single callee.
 * summary:
 *   The function dereferences param_1 + 0x1c and forwards that pointer to test_flag_set,
 *   whose role is not verified. It acts as a one-line wrapper that hands off a field of an
 *   unknown structure to a helper. No other side effects or camera-specific behavior are
 *   visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_0x1c_10466dcc(int param_1)

{
  test_flag_set(*(void **)(param_1 + 0x1c));
  return;
}
