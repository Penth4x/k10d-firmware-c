/* @k10d parse_integer_token @ 0x10546824
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint parse_integer_token(uint32_t *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uStack_24;
  
  pbVar5 = (byte *)*param_1;
  while (((&DAT_106220f1)[*pbVar5] & 4) != 0) {
    pbVar5 = pbVar5 + 1;
  }
  uStack_24 = 0;
  if (*pbVar5 == 0x2d) {
    uStack_24 = 1;
  }
  else if (*pbVar5 != 0x2b) goto LAB_10546868;
  pbVar5 = pbVar5 + 1;
LAB_10546868:
  if (param_2 == 0) {
    if (*pbVar5 == 0x30) {
      if ((pbVar5[1] == 0x78) || (pbVar5[1] == 0x58)) {
        param_2 = 0x10;
        pbVar5 = pbVar5 + 2;
      }
      else {
        param_2 = 8;
      }
    }
    else {
      param_2 = 10;
    }
  }
  else if (((param_2 == 0x10) && (*pbVar5 == 0x30)) && ((pbVar5[1] == 0x78 || (pbVar5[1] == 0x58))))
  {
    pbVar5 = pbVar5 + 2;
  }
  uVar1 = unsigned_divide(0xffffffff,param_2);
  uVar2 = 0;
  *param_1 = (uintptr_t)(pbVar5);
  uVar4 = 0;
  while (((&DAT_106220f1)[*pbVar5] & 0xe0) != 0) {
    if (((&DAT_106220f1)[*pbVar5] & 0x20) == 0) {
      iVar3 = 0x57;
      if (((&DAT_106220f1)[*pbVar5] & 0x40) == 0) {
        iVar3 = 0x37;
      }
    }
    else {
      iVar3 = 0x30;
    }
    iVar3 = (uint)*pbVar5 - iVar3;
    if ((int)param_2 <= iVar3) break;
    if ((uVar1 - 1 < uVar2) && (uVar4 == 0)) {
      if (uVar1 < uVar2) {
        uVar4 = 2;
      }
      else if (-iVar3 - 1U <= uVar2 * param_2 && uVar2 * param_2 - (-iVar3 - 1U) != 0) {
        uVar4 = 2;
      }
    }
    uVar2 = uVar2 * param_2 + iVar3;
    pbVar5 = pbVar5 + 1;
  }
  if (uStack_24 != 0) {
    uVar2 = -uVar2;
  }
  *param_3 = uVar2;
  if (pbVar5 == (byte *)*param_1) {
    uStack_24 = 0xffffffff;
  }
  else {
    *param_1 = (uintptr_t)(pbVar5);
    uStack_24 = uStack_24 | uVar4;
  }
  return uStack_24;
}
