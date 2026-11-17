/* @k10d copy_1096_bytes_to_sram @ 0x100f0066
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_1096_bytes_to_sram(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x448;
  do {
    iVar1 = iVar2 + -1;
    *(uint8_t *)(iVar2 + 0x7fffffff) = *(uint8_t *)(iVar2 + 0x100f03bf/*ROM*/);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
