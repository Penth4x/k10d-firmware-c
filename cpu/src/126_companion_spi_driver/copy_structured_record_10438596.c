/* @k10d copy_structured_record_10438596 @ 0x10438596
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies a variable-length record from a source array into a destination buffer,
 *   returning the number of bytes copied.
 * summary:
 *   The function calculates a byte length based on param_3, clamping it to a minimum of
 *   0x200 and a maximum of 0x31ce. It then performs a bulk copy of 12-byte chunks from the
 *   source (param_1 + 8 + offset) to the destination (param_2), followed by a byte-wise
 *   copy for any remaining bytes. The return value is the calculated length. No camera-
 *   specific subsystems or MMIO registers are accessed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int copy_structured_record_10438596(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 * 0x200 + 0x200U < 0x31cf) {
    iVar4 = 0x200;
  }
  else {
    iVar4 = param_3 * -0x200 + 0x31ce;
  }
  if (iVar4 != 0) {
    iVar3 = 0;
    iVar1 = iVar4 + -3;
    iVar5 = param_3 << 0xb;
    if (2 < iVar1) {
      iVar2 = param_1 + 8;
      do {
        *(uint32_t *)(param_2 + iVar3) = *(uint32_t *)(iVar2 + iVar5);
        *(uint32_t *)(param_2 + iVar3 + 4) = *(uint32_t *)(iVar2 + iVar5 + 4);
        *(uint32_t *)(param_2 + iVar3 + 8) = *(uint32_t *)(iVar2 + iVar5 + 8);
        iVar5 = iVar5 + 0xc;
        iVar1 = iVar1 + -3;
        iVar3 = iVar3 + 0xc;
      } while (-1 < iVar1);
    }
    iVar1 = iVar1 + 2;
    if (-1 < iVar1) {
      do {
        *(uint32_t *)(param_2 + iVar3) = *(uint32_t *)(param_1 + 8 + iVar5);
        iVar5 = iVar5 + 4;
        iVar1 = iVar1 + -1;
        iVar3 = iVar3 + 4;
      } while (-1 < iVar1);
    }
  }
  return iVar4;
}
