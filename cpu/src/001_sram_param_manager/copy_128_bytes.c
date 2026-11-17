/* @k10d copy_128_bytes @ 0x100f1c32
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_128_bytes(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0x7f;
  do {
    *(uint8_t *)(iVar1 + param_1) = *(uint8_t *)(iVar1 + param_2);
    *(uint8_t *)(iVar1 + 1 + param_1) = *(uint8_t *)(iVar1 + 1 + param_2);
    iVar2 = iVar1 + 3;
    *(uint8_t *)(iVar1 + 2 + param_1) = *(uint8_t *)(iVar1 + 2 + param_2);
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + -1;
    *(uint8_t *)(iVar2 + param_1) = *(uint8_t *)(iVar2 + param_2);
  } while (-1 < iVar3);
  return;
}
