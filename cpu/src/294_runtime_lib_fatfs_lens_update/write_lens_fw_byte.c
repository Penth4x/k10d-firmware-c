/* @k10d write_lens_fw_byte @ 0x1053b514
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes a single byte to a packed bitstream buffer and updates progress counters.
 * summary:
 *   The function calculates a bit offset from param_3 and writes param_5 into the buffer
 *   pointed to by param_2+0xc, handling both even and odd bit alignments. It increments a
 *   counter at param_2+0x18 if the written value is zero, or a counter at param_1+0x74 if
 *   it matches a value at param_1+0x50. A subsequent loop clears bits in the buffer while a
 *   condition involving param_4 and param_1+0x4c is met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_lens_fw_byte(void *param_1,void *param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)((int)param_2 + 0xc);
  *(uint32_t *)(*(int *)((int)param_2 + 0x24) + 0xc) = 1;
  iVar3 = param_3 + (param_3 >> 1);
  if ((param_3 & 1) == 0) {
    uVar4 = (uint)*(byte *)(iVar3 + iVar2) | (*(byte *)(iVar3 + 1 + iVar2) & 0xf) << 8;
    *(char *)(iVar3 + iVar2) = (char)param_5;
    *(byte *)(iVar3 + 1 + iVar2) = *(byte *)(iVar3 + 1 + iVar2) & 0xf0 | (byte)(param_5 >> 8) & 0xf;
  }
  else {
    uVar4 = (uint)*(byte *)(iVar3 + 1 + iVar2) << 4 | (int)(*(byte *)(iVar3 + iVar2) & 0xf0) >> 4;
    *(byte *)(iVar3 + iVar2) = *(byte *)(iVar3 + iVar2) & 0xf | (byte)(param_5 << 4);
    *(char *)(iVar3 + 1 + iVar2) = (char)(param_5 >> 4);
  }
  if (param_5 == 0) {
    *(int *)((int)param_2 + 0x18) = *(int *)((int)param_2 + 0x18) + 1;
  }
  else if (param_5 == *(uint *)((int)param_1 + 0x50)) {
    *(int *)((int)param_1 + 0x74) = *(int *)((int)param_1 + 0x74) + 1;
  }
  while (((1 < uVar4 && (uVar4 <= *(uint *)((int)param_1 + 0x4c))) && (uVar4 != param_4))) {
    iVar3 = uVar4 + (uVar4 >> 1);
    if ((uVar4 & 1) == 0) {
      uVar4 = (uint)*(byte *)(iVar3 + iVar2) | (*(byte *)(iVar3 + 1 + iVar2) & 0xf) << 8;
      *(uint8_t *)(iVar3 + iVar2) = 0;
      bVar1 = *(byte *)(iVar3 + 1 + iVar2) & 0xf0;
    }
    else {
      uVar4 = (uint)*(byte *)(iVar3 + 1 + iVar2) << 4 | (int)(*(byte *)(iVar3 + iVar2) & 0xf0) >> 4;
      *(byte *)(iVar3 + iVar2) = *(byte *)(iVar3 + iVar2) & 0xf;
      bVar1 = 0;
    }
    *(byte *)(iVar3 + 1 + iVar2) = bVar1;
    *(int *)((int)param_2 + 0x18) = *(int *)((int)param_2 + 0x18) + 1;
  }
  return 0;
}
