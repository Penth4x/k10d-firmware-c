/* @k10d copy_bytes_unaligned @ 0x1046782a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Copies param_4 bytes from param_2 to param_1 using a 3-byte unrolled loop and a tail
 *   loop.
 * summary:
 *   The function performs a byte-wise memory copy of param_4 bytes from the source buffer
 *   at param_2 to the destination buffer at param_1. It uses an unrolled loop that
 *   processes 3 bytes per iteration for the bulk of the data, followed by a tail loop to
 *   handle the remaining bytes. It returns the length param_4. It has no callees and is a
 *   standard utility routine, likely used within the firmware update module for data
 *   manipulation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int copy_bytes_unaligned(int param_1,int param_2,uint32_t param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_4) {
    iVar1 = param_4 + -3;
    if (2 < iVar1) {
      do {
        *(uint8_t *)(iVar2 + param_1) = *(uint8_t *)(iVar2 + param_2);
        iVar3 = iVar2 + 2;
        *(uint8_t *)(iVar2 + 1 + param_1) = *(uint8_t *)(iVar2 + 1 + param_2);
        iVar2 = iVar2 + 3;
        iVar1 = iVar1 + -3;
        *(uint8_t *)(iVar3 + param_1) = *(uint8_t *)(iVar3 + param_2);
      } while (-1 < iVar1);
    }
    for (iVar1 = iVar1 + 2; -1 < iVar1; iVar1 = iVar1 + -1) {
      *(uint8_t *)(iVar2 + param_1) = *(uint8_t *)(iVar2 + param_2);
      iVar2 = iVar2 + 1;
    }
  }
  return param_4;
}
