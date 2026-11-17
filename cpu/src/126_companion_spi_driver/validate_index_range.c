/* @k10d validate_index_range @ 0x10444764
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_index_range(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((-1 < param_2) && (param_2 < 0x87)) {
    uVar1 = 1;
  }
  return uVar1;
}
