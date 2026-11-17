/* @k10d send_sdhc_command_170a @ 0x1044886a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_sdhc_command_170a(void *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = sdhc_send_command(param_1,0x170a,param_2,0);
  return uVar1;
}
