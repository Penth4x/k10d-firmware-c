/* @k10d call_init_with_static_arg @ 0x1043577e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the address of a static data object.
 * summary:
 *   The function takes no arguments and makes one call to check_magic_sentinel_104355e6,
 *   passing the address of DAT_10006280 as the sole parameter. No other operations, loops,
 *   or side effects are visible in this wrapper. The role of the callee and the data object
 *   are not known from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_init_with_static_arg(void)

{
  check_magic_sentinel_104355e6(&DAT_10006280/*ROM*/);
  return;
}
