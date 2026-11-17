/* @k10d populate_event_handler_table @ 0x105188ce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Fills a 16-entry table at param_1+0x64 with results of virtual calls using a fixed list
 *   of event IDs.
 * summary:
 *   The function initializes a local array and copies it to param_1+0x64. It then iterates
 *   through a hardcoded list of approximately 25 event IDs (e.g., 0xfe, 0x100, 0xc617). For
 *   each ID, it invokes a virtual method (slot 4) on an object obtained from
 *   get_or_init_singleton_object_10517512 and passes the result to
 *   forward_two_params_to_helper_104a874a, which likely stores it in the table at
 *   param_1+0x44. Two specific IDs (0x102 and 0x828e) use a different virtual slot (slot 3)
 *   with additional arguments. This appears to be a setup routine for an event dispatch or
 *   handler registration system.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_event_handler_table(int param_1)

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
  piVar2 = (int *)get_or_init_singleton_object_10517512();
  aiStack_14[1] = 0;
  aiStack_14[2] = 1;
  iVar4 = param_1 + 0x44;
  iVar7 = 8;
  do {
    iVar6 = iVar7 + -4;
    *(uint32_t *)(iVar6 + param_1 + 100) = *(uint32_t *)((int)aiStack_14 + iVar7);
    iVar7 = iVar6;
  } while (iVar6 != 0);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0xfe);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x100);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x101);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  aiStack_14[0] = 0x18;
  sVar1 = *(short *)(*piVar2 + 0x18);
  pcVar5 = *(code **)(*piVar2 + 0x1c);
  *puVar8 = 0;
  uVar3 = (*pcVar5)((int)sVar1 + (int)piVar2,0x102,3,1);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x103);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x106);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x111);
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
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0x828d);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  sVar1 = *(short *)(*piVar2 + aiStack_14[0]);
  pcVar5 = *(code **)((short *)(*piVar2 + aiStack_14[0]) + 2);
  *puVar8 = 0;
  uVar3 = (*pcVar5)((int)sVar1 + (int)piVar2,0x828e,1,4);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0xc617);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0xc619);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0xc61a);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0xc61d);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0xc61e);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0xc61f);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0xc620);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0xc62d);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (**(code **)(*piVar2 + 0x24))((int)*(short *)(*piVar2 + 0x20) + (int)piVar2,0xc632);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  return;
}
