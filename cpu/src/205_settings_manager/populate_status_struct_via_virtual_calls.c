/* @k10d populate_status_struct_via_virtual_calls @ 0x1049fc92
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a header from param_1 and fills a struct with results from 18 virtual method
 *   calls on an object obtained from get_or_create_singleton_object_10516ff2.
 * summary:
 *   The function initializes a local array with param_1 and two zeros, then copies 8 bytes
 *   from this local array to offset 0x2c of the param_1 structure. It retrieves a pointer
 *   to an object via get_or_create_singleton_object_10516ff2 and invokes virtual slot 3
 *   (offset 0x24) with various integer arguments (0x100-0x132, 0x8769) and a different
 *   virtual slot (offset 0x1c) with arguments (0x102, 3, 1). Each return value is passed to
 *   forward_two_params_to_helper_104a874a, which likely stores the result into the
 *   structure at offset 0xc. The final call to forward_two_params_to_helper_104a874a is
 *   made without an argument, possibly to finalize or flush the structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_status_struct_via_virtual_calls(int param_1)

{
  short sVar1;
  int *piVar2;
  uint32_t uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t *puVar8;
  uint8_t auStack_28 [4];
  int aiStack_14 [3];
  int iVar7;
  
  puVar8 = (uint32_t *)auStack_28;
  aiStack_14[0] = param_1;
  piVar2 = (int *)get_or_create_singleton_object_10516ff2();
  aiStack_14[1] = 0;
  aiStack_14[2] = 0;
  iVar4 = aiStack_14[0] + 0xc;
  iVar7 = 8;
  do {
    iVar6 = iVar7 + -4;
    *(uint32_t *)(iVar6 + aiStack_14[0] + 0x2c) = *(uint32_t *)((int)aiStack_14 + iVar7);
    iVar7 = iVar6;
  } while (iVar6 != 0);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x100);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x101);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  sVar1 = *(short *)(*piVar2 + 0x18);
  pcVar5 = *(code **)(*piVar2 + 0x1c);
  *puVar8 = 0;
  uVar3 = (*pcVar5)((int)sVar1 + (int)piVar2,0x102,3,1);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x103);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x106);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x10f);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x110);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x111);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x112);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x115);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x116);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x117);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x11a);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x11b);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x11c);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x128);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x131);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x132);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x8769);
  *(uint32_t *)(aiStack_14[0] + 0x134) = uVar3;
  forward_two_params_to_helper_104a874a(iVar4, __frv_reg_unset(5));
  return;
}
