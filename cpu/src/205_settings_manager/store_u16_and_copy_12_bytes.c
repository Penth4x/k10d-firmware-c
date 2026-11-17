/* @k10d store_u16_and_copy_12_bytes @ 0x1049f950
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_u16_and_copy_12_bytes(int param_1,uint param_2)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  
  if (param_2 < 0xf7ff) {
    *(char *)(param_1 + 0x5c) = (char)(param_2 >> 8);
    *(char *)(param_1 + 0x5d) = (char)param_2;
    iVar1 = *(int *)(param_1 + 0x14);
    iVar3 = 0xc;
    do {
      iVar3 = iVar3 + -1;
      *(uint8_t *)(iVar3 + iVar1) = *(uint8_t *)(iVar3 + param_1 + 0x58);
    } while (iVar3 != 0);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
