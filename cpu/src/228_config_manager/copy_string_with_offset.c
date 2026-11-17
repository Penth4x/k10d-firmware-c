/* @k10d copy_string_with_offset @ 0x104c274a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 228_config_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_string_with_offset(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = count_string_bytes(param_2);
  if (0xc < iVar4) {
    iVar4 = 0xc;
  }
  iVar2 = 0;
  if (0 < iVar4) {
    iVar4 = iVar4 + -3;
    if (2 < iVar4) {
      iVar1 = param_1 + 0xc;
      do {
        *(char *)(iVar2 + iVar1) = param_2[iVar2];
        iVar3 = iVar2 + 2;
        *(char *)(iVar2 + 1 + iVar1) = param_2[iVar2 + 1];
        iVar2 = iVar2 + 3;
        iVar4 = iVar4 + -3;
        *(char *)(iVar3 + iVar1) = param_2[iVar3];
      } while (-1 < iVar4);
    }
    iVar4 = iVar4 + 2;
    if (-1 < iVar4) {
      iVar1 = iVar2;
      do {
        iVar2 = iVar1 + 1;
        iVar4 = iVar4 + -1;
        *(char *)(iVar1 + param_1 + 0xc) = param_2[iVar1];
        iVar1 = iVar2;
      } while (-1 < iVar4);
    }
  }
  *(uint8_t *)(param_1 + 0xc + iVar2) = 0;
  return;
}
