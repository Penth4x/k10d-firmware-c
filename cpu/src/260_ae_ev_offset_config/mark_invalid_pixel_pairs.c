/* @k10d mark_invalid_pixel_pairs @ 0x104f6b86
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 260_ae_ev_offset_config (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void mark_invalid_pixel_pairs(uint32_t param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  compute_scaled_offset_sum(param_2);
  compute_scaled_sum_from_struct(param_2);
  iVar5 = 0;
  if (*(short *)((int)param_2 + 0x12) != 0) {
    do {
      iVar1 = compute_scaled_offset_sum(param_2);
      pbVar2 = (byte *)(iVar1 + iVar5 * ((int)(uint)*(ushort *)(param_2 + 5) >> 1));
      iVar3 = compute_scaled_sum_from_struct(param_2);
      iVar1 = 0;
      pbVar4 = (byte *)(iVar3 + iVar5 * ((int)(uint)*(ushort *)(param_2 + 5) >> 1));
      if ((int)(uint)*(ushort *)(param_2 + 4) >> 1 != 0) {
        do {
          if ((&DAT_105c3f20/*ROM*/)[(uint)*pbVar4 + (uint)*pbVar2 * 0x100] != '\x02') {
            *pbVar2 = 0x80;
            *pbVar4 = 0x80;
          }
          pbVar2 = pbVar2 + 1;
          iVar1 = iVar1 + 1;
          pbVar4 = pbVar4 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(param_2 + 4) >> 1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(ushort *)((int)param_2 + 0x12));
  }
  return;
}
