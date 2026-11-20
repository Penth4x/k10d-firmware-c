/* @k10d query_camera_property_table @ 0x105183e2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Queries a sequence of property IDs from a virtual object and stores results in a
 *   struct.
 * summary:
 *   The function retrieves a virtual object pointer via
 *   get_or_init_singleton_object_10517512 and initializes a portion of the parameter
 *   struct. It then iterates through a hardcoded list of property IDs (e.g., 0xfe, 0x100,
 *   0x101, 0x102, etc.), calling virtual slot 4 (offset 0x24) or slot 3 (offset 0x1c) to
 *   fetch values. Most results are passed to forward_two_params_to_helper_104a874a, while
 *   specific values (0x14a, 0x8769, 0xc634) are stored directly into the parameter struct
 *   at offsets 0x134, 0x138, and 0x13c. The caller is a virtual method of class
 *   cls_105d65d0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_camera_property_table(int param_1)

{
  short sVar1;
  int *piVar2;
  uint32_t uVar3;
  int iVar4;
  code *pcVar5;
  short *psVar6;
  int iVar7;
  uintptr_t sp;
  uint32_t *puVar9;
  uint8_t auStack_34 [4];
  int aiStack_14 [3];
  int iVar8;
  
  puVar9 = (uint32_t *)auStack_34;
  piVar2 = (int *)get_or_init_singleton_object_10517512();
  iVar4 = param_1 + 0xc;
  aiStack_14[1] = 0;
  aiStack_14[2] = 0;
  iVar8 = 8;
  do {
    iVar7 = iVar8 + -4;
    *(uint32_t *)(iVar7 + param_1 + 0x2c) = *(uint32_t *)((int)aiStack_14 + iVar8);
    iVar8 = iVar7;
  } while (iVar7 != 0);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xfe);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x100);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x101);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  aiStack_14[0] = 0x18;
  sVar1 = *(short *)(*piVar2 + 0x18);
  pcVar5 = *(code **)(*piVar2 + 0x1c);
  *puVar9 = 0;
  uVar3 = (*pcVar5)((int)sVar1 + (int)piVar2,0x102,3,3);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x103);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x106);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x10f);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x110);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x111);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x112);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x115);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x116);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x117);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x11a);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x11b);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x11c);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x128);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x131);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x132);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x14a);
  *(uint32_t *)(param_1 + 0x134) = uVar3;
  forward_two_params_to_helper_104a874a(iVar4, __frv_reg_unset(5));
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x8769);
  *(uint32_t *)(param_1 + 0x138) = uVar3;
  forward_two_params_to_helper_104a874a(iVar4, __frv_reg_unset(5));
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xc612);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xc613);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  psVar6 = (short *)(*piVar2 + aiStack_14[0]);
  sVar1 = *psVar6;
  uVar3 = increment_callee_result_10519fe6(param_1 + 0x140);
  pcVar5 = *(code **)(psVar6 + 2);
  *puVar9 = 0;
  uVar3 = (*pcVar5)((int)sVar1 + (int)piVar2,0xc614,2,uVar3);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xc621);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xc622);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xc627);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xc628);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xc62a);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xc62b);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xc62c);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xc62e);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  sVar1 = *(short *)(*piVar2 + aiStack_14[0]);
  pcVar5 = *(code **)((short *)(*piVar2 + aiStack_14[0]) + 2);
  *puVar9 = 0;
  uVar3 = (*pcVar5)((int)sVar1 + (int)piVar2,0xc634,1,0x13000);
  *(uint32_t *)(param_1 + 0x13c) = uVar3;
  forward_two_params_to_helper_104a874a(iVar4, __frv_reg_unset(5));
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xc65a);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xc65b);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  return;
}
