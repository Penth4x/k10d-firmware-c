/* @k10d compute_exposure_value_from_params @ 0x104823b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104823e2) overlaps instruction at (ram,0x104823e0)
    */

uint compute_exposure_value_from_params(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x1d);
  if (cVar1 == '\x01') {
    uVar2 = 3;
    iVar3 = 2;
  }
  else if ((cVar1 == '\x04') || (cVar1 == '\x06')) {
    uVar2 = 2;
    iVar3 = 1;
  }
  else {
    uVar2 = 4;
    iVar3 = 1;
  }
  uVar2 = ((uint)*(byte *)(param_1 + 0x1c) * 0x200 * iVar3) / uVar2 +
          (uint)*(byte *)(param_1 + 0x20);
  uVar2 = ((uVar2 - 1) +
          ((uint)*(byte *)(param_1 + 0x1c) * 2 -
          ((int)((uint)*(ushort *)(param_1 + 0x22) * 0x20 + 0x1ff) >> 9)) +
          (*(int *)(param_1 + 0x18) - (uint)*(ushort *)(param_1 + 0x1e))) / uVar2;
  *(uint *)(param_1 + 0x24) = uVar2;
  return uVar2 & 0xffff;
}
