/* @k10d call_two_initializers_with_zero @ 0x10445312
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions with the given parameter and a zero second argument.
 * summary:
 *   The function takes a single parameter and passes it to write_masked_value_to_40040300
 *   and write_masked_value_to_40040320, each with a second argument of 0. No other
 *   operations or side effects are visible in the pseudocode. The specific roles of the
 *   callees are unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_initializers_with_zero(uint32_t param_1)

{
  write_masked_value_to_40040300(param_1,0);
  write_masked_value_to_40040320(param_1,0);
  return;
}
