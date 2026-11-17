/* @k10d call_init_with_rodata_ptr @ 0x10436e6c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing a pointer to a ROM data block at 0x10006000.
 * summary:
 *   The function performs one call to check_magic_value_10436d28 with the address of
 *   DAT_10006000 as its sole argument. No other operations, loops, or state changes are
 *   visible in this function itself. The role of the callee and the data block are not
 *   provided, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_init_with_rodata_ptr(void)

{
  check_magic_value_10436d28(&DAT_10006000/*ROM*/);
  return;
}
