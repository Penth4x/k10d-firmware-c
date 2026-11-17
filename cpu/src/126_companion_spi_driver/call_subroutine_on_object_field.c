/* @k10d call_subroutine_on_object_field @ 0x10440790
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single callee using the pointer stored at offset 0x14 of the object passed in
 *   param_1.
 * summary:
 *   The function dereferences param_1 + 0x14 and passes that value as the sole argument to
 *   test_flag_set. It performs no other operations, so it acts as a thin wrapper around
 *   that one call. The role of test_flag_set is unknown, so the camera subsystem cannot be
 *   inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_object_field(int param_1)

{
  test_flag_set(*(void **)(param_1 + 0x14));
  return;
}
