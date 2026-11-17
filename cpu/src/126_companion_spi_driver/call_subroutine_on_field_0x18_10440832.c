/* @k10d call_subroutine_on_field_0x18_10440832 @ 0x10440832
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Passes the pointer stored at offset 0x18 of the object in param_1 to test_flag_clear.
 * summary:
 *   The function dereferences param_1 + 0x18 and passes that value as the sole argument to
 *   test_flag_clear. It performs no other operations, local variable manipulation, or
 *   return value handling. The role of the object and the callee is not determinable from
 *   the provided pseudocode and unknown callee name.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_field_0x18_10440832(int param_1)

{
  test_flag_clear(*(void **)(param_1 + 0x18));
  return;
}
