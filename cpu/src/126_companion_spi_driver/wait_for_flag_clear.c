/* @k10d wait_for_flag_clear @ 0x10449a70
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_flag_clear(void *param_1)

{
  int iVar1;
  
  (*(code *)0x1044b298/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110),1);
  iVar1 = (*(code *)0x1044b2c6/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110));
  while (iVar1 != 0) {
    iVar1 = (*(code *)0x1044b2c6/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110));
  }
  return;
}
