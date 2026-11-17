/* @k10d init_sdhc_data_width @ 0x1044a788
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes SDHC data width to 4-bit if a prior setup call succeeds.
 * summary:
 *   Calls sdhc_send_cmd_0x61b with a constant argument 0x3b70100. If the return value is
 *   non-zero, it reads a value from offset 0x110 of the object pointer and passes it to
 *   sdhc_set_data_width with a width argument of 2. Returns true if the initial call
 *   succeeded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool init_sdhc_data_width(void *param_1)

{
  int iVar1;
  
  iVar1 = sdhc_send_cmd_0x61b(param_1,0x3b70100);
  if (iVar1 != 0) {
    sdhc_set_data_width((void *)(*(uint32_t *)((int)param_1 + 0x110)),2);
  }
  return iVar1 != 0;
}
