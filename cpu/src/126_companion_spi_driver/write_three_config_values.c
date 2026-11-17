/* @k10d write_three_config_values @ 0x10445328
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_config_values(uint32_t param_1,uint param_2)

{
  write_masked_value_to_40040308(param_1,param_2);
  write_masked_value_to_mmio_10445474(param_1,0x4b000);
  write_masked_value_to_dat_40040310(param_1,0x5dc00);
  return;
}
