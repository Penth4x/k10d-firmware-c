/* @k10d pack_lens_fw_crc_table @ 0x1053b640
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t pack_lens_fw_crc_table(uint32_t param_1,void *param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = *(int *)((int)param_2 + 0xc);
  *(uint32_t *)(*(int *)((int)param_2 + 0x24) + 0xc) = 1;
  uVar6 = (*param_3 + param_3[1]) - 1;
  uVar4 = *param_3;
  uVar5 = uVar4;
  for (; uVar5 = uVar5 + 1, uVar4 < uVar6; uVar4 = uVar4 + 1) {
    iVar3 = uVar4 + (uVar4 >> 1);
    if ((uVar4 & 1) == 0) {
      *(char *)(iVar3 + iVar2) = (char)uVar4 + '\x01';
      bVar1 = *(byte *)(iVar3 + 1 + iVar2) & 0xf0 | (byte)(uVar5 >> 8) & 0xf;
    }
    else {
      *(byte *)(iVar3 + iVar2) = *(byte *)(iVar3 + iVar2) & 0xf | (char)uVar5 * '\x10';
      bVar1 = (byte)(uVar5 >> 4);
    }
    *(byte *)(iVar3 + 1 + iVar2) = bVar1;
  }
  iVar3 = uVar6 + (uVar6 >> 1);
  if ((uVar6 & 1) == 0) {
    *(char *)(iVar3 + iVar2) = (char)param_3[2];
    *(byte *)(iVar3 + 1 + iVar2) =
         *(byte *)(iVar3 + 1 + iVar2) & 0xf0 | (byte)(param_3[2] >> 8) & 0xf;
  }
  else {
    *(byte *)(iVar3 + iVar2) = *(byte *)(iVar3 + iVar2) & 0xf | (byte)(param_3[2] << 4);
    *(char *)(iVar3 + 1 + iVar2) = (char)(param_3[2] >> 4);
  }
  return 0;
}
