/* @k10d wait_for_flag_at_offset_0x110 @ 0x10449ab0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_flag_at_offset_0x110(void *param_1)

{
  int iVar1;
  
  (*(code *)0x1044b24e/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110),1);
  iVar1 = (*(code *)0x1044b27c/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110));
  while (iVar1 != 0) {
    iVar1 = (*(code *)0x1044b27c/*ROM*/)(*(uint32_t *)((int)param_1 + 0x110));
  }
  return;
}
