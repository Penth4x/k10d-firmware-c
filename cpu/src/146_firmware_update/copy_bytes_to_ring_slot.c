/* @k10d copy_bytes_to_ring_slot @ 0x104675d2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Copies a byte buffer into a 9-byte-stride ring buffer, toggling between inline and
 *   pointer-based storage, then calls a finalize routine.
 * summary:
 *   The function manages a 0x12-byte (18-byte) buffer at param_1. If the flag at offset
 *   0x20 is clear, it copies param_4 bytes from param_2 into the first 18 bytes of param_1
 *   and sets the flag. If the flag is set, it copies param_4 bytes from param_2 into a
 *   buffer located at param_1 + *(int*)(param_1+0x14)*9. It then calls
 *   advance_two_wrapping_counters(param_1) and returns param_4. The module context is
 *   firmware_update, suggesting this handles chunked data accumulation for a firmware
 *   image.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int copy_bytes_to_ring_slot(int param_1,int param_2,uint32_t param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    do {
      iVar1 = 0;
      if (0 < param_4) {
        iVar4 = param_4 + -3;
        iVar2 = iVar3;
        if (2 < iVar4) {
          do {
            *(uint8_t *)(param_1 + iVar2) = *(uint8_t *)(param_2 + iVar1);
            *(uint8_t *)(param_1 + iVar2 + 1) = *(uint8_t *)(param_2 + iVar1 + 1);
            *(uint8_t *)(param_1 + iVar2 + 2) = *(uint8_t *)(param_2 + iVar1 + 2);
            iVar1 = iVar1 + 3;
            iVar4 = iVar4 + -3;
            iVar2 = iVar2 + 3;
          } while (-1 < iVar4);
        }
        for (iVar4 = iVar4 + 2; -1 < iVar4; iVar4 = iVar4 + -1) {
          *(uint8_t *)(param_1 + iVar2) = *(uint8_t *)(param_2 + iVar1);
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 1;
        }
      }
      iVar3 = iVar3 + 9;
    } while (iVar3 < 0x12);
    *(uint8_t *)(param_1 + 0x20) = 1;
  }
  else if (0 < param_4) {
    iVar1 = param_4 + -3;
    if (2 < iVar1) {
      do {
        *(uint8_t *)(*(int *)(param_1 + 0x14) * 9 + iVar3 + param_1) =
             *(uint8_t *)(param_2 + iVar3);
        *(uint8_t *)(*(int *)(param_1 + 0x14) * 9 + iVar3 + 1 + param_1) =
             *(uint8_t *)(param_2 + iVar3 + 1);
        *(uint8_t *)(param_1 + *(int *)(param_1 + 0x14) * 9 + iVar3 + 2) =
             *(uint8_t *)(param_2 + iVar3 + 2);
        iVar1 = iVar1 + -3;
        iVar3 = iVar3 + 3;
      } while (-1 < iVar1);
    }
    for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
      *(uint8_t *)(param_1 + *(int *)(param_1 + 0x14) * 9 + iVar3) =
           *(uint8_t *)(param_2 + iVar3);
      iVar3 = iVar3 + 1;
    }
  }
  advance_two_wrapping_counters(param_1);
  return param_4;
}
