/* @k10d copy_stack_and_dispatch_virtual_calls @ 0x104a0250
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 8 stack words to a struct offset and invokes virtual slot 3 with 9 specific
 *   integer arguments.
 * summary:
 *   The function first copies 8 32-bit values from the stack into memory at param_1 + 0x9c.
 *   It then retrieves a pointer via get_or_create_singleton_object_10516ff2 and performs 9
 *   virtual calls (slot 3) on that object, passing arguments 0x100, 0x101, 0x103, 0x11a,
 *   0x11b, 0x128, 0x201, and 0x202. The return value of each virtual call is passed to
 *   forward_two_params_to_helper_104a874a along with param_1 + 0x7c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_stack_and_dispatch_virtual_calls(int param_1)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int iVar5;
  
  piVar1 = (int *)get_or_create_singleton_object_10516ff2();
  iVar3 = param_1 + 0x7c;
  iVar5 = 8;
  do {
    iVar4 = iVar5 + -4;
    *(uint32_t *)(iVar4 + param_1 + 0x9c) = *(uint32_t *)(&stack0xffffffec + iVar5);
    iVar5 = iVar4;
  } while (iVar4 != 0);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x100);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x101);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x103);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x11a);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x11b);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x128);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x201);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,0x202);
  forward_two_params_to_helper_104a874a(iVar3,uVar2);
  return;
}
