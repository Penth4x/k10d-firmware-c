/* @k10d evaluate_weighted_threshold @ 0x105298a2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Computes a weighted sum of 16 virtual object values and compares it against a
 *   threshold.
 * summary:
 *   Iterates over 16 objects at a fixed stride, calling virtual slot 2 on each to retrieve
 *   a 16-bit value. It sums these values, then computes a weighted average using 16-bit
 *   weights from param_2. Finally, it compares the result against param_3 to return a
 *   boolean-like flag (0 or 1). The specific camera subsystem is not identifiable from the
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t evaluate_weighted_threshold(int param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint32_t uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uintptr_t sp;
  uint local_48 [16];
  
  uVar6 = 0;
  uVar5 = 0;
  do {
    iVar2 = param_1 + 0x1054 + uVar5 * 0x20c;
    iVar7 = *(int *)(iVar2 + 0x208);
    uVar3 = (**(code **)(iVar7 + 0x1c))(iVar2 + *(short *)(iVar7 + 0x18));
    local_48[uVar5] = uVar3 & 0xffff;
    uVar6 = (uVar3 & 0xffff) + uVar6;
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0x10);
  if (uVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = (local_48[uVar3] << 8) / uVar6 & 0xffff;
      local_48[uVar3] = uVar1;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      uVar5 = uVar1;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 0x10);
    uVar6 = 0;
    do {
      iVar2 = (int)*(short *)(uVar6 * 2 + (int)param_2) * local_48[uVar6] + iVar2;
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < 0x10);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    uVar4 = 1;
    if (iVar2 / (int)uVar5 <= param_3) {
      uVar4 = 0;
    }
  }
  return uVar4;
}
