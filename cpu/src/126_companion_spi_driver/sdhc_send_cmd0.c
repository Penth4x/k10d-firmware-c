/* @k10d sdhc_send_cmd0 @ 0x10448034
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void sdhc_send_cmd0(void *param_1)

{
  sdhc_send_command(param_1,0,0,0);
  return;
}
