/* @k10d copy_structured_record_array @ 0x104383d4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies an array of 12-byte records from a source buffer to a destination buffer,
 *   returning the number of records copied.
 * summary:
 *   The function calculates the number of 12-byte records to copy based on param_3,
 *   clamping the count to a maximum of 0xe10/0x200. It then performs a bulk copy of the
 *   records from param_1+8 to param_2, handling the copy in chunks of 3 records (36 bytes)
 *   followed by a remainder loop for any leftover records. It returns the number of records
 *   copied in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int copy_structured_record_array(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 * 0x200 + 0x200U < 0xe11) {
    iVar4 = 0x200;
  }
  else {
    iVar4 = param_3 * -0x200 + 0xe10;
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
