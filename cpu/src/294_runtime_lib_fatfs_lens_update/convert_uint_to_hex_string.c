/* @k10d convert_uint_to_hex_string @ 0x10545e76
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int convert_uint_to_hex_string(char *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = param_1;
  if (1 < (int)param_3) {
    for (iVar6 = (int)param_3 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pcVar5 = *(char *)param_2 + '0';
      *(uint8_t *)param_2 = 0;
      uVar1 = *param_2;
      uVar4 = param_2[1];
      uVar2 = param_2[1];
      uVar3 = *param_2;
      *param_2 = uVar3 << 2;
      *param_2 = uVar3 << 2 | param_2[1] >> 0x1e;
      param_2[1] = param_2[1] << 2;
      *param_2 = *param_2 + (uVar1 << 4 | uVar4 >> 0x1c);
      uVar1 = param_2[1] + uVar2 * 0x10;
      param_2[1] = uVar1;
      if (uVar1 < uVar2 * 0x10) {
        *param_2 = *param_2 + 1;
      }
      pcVar5[1] = (char)((int)(uint)*(byte *)param_2 >> 1) + '0';
      *(byte *)param_2 = *(byte *)param_2 & 0xf1;
      *(byte *)param_2 = *(byte *)param_2 & 0xf;
      pcVar5 = pcVar5 + 2;
      uVar1 = param_2[1];
      *param_2 = *param_2 + (*param_2 << 2 | param_2[1] >> 0x1e);
      uVar2 = param_2[1] + uVar1 * 4;
      param_2[1] = uVar2;
      if (uVar2 < uVar1 * 4) {
        *param_2 = *param_2 + 1;
      }
    }
    param_3 = param_3 & 1;
  }
  if (param_3 == 1) {
    *pcVar5 = *(char *)param_2 + '0';
    *(uint8_t *)param_2 = 0;
    uVar2 = *param_2;
    uVar4 = param_2[1];
    uVar3 = param_2[1];
    uVar1 = *param_2;
    *param_2 = uVar1 << 1;
    *param_2 = uVar1 << 1 | param_2[1] >> 0x1f;
    param_2[1] = param_2[1] << 1;
    *param_2 = *param_2 + (uVar2 << 3 | uVar4 >> 0x1d);
    uVar1 = param_2[1] + uVar3 * 8;
    param_2[1] = uVar1;
    pcVar5 = pcVar5 + 1;
    if (uVar1 < uVar3 * 8) {
      *param_2 = *param_2 + 1;
    }
  }
  return (int)pcVar5 - (int)param_1;
}
