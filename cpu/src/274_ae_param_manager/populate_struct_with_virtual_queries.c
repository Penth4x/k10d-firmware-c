/* @k10d populate_struct_with_virtual_queries @ 0x10518c3e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Copies 8 stack values into a struct and fills it with results from 19 virtual method
 *   calls.
 * summary:
 *   The function first copies 8 words from the stack into the memory region at
 *   param_1+0x9c. It then retrieves a pointer via get_or_init_singleton_object_10517512 and
 *   invokes virtual slot 3 (offset 0x24) of that object with a series of integer arguments
 *   (0xfe, 0x100-0x103, 0x106, 0x111, 0x115-0x117, 0x11a-0x11c, 0x128, 0x13e-0x13f,
 *   0x211-0x213). Each return value is passed to forward_two_params_to_helper_104a874a
 *   along with the address param_1+0x7c. One call uses a different virtual slot (offset
 *   0x1c) with arguments 0x102, 3, 3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_struct_with_virtual_queries(int param_1)

{
  short sVar1;
  int *piVar2;
  uint32_t uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t *puVar8;
  uint8_t auStack_24 [4];
  int iVar7;
  
  puVar8 = (uint32_t *)auStack_24;
  piVar2 = (int *)get_or_init_singleton_object_10517512();
  iVar4 = param_1 + 0x7c;
  iVar7 = 8;
  do {
    iVar6 = iVar7 + -4;
    *(uint32_t *)(iVar6 + param_1 + 0x9c) = *(uint32_t *)(&stack0xffffffec + iVar7);
    iVar7 = iVar6;
  } while (iVar6 != 0);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0xfe);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x100);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x101);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  sVar1 = *(short *)(*piVar2 + 0x18);
  pcVar5 = *(code **)(*piVar2 + 0x1c);
  *puVar8 = 0;
  uVar3 = (*pcVar5)((int)sVar1 + (int)piVar2,0x102,3,3);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x103);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x106);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x111);
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
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x13e);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x13f);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x211);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x212);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  uVar3 = (((vtbl_entry*)(*piVar2))[4].fn)((int)((vtbl_entry*)(*piVar2))[4].adj + (int)piVar2,0x213);
  forward_two_params_to_helper_104a874a(iVar4,uVar3);
  return;
}
