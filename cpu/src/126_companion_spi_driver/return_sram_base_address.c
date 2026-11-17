/* @k10d return_sram_base_address @ 0x10438750
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t return_sram_base_address(uint32_t param_x0)

{
  return 0x800f0000/*SDRAM*/;
}
