/* @k10d compute_scaled_sum_from_struct @ 0x1050a6b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Computes a sum of three fields from a struct, applying conditional right-shifts to two
 *   of them based on a mode byte.
 * summary:
 *   Reads a mode byte at the start of the input struct. If the mode is 1, it right-shifts
 *   the field at offset 0x0a by 1 before multiplying it by the field at offset 0x0c, adds
 *   the field at offset 0x0c, and adds the field at offset 0x16 right-shifted by 1. If the
 *   mode is 0, it performs the same calculation without any shifts. For any other mode, it
 *   right-shifts both the field at offset 0x0a and the field at offset 0x0c by 1 before
 *   multiplying them, then adds the field at offset 0x0c and the field at offset 0x16
 *   right-shifted by 1. Returns the resulting integer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_scaled_sum_from_struct(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 1) {
    iVar1 = ((int)(uint)*(ushort *)(param_1 + 5) >> 1) * (uint)*(ushort *)(param_1 + 6) + param_1[3]
            + ((int)(uint)*(ushort *)((int)param_1 + 0x16) >> 1);
  }
  else if (*param_1 == 0) {
    iVar1 = (uint)*(ushort *)(param_1 + 5) * (uint)*(ushort *)(param_1 + 6) + param_1[3] +
            (uint)*(ushort *)((int)param_1 + 0x16);
  }
  else {
    iVar1 = ((int)(uint)*(ushort *)(param_1 + 5) >> 1) * ((int)(uint)*(ushort *)(param_1 + 6) >> 1)
            + param_1[3] + ((int)(uint)*(ushort *)((int)param_1 + 0x16) >> 1);
  }
  return iVar1;
}
