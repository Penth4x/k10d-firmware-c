/* @k10d write_twelve_words_to_mmio_block_10458d20 @ 0x10458d20
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_twelve_words_to_mmio_block_10458d20(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xf;
  iVar1 = 0;
  do {
    *(ushort *)(iVar1 + 0x400a0400) = *(ushort *)(iVar1 + param_2) & 0x3ff;
    *(ushort *)(iVar1 + 0x400a0402) = *(ushort *)(iVar1 + 2 + param_2) & 0x3ff;
    *(ushort *)(iVar1 + 0x400a0404) = *(ushort *)(iVar1 + 4 + param_2) & 0x3ff;
    *(ushort *)(iVar1 + 0x400a0406) = *(ushort *)(param_2 + iVar1 + 6) & 0x3ff;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 8;
  } while (-1 < iVar2);
  return;
}
