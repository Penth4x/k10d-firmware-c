/* @k10d copy_virtual_values_to_buffer_1049d648 @ 0x1049d648
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 8 stack values to param_1+0x11c and writes ~60 virtual object values to
 *   param_1+0xfc via forward_two_params_to_helper_104a874a.
 * summary:
 *   The function first copies 8 words from the stack to the memory region at param_1+0x11c.
 *   It then retrieves an object pointer from get_or_create_singleton_object_104a93d0 and
 *   iterates through a hardcoded list of virtual method indices (slot 2, offset 0x24). For
 *   each index, it calls the virtual method and passes the result to
 *   forward_two_params_to_helper_104a874a along with the base address param_1+0xfc. This
 *   appears to be a serialization or state-snapshot operation for a complex object
 *   structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_virtual_values_to_buffer_1049d648(int param_1)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  
  piVar1 = (int *)get_or_create_singleton_object_104a93d0();
  iVar4 = param_1 + 0xfc;
  iVar3 = 8;
  do {
    iVar5 = iVar3 + -4;
    *(uint32_t *)(iVar5 + param_1 + 0x11c) = *(uint32_t *)(&stack0xffffffec + iVar3);
    iVar3 = iVar5;
  } while (iVar5 != 0);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,1);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,2);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,3);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,4);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,5);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,6);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,7);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,8);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xc);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xd);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0xe);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x12);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x13);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x14);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x16);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x17);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x18);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x19);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x1a);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x1d);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x1f);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x20);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x21);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x22);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x23);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x24);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x25);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x26);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x27);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x28);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x2d);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x32);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x33);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x34);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x37);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x3d);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x3e);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x3f);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x40);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x41);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x47);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x48);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x49);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x4d);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x4f);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x50);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x5c);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x5d);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x62);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x200);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x201);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x205);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x206);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x207);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x208);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x209);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  iVar3 = param_1 + 0xfc;
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x20a);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x20b);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x20d);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x20e);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x20f);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x210);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x211);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x212);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x213);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x214);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x215);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x216);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x21f);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x222);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,0x3ff);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  *(int *)(param_1 + 0xf0) = iVar3;
  return;
}
