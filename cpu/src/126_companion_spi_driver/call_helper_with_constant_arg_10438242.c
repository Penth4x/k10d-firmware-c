/* @k10d call_helper_with_constant_arg_10438242 @ 0x10438242
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the constant argument 0x1043819a.
 * summary:
 *   The function performs no local computation and simply invokes
 *   check_magic_value_1043819a, passing the constant 0x1043819a as its sole argument. No
 *   other side effects or state changes are visible in this function's own code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_arg_10438242(void)

{
  check_magic_value_1043819a((void*)0x10006080/*ROM*/);
  return;
}
