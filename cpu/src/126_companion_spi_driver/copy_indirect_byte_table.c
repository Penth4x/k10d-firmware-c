/* @k10d copy_indirect_byte_table @ 0x10448926
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies 10 bytes from param_1 using a fixed offset table into param_2 and null-
 *   terminates.
 * summary:
 *   Iterates twice, reading 5 bytes per iteration from param_1 + offset + 0x3b4, where
 *   offsets come from a 10-byte table at 0x105a198c. Writes the results sequentially to
 *   param_2 and sets the 11th byte to 0. No callees are invoked. The role of the offset
 *   table and the data being copied is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_indirect_byte_table(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 2;
  do {
    *(uint8_t *)(iVar1 + (int)param_2) =
         *(uint8_t *)((int)param_1 + *(byte *)(iVar1 + 0x105a198c/*ROM*/) + 0x3b4);
    *(uint8_t *)(iVar1 + 1 + (int)param_2) =
         *(uint8_t *)((int)param_1 + *(byte *)(iVar1 + 0x105a198d/*ROM*/) + 0x3b4);
    *(uint8_t *)(iVar1 + 2 + (int)param_2) =
         *(uint8_t *)((int)param_1 + *(byte *)(iVar1 + 0x105a198e/*ROM*/) + 0x3b4);
    *(uint8_t *)(iVar1 + 3 + (int)param_2) =
         *(uint8_t *)((int)param_1 + *(byte *)(iVar1 + 0x105a198f/*ROM*/) + 0x3b4);
    *(uint8_t *)((int)param_2 + iVar1 + 4) =
         *(uint8_t *)((int)param_1 + *(byte *)(iVar1 + 0x105a1990/*ROM*/) + 0x3b4);
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 5;
  } while (-1 < iVar2);
  *(uint8_t *)((int)param_2 + iVar1) = 0;
  return;
}
