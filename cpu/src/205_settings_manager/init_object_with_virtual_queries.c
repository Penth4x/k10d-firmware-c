/* @k10d init_object_with_virtual_queries @ 0x1049e39c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_virtual_queries(int param_1)

{
  short sVar1;
  code *pcVar2;
  int *piVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  uint32_t *puVar8;
  uint8_t auStack_2c [4];
  uint32_t auStack_14 [3];
  
  puVar8 = (uint32_t *)auStack_2c;
  piVar3 = (int *)get_or_create_singleton_object_10516ff2();
  auStack_14[0] = 0;
  auStack_14[1] = 0;
  auStack_14[2] = 0;
  iVar6 = param_1 + 0xc;
  iVar5 = 8;
  do {
    iVar7 = iVar5 + -4;
    *(uint32_t *)(iVar7 + param_1 + 0x2c) = *(uint32_t *)((int)auStack_14 + iVar5);
    iVar5 = iVar7;
  } while (iVar7 != 0);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x10f);
  forward_two_params_to_helper_104a874a(iVar6,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x110);
  forward_two_params_to_helper_104a874a(iVar6,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x112);
  forward_two_params_to_helper_104a874a(iVar6,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x11a);
  forward_two_params_to_helper_104a874a(iVar6,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x11b);
  forward_two_params_to_helper_104a874a(iVar6,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x128);
  forward_two_params_to_helper_104a874a(iVar6,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x131);
  forward_two_params_to_helper_104a874a(iVar6,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x132);
  forward_two_params_to_helper_104a874a(iVar6,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x213);
  forward_two_params_to_helper_104a874a(iVar6,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x8769);
  *(uint32_t *)(param_1 + 0x134) = uVar4;
  forward_two_params_to_helper_104a874a(iVar6, __frv_reg_unset(5));
  get_or_init_sram_block_104a184c();
  iVar5 = check_file_exists();
  if (iVar5 != 0) {
    iVar5 = *piVar3;
    iVar7 = **(int **)(param_1 + 0x140);
    sVar1 = *(short *)(iVar5 + 0x18);
    uVar4 = (((vtbl_entry*)(iVar7))[2].fn)
                      ((int)*(int **)(param_1 + 0x140) + (int)((vtbl_entry*)(iVar7))[2].adj);
    pcVar2 = *(code **)(iVar5 + 0x1c);
    *puVar8 = auStack_14[0];
    uVar4 = (*pcVar2)((int)sVar1 + (int)piVar3,0xc4a5,7,uVar4);
    forward_two_params_to_helper_104a874a(iVar6,uVar4);
    *(uint32_t *)(param_1 + 0x1a4) = *(uint32_t *)(param_1 + 0x140);
  }
  return;
}
