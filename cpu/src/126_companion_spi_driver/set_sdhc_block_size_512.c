/* @k10d set_sdhc_block_size_512 @ 0x1044a84a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_sdhc_block_size_512(void *param_1)

{
  int iVar1;
  
  iVar1 = sdhc_send_command_check_status(param_1,0x200);
  if (iVar1 != 0) {
    sdhc_set_block_size(*(void **)((int)param_1 + 0x110),0x200);
  }
  return iVar1 != 0;
}
