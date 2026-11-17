/* @k10d init_buffer_pool_context @ 0x104e452e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool init_buffer_pool_context(int *param_1)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uintptr_t sp;
  int *piVar9;
  uint8_t auStack_1c [12];
  
  piVar9 = (int *)auStack_1c;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *param_1 = 20000;
  iVar8 = param_1[1] + 20000;
  param_1[3] = iVar8;
  param_1[2] = iVar8;
  pvVar3 = (void *)(param_1[1] * 9 + 260000);
  param_1[7] = (int)pvVar3;
  iVar8 = mempool_get_block((void *)param_1[0x12],pvVar3,0);
  param_1[0xd] = iVar8;
  iVar8 = *param_1;
  *piVar9 = (int)allocate_block_from_pool_zero_104e402c;
  iVar7 = 0;
  piVar9[1] = 0;
  piVar9[2] = 0;
  iVar8 = (*(code *)0x10546f88/*ROM*/)(iVar8,0x2c,construct_cls_105c03c8_object,0);
  param_1[0xc] = iVar8;
  iVar8 = param_1[2];
  *piVar9 = (int)allocate_block_from_pool_zero_104e639a;
  piVar9[1] = 0;
  piVar9[2] = 0;
  iVar8 = (*(code *)0x10546f88/*ROM*/)(iVar8,8,alloc_or_zero_two_words,0);
  param_1[10] = iVar8;
  if (0 < *param_1) {
    iVar8 = 0;
    do {
      iVar2 = param_1[0xc];
      iVar4 = param_1[0x10];
      iVar5 = param_1[0x11];
      iVar6 = param_1[0xe];
      *piVar9 = param_1[0xf];
      (*(code *)0x104e3996/*ROM*/)(iVar2 + iVar8,iVar4,iVar5,iVar6);
      iVar8 = iVar8 + 0x2c;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *param_1);
  }
  bVar1 = false;
  if (((param_1[0xc] == 0) || (param_1[0xd] == 0)) || (param_1[10] == 0)) {
    bVar1 = true;
  }
  return !bVar1;
}
