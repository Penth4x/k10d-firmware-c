/* @k10d copy_four_bytes @ 0x1044b8c2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_bytes(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    iVar1 = iVar1 + -1;
    *(uint8_t *)(iVar1 + (int)param_1) = *(uint8_t *)(iVar1 + (int)param_2);
  } while (iVar1 != 0);
  return;
}
