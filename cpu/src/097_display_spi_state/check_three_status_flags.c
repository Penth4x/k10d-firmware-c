/* @k10d check_three_status_flags @ 0x1041a638
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_three_status_flags(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = 0;
  uVar5 = 1;
  iVar6 = 2;
  iVar4 = 0;
  do {
    iVar2 = param_1 + 0x1588;
    if ((*(char *)(iVar2 + iVar4 + 5) != '\0') && (*(int *)(*(int *)(iVar2 + iVar4) + 0x1c) != 1)) {
      uVar1 = uVar1 | uVar5;
    }
    piVar3 = (int *)(iVar2 + iVar4 + 8);
    if ((*(char *)((int)piVar3 + 5) != '\0') && (*(int *)(*piVar3 + 0x1c) != 1)) {
      uVar1 = uVar1 | uVar5 << 1;
    }
    piVar3 = (int *)(iVar2 + iVar4 + 0x10);
    if ((*(char *)((int)piVar3 + 5) != '\0') && (*(int *)(*piVar3 + 0x1c) != 1)) {
      uVar1 = uVar1 | uVar5 << 2;
    }
    uVar5 = uVar5 << 3;
    iVar6 = iVar6 + -1;
    iVar4 = iVar4 + 0x18;
  } while (-1 < iVar6);
  return uVar1;
}
