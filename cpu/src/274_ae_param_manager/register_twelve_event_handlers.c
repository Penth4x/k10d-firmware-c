/* @k10d register_twelve_event_handlers @ 0x10518ee4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Copies 8 stack values into a struct and registers 12 event handlers via virtual calls.
 * summary:
 *   The function first copies 8 words from the stack into the memory region starting at
 *   param_1 + 0xd4. It then retrieves a global object pointer via
 *   get_or_init_sram_object_104a7cf2 and performs 12 virtual calls (slot 3) on that object
 *   with specific hex identifiers (0x829a through 0xa40c). The return value of each virtual
 *   call is passed to forward_two_params_to_helper_104a874a along with the address param_1
 *   + 0xb4, suggesting a pattern of registering callbacks or handlers for specific event
 *   IDs.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_twelve_event_handlers(int param_1)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int iVar5;
  
  piVar1 = (int *)get_or_init_sram_object_104a7cf2();
  iVar3 = param_1 + 0xb4;
  iVar5 = 8;
  do {
    iVar4 = iVar5 + -4;
    *(uint32_t *)(iVar4 + param_1 + 0xd4) = *(uint32_t *)(&stack0xffffffec + iVar5);
    iVar5 = iVar4;
  } while (iVar4 != 0);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x829a);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x829d);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x8822);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x8827);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x9003);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x9004);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x9204);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x9207);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x9209);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x920a);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xa217);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xa401);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xa402);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xa403);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xa405);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xa406);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xa408);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xa409);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xa40a);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xa40c);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  return;
}
