/* @k10d check_sram_address_range @ 0x10444776
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_sram_address_range(uint32_t param_1,char *param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (((char *)0xfffffff < param_2) && (param_2 < s_ONIOOt_10800000)) {
    uVar1 = 1;
  }
  return uVar1;
}
