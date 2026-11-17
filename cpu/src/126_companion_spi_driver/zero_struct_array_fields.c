/* @k10d zero_struct_array_fields @ 0x10444f1a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears two 4-byte fields at offsets 0x14 and 0x24 in each of three consecutive 4-byte-
 *   aligned elements of a struct array.
 * summary:
 *   The function iterates three times, zeroing bytes at param_1+0x14..0x17 and
 *   param_1+0x24..0x27 for each element, advancing the base pointer by 4 bytes each
 *   iteration. It has no callees and performs only direct memory writes to the structure
 *   pointed to by param_1. The caller is a virtual method slot 3 of class cls_105a1648, but
 *   the specific camera subsystem role cannot be determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_struct_array_fields(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 3;
  do {
    *(uint8_t *)((int)param_1 + iVar1 + 0x14) = 0;
    *(uint8_t *)((int)param_1 + iVar1 + 0x24) = 0;
    *(uint8_t *)((int)param_1 + iVar1 + 0x15) = 0;
    *(uint8_t *)((int)param_1 + iVar1 + 0x25) = 0;
    *(uint8_t *)((int)param_1 + iVar1 + 0x16) = 0;
    *(uint8_t *)((int)param_1 + iVar1 + 0x26) = 0;
    *(uint8_t *)((int)param_1 + iVar1 + 0x17) = 0;
    *(uint8_t *)((int)param_1 + iVar1 + 0x27) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 4;
  } while (-1 < iVar2);
  return;
}
