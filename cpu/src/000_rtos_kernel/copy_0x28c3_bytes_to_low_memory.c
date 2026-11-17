/* @k10d copy_0x28c3_bytes_to_low_memory @ 0x10008134
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Copies 0x28c3 bytes from a source region to a destination region in low memory.
 * summary:
 *   The function performs a byte-wise copy of 0x28c3 (10435) bytes. The source address is
 *   calculated as iVar2 + 0x10009707, which resolves to the 0x1000xxxx ROM region. The
 *   destination address is calculated as iVar2 - 0x7fffe605, which resolves to the
 *   0x0000xxxx region (likely SDRAM or a specific low-memory buffer). It iterates from
 *   0x28c3 down to 1, copying one byte per iteration. No kernel primitives or camera-
 *   specific MMIO registers are accessed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_0x28c3_bytes_to_low_memory(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x28c3;
  do {
    iVar1 = iVar2 + -1;
    *(uint8_t *)(iVar2 + -0x7fffe605) = *(uint8_t *)(iVar2 + 0x10009707/*ROM*/);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
