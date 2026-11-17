/* @k10d call_subroutine_on_field_16_104406ca @ 0x104406ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x10 of the object to a single callee.
 * summary:
 *   The function dereferences param_1 + 0x10 and passes that value as the sole argument to
 *   test_flag_clear. It performs no other operations, so its role is entirely defined by
 *   the unknown callee. No camera-specific behavior is evident from this wrapper alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_16_104406ca(int param_1)

{
  test_flag_clear(*(void **)(param_1 + 0x10));
  return;
}
