/* @k10d copy_mmio_block_to_buffer_10458f1e @ 0x10458f1e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from MMIO region 0x400a0800 into a caller-provided buffer.
 * summary:
 *   The function performs a 16-iteration loop, each time reading four 16-bit words from
 *   consecutive addresses starting at 0x400a0800 and writing them to param_2. The source
 *   address 0x400a0800 is not listed in the Tier 1 memory map, so its specific peripheral
 *   role is unknown. No kernel calls or other functions are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_mmio_block_to_buffer_10458f1e(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xf;
  iVar1 = 0;
  do {
    *(uint16_t *)(iVar1 + param_2) = *(uint16_t *)(iVar1 + 0x400a0800);
    *(uint16_t *)(iVar1 + 2 + param_2) = *(uint16_t *)(iVar1 + 0x400a0802);
    *(uint16_t *)(iVar1 + 4 + param_2) = *(uint16_t *)(iVar1 + 0x400a0804);
    *(uint16_t *)(param_2 + iVar1 + 6) = *(uint16_t *)(iVar1 + 0x400a0806);
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 8;
  } while (-1 < iVar2);
  return;
}
