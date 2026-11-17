/* @k10d write_twelve_words_to_mmio_block_104585fe @ 0x104585fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_twelve_words_to_mmio_block_104585fe(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xf;
  iVar1 = 0;
  do {
    *(ushort *)(iVar1 + 0x400a0100) = *(ushort *)(iVar1 + param_2) & 0x3ff;
    *(ushort *)(iVar1 + 0x400a0102) = *(ushort *)(iVar1 + 2 + param_2) & 0x3ff;
    *(ushort *)(iVar1 + 0x400a0104) = *(ushort *)(iVar1 + 4 + param_2) & 0x3ff;
    *(ushort *)(iVar1 + 0x400a0106) = *(ushort *)(param_2 + iVar1 + 6) & 0x3ff;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 8;
  } while (-1 < iVar2);
  return;
}
