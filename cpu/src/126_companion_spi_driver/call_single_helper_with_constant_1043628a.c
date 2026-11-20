/* @k10d call_single_helper_with_constant_1043628a @ 0x1043628a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the constant argument 0x104362c0.
 * summary:
 *   The function performs no local computation and simply invokes
 *   check_magic_value_10436002 with the immediate value 0x104362c0. No other side effects
 *   or state changes are visible in this function's own code. The role of the callee is
 *   unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_with_constant_1043628a(void)

{
  check_magic_value_10436002((void *)0x100062c0/*ROM*/);
  return;
}
