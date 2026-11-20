/* @k10d populate_struct_from_virtual_table @ 0x104a04c4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 8 stack values into a struct and fills ~80 fields by calling a virtual getter on
 *   an object.
 * summary:
 *   The function first copies 8 words from the stack into param_1+0x11c. It then retrieves
 *   an object pointer via get_or_create_singleton_object_104a93d0 and repeatedly invokes
 *   virtual slot 3 (offset 0x24) of that object with various integer indices (0-0x5d,
 *   0x200-0x224, 0x3ff, 0x405). Each return value is passed to
 *   forward_two_params_to_helper_104a874a along with a pointer to param_1+0xfc (or +0xf0
 *   for the last few calls). Finally, it stores the last pointer value into param_1+0xf0.
 *   This appears to be a constructor or initializer that populates a large structure with
 *   data retrieved from a virtual interface.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_struct_from_virtual_table(int param_1)

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
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,1);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,2);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,3);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,4);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,5);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,6);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,7);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,8);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0xc);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0xd);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0xe);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x12);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x13);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x14);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x16);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x17);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x18);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x19);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x1a);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x1d);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x1f);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x20);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x21);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x22);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x23);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x24);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x25);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x26);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x27);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x28);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x2d);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x33);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x34);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x35);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x37);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x38);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x39);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x3d);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x3e);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x3f);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x47);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x48);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x49);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x4d);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x4f);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x50);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x53);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x54);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x55);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x56);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x57);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x58);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x59);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x5a);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x5c);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x5d);
  forward_two_params_to_helper_104a874a(iVar4,uVar2);
  iVar3 = param_1 + 0xfc;
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x62);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x200);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x201);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x205);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x206);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x207);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x208);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x209);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x20a);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x20b);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x20d);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x20e);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x20f);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x210);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x211);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x212);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x213);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x214);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x215);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x216);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x21a);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x21b);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x21c);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x21d);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x21e);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x21f);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x220);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x221);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x222);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x223);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x224);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x3ff);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x404);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x405);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  *(int *)(param_1 + 0xf0) = iVar3;
  return;
}
