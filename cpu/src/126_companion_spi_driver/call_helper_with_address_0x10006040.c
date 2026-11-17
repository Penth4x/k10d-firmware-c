/* @k10d call_helper_with_address_0x10006040 @ 0x104363fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the constant address 0x10006040 as its argument.
 * summary:
 *   This function is a thin wrapper that invokes check_magic_value_10436332 with the fixed
 *   parameter 0x10436332. The address 0x10006040 falls within the ROM region
 *   (0x10000000..0x105fffff), suggesting it may point to a data structure or code section
 *   within the firmware image. No other operations or side effects are visible in this
 *   function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_address_0x10006040(void)

{
  check_magic_value_10436332((void *)0x10006040/*ROM*/);
  return;
}
