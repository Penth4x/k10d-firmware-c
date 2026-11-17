/* @k10d clear_zero_high_nibble_bytes @ 0x1051bf34
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a 2D array of bytes and sets specific bits while zeroing corresponding
 *   output bytes.
 * summary:
 *   The function reads dimensions from offsets 0x14, 0x26, and 0x28 of the object pointed
 *   to by param_1. It loops through rows and columns, checking the high and low nibbles of
 *   each source byte. If the high nibble is zero, it sets bits 0x60 in the source and
 *   writes 0 to the first byte of the destination pair. If the low nibble is zero, it sets
 *   bit 6 in the source and writes 0 to the second byte of the destination pair. The
 *   destination base address is provided in param_2 and the source base in param_3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_zero_high_nibble_bytes(void *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  if (*(short *)((int)param_1 + 0x28) != 0) {
    uVar2 = (uint)*(ushort *)((int)param_1 + 0x26);
    do {
      iVar5 = 0;
      iVar3 = iVar4 * ((int)(uint)*(ushort *)((int)param_1 + 0x14) >> 1) + param_3;
      iVar1 = iVar4 * (uint)*(ushort *)((int)param_1 + 0x14) + param_2;
      if ((int)uVar2 >> 1 != 0) {
        iVar6 = 0;
        do {
          if ((*(byte *)(iVar3 + iVar5) & 0xf0) == 0) {
            *(byte *)(iVar3 + iVar5) = *(byte *)(iVar3 + iVar5) | 0x60;
            *(uint8_t *)(iVar1 + iVar6) = 0;
          }
          if ((*(byte *)(iVar3 + iVar5) & 0xf) == 0) {
            *(byte *)(iVar3 + iVar5) = *(byte *)(iVar3 + iVar5) | 6;
            *(uint8_t *)(iVar1 + iVar6 + 1) = 0;
          }
          uVar2 = (uint)*(ushort *)((int)param_1 + 0x26);
          iVar6 = iVar6 + 2;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar2 >> 1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)((int)param_1 + 0x28));
  }
  return;
}
