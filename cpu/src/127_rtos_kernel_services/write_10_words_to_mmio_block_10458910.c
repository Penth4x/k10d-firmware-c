/* @k10d write_10_words_to_mmio_block_10458910 @ 0x10458910
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_10_words_to_mmio_block_10458910(uint32_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0xe;
  do {
    iVar3 = iVar2;
    *(ushort *)(iVar1 + 0x400a0180) = *(ushort *)(iVar1 + param_2) & 0x3ff;
    *(ushort *)(iVar1 + 0x400a0182) = *(ushort *)(iVar1 + 2 + param_2) & 0x3ff;
    *(ushort *)(iVar1 + 0x400a0184) = *(ushort *)(param_2 + iVar1 + 4) & 0x3ff;
    iVar2 = iVar3 + -3;
    iVar1 = iVar1 + 6;
  } while (-1 < iVar2);
  iVar3 = iVar3 + -1;
  do {
    *(ushort *)(iVar1 + 0x400a0180) = *(ushort *)(param_2 + iVar1) & 0x3ff;
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 2;
  } while (-1 < iVar3);
  return;
}
