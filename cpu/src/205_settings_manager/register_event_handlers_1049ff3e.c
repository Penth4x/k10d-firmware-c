/* @k10d register_event_handlers_1049ff3e @ 0x1049ff3e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_event_handlers_1049ff3e(int param_1)

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
  piVar2 = (int *)get_or_init_sram_object_104a7cf2();
  aiStack_14[1] = 1;
  aiStack_14[2] = 0;
  iVar4 = aiStack_14[0] + 0x44;
  iVar7 = 8;
  do {
    iVar6 = iVar7 + -4;
    *(uint32_t *)(iVar6 + aiStack_14[0] + 100) = *(uint32_t *)((int)aiStack_14 + iVar7);
    iVar7 = iVar6;
  } while (iVar6 != 0);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x829a);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x829d);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x8822);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x8827);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x9003);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x9004);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x9204);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x9207);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x9209);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x920a);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  sVar1 = *(short *)(*piVar2 + 0x18);
  pcVar5 = *(code **)(*piVar2 + 0x1c);
  *puVar8 = 0;
  uVar3 = (*pcVar5)((int)sVar1 + (int)piVar2,0x927c,7,0x13000);
  *(uint32_t *)(aiStack_14[0] + 0x138) = uVar3;
  forward_two_params_to_helper_104a874a(iVar4, __frv_reg_unset(5));
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xa217);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xa302);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xa401);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xa402);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xa403);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xa405);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xa406);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xa408);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xa409);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xa40a);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xa40c);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  return;
}
