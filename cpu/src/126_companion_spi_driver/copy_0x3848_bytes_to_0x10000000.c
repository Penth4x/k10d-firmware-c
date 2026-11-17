/* @k10d copy_0x3848_bytes_to_0x10000000 @ 0x10438706
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies 0x3848 bytes from a source buffer at 0x107cfffc to the destination address
 *   0x10000000.
 * summary:
 *   The function performs a word-wise memory copy of 0x3848 bytes (14360 bytes). The source
 *   address is calculated as 0x107cfffc and the destination as 0x10000000 (0x3848 -
 *   0x7ff10004). It iterates downwards from 0x3848 to 0, copying 4-byte chunks. No callees
 *   are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_0x3848_bytes_to_0x10000000(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x3848;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar2 + -0x7ff10004) = *(uint32_t *)(iVar2 + 0x107cfffc);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
