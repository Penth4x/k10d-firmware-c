/* @k10d sd_cmd31_send_status @ 0x10448098
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void sd_cmd31_send_status(void *param_1)

{
  sdhc_send_command(param_1,0x31a,0,0);
  return;
}
