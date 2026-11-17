/* @k10d release_pointer_at_offset_0x18_10466d48 @ 0x10466d48
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the pointer stored at offset 0x18 of the given object and passes it to a single
 *   callee.
 * summary:
 *   The function dereferences param_1 + 0x18 and forwards that pointer to test_flag_set,
 *   whose role is not verified. It acts as a one-line wrapper around that callee for the
 *   field at offset 0x18. No other fields are touched and no other side effects are
 *   visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_0x18_10466d48(int param_1)

{
  test_flag_set(*(void **)(param_1 + 0x18));
  return;
}
