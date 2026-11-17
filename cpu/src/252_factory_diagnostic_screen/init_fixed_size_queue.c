/* @k10d init_fixed_size_queue @ 0x104e4628
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_fixed_size_queue(int param_1)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  *(uint32_t *)(param_1 + 0x14) = 0;
  *(uint32_t *)(param_1 + 4) = 2000;
  iVar2 = (*(code *)0x10546f88/*ROM*/)(2000,0x20,construct_cls_105c0d78_object,0,allocate_block_from_pool_zero_104e6270,0,0);
  *(int *)(param_1 + 0x2c) = iVar2;
  if (iVar2 != 0) {
    iVar2 = 0;
    uVar3 = 1;
    if (0 < *(int *)(param_1 + 4)) {
      iVar1 = 0;
      do {
        *(uint32_t *)(*(int *)(param_1 + 0x2c) + iVar1 + 8) = *(uint32_t *)(param_1 + 0x40);
        iVar1 = iVar1 + 0x20;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 4));
    }
  }
  return uVar3;
}
