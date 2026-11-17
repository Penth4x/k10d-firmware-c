/* @k10d copy_mmio_block_to_buffer_10458bde @ 0x10458bde
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from MMIO region 0x400a0780 into a caller-provided buffer.
 * summary:
 *   The function performs two loops to copy data from the fixed MMIO address 0x400a0780 to
 *   the buffer pointed to by param_2. The first loop copies 12 bytes (6 bytes per
 *   iteration, 2 iterations) using 16-bit reads, and the second loop copies the remaining 4
 *   bytes (2 bytes per iteration, 2 iterations). The source address 0x400a0780 is not
 *   listed in the Tier 1 memory map, so its specific peripheral role is unknown. No kernel
 *   calls or other functions are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_mmio_block_to_buffer_10458bde(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0xe;
  do {
    iVar3 = iVar2;
    *(uint16_t *)(iVar1 + param_2) = *(uint16_t *)(iVar1 + 0x400a0780);
    *(uint16_t *)(iVar1 + 2 + param_2) = *(uint16_t *)(iVar1 + 0x400a0782);
    *(uint16_t *)(param_2 + iVar1 + 4) = *(uint16_t *)(iVar1 + 0x400a0784);
    iVar2 = iVar3 + -3;
    iVar1 = iVar1 + 6;
  } while (-1 < iVar2);
  iVar3 = iVar3 + -1;
  do {
    *(uint16_t *)(param_2 + iVar1) = *(uint16_t *)(iVar1 + 0x400a0780);
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 2;
  } while (-1 < iVar3);
  return;
}
