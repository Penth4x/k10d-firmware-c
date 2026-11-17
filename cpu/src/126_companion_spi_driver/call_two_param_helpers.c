/* @k10d call_two_param_helpers @ 0x104453b6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions with the same first argument and fixed second constants.
 * summary:
 *   The function takes a single pointer-like argument and passes it to
 *   write_masked_value_to_dat_40040338 with 0x7fff and to
 *   write_masked_value_to_mmio_10445582 with 0x20. No local state is modified and no return
 *   value is produced. The roles of the callees are unknown, so the subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_param_helpers(uint32_t param_1)

{
  write_masked_value_to_dat_40040338(param_1,0x7fff);
  write_masked_value_to_mmio_10445582(param_1,0x20);
  return;
}
