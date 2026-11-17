/* @k10d set_three_parameters @ 0x10445370
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Sets three separate parameters on an object by calling three distinct setter functions.
 * summary:
 *   The function takes an object pointer and three values, then calls three separate
 *   functions (write_masked_value_to_40040308, write_masked_value_to_mmio_10445474,
 *   write_masked_value_to_dat_40040310), passing the object and one value to each. The
 *   specific roles of the callees are unknown, so the exact nature of the parameters cannot
 *   be determined. This appears to be a convenience wrapper for setting multiple properties
 *   at once.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_three_parameters(uint32_t param_1,uint param_2,uint32_t param_3,uint32_t param_4)

{
  write_masked_value_to_40040308(param_1,param_2);
  write_masked_value_to_mmio_10445474(param_1,param_3);
  write_masked_value_to_dat_40040310(param_1,param_4);
  return;
}
