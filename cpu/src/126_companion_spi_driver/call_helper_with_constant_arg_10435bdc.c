/* @k10d call_helper_with_constant_arg_10435bdc @ 0x10435bdc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the constant argument 0x10435b18.
 * summary:
 *   The function performs no local computation; it simply invokes
 *   check_magic_value_10435b18 with the immediate value 0x10006240 and returns. No other
 *   side effects or globals are touched in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_arg_10435bdc(void)

{
  check_magic_value_10435b18((void *)0x10006240/*ROM*/);
  return;
}
