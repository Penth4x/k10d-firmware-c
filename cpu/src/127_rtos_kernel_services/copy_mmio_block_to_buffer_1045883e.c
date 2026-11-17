/* @k10d copy_mmio_block_to_buffer_1045883e @ 0x1045883e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Copies 64 bytes from MMIO region 0x400a0700 into a caller-provided buffer.
 * summary:
 *   The function iterates 16 times, reading 4 bytes (two 16-bit words) from consecutive
 *   offsets starting at 0x400a0700 and writing them to param_2. The source address
 *   0x400a0700 is not listed in the Tier 1 memory map, so its specific peripheral role is
 *   unknown. No kernel calls or other callees are made; it is a pure memory-to-memory copy
 *   from an MMIO region.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_mmio_block_to_buffer_1045883e(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xf;
  iVar1 = 0;
  do {
    *(uint16_t *)(iVar1 + param_2) = *(uint16_t *)(iVar1 + 0x400a0700);
    *(uint16_t *)(iVar1 + 2 + param_2) = *(uint16_t *)(iVar1 + 0x400a0702);
    *(uint16_t *)(iVar1 + 4 + param_2) = *(uint16_t *)(iVar1 + 0x400a0704);
    *(uint16_t *)(param_2 + iVar1 + 6) = *(uint16_t *)(iVar1 + 0x400a0706);
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 8;
  } while (-1 < iVar2);
  return;
}
