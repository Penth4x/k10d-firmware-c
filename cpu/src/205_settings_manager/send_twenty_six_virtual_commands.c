/* @k10d send_twenty_six_virtual_commands @ 0x1049e58e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a local struct and sends a sequence of 26 virtual method calls to an object
 *   retrieved from a global.
 * summary:
 *   The function retrieves an object pointer via get_or_init_sram_object_104a7cf2 and
 *   initializes a local 12-byte structure on the stack. It then invokes virtual slot 2
 *   (offset 0x24) of the object 26 times with specific integer arguments (ranging from
 *   0x829a to 0xa40c), passing the result of each call to
 *   forward_two_params_to_helper_104a874a along with a pointer derived from param_1. It
 *   also performs one call to virtual slot 1 (offset 0x1c) with arguments 0x927c and 7,
 *   storing the result at param_1 + 0x13c. The specific integer arguments suggest a
 *   sequence of configuration or status queries, but the exact subsystem is not
 *   identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_twenty_six_virtual_commands(int param_1)

{
  short sVar1;
  code *pcVar2;
  int *piVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t *puVar8;
  uint8_t auStack_28 [4];
  uint32_t auStack_14 [3];
  int iVar7;
  
  puVar8 = (uint32_t *)auStack_28;
  piVar3 = (int *)get_or_init_sram_object_104a7cf2();
  auStack_14[1] = 1;
  auStack_14[0] = 0;
  auStack_14[2] = 0;
  iVar5 = param_1 + 0x44;
  iVar7 = 8;
  do {
    iVar6 = iVar7 + -4;
    *(uint32_t *)(iVar6 + param_1 + 100) = *(uint32_t *)((int)auStack_14 + iVar7);
    iVar7 = iVar6;
  } while (iVar6 != 0);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x829a);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x829d);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x8822);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x8827);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x9000);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x9003);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x9004);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x9101);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x9204);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x9207);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x9209);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0x920a);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = *(uint32_t *)(param_1 + 0x24c);
  sVar1 = *(short *)(*piVar3 + 0x18);
  pcVar2 = *(code **)(*piVar3 + 0x1c);
  *puVar8 = auStack_14[0];
  uVar4 = (*pcVar2)((int)sVar1 + (int)piVar3,0x927c,7,uVar4);
  *(uint32_t *)(param_1 + 0x13c) = uVar4;
  forward_two_params_to_helper_104a874a(iVar5, __frv_reg_unset(5));
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa000);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa001);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa002);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa003);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa005);
  *(uint32_t *)(param_1 + 0x138) = uVar4;
  forward_two_params_to_helper_104a874a(iVar5, __frv_reg_unset(5));
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa217);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa300);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa301);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa401);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa402);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa403);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa405);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa406);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa408);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa409);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa40a);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  uVar4 = (((vtbl_entry*)(*piVar3))[4].fn)((int)((vtbl_entry*)(*piVar3))[4].adj + (int)piVar3,0xa40c);
  forward_two_params_to_helper_104a874a(iVar5,uVar4);
  return;
}
