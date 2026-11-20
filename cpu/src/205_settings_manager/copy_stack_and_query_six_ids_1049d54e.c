/* @k10d copy_stack_and_query_six_ids_1049d54e @ 0x1049d54e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies four stack words to param_1+0xd4 and calls a virtual method with six integer
 *   IDs, passing results to forward_two_params_to_helper_104a874a.
 * summary:
 *   The function first copies four 32-bit values from the stack (offsets 0x4, 0x8, 0xc,
 *   0x10 relative to the stack frame) into the memory region starting at param_1 + 0xd4. It
 *   then retrieves a pointer via get_or_create_singleton_object_10516ff2 and invokes
 *   virtual slot 4 (offset 0x24) of that object six times with IDs 0x103, 0x11a, 0x11b,
 *   0x128, 0x201, and 0x202. Each return value is passed along with param_1 + 0xb4 to
 *   forward_two_params_to_helper_104a874a. The specific camera subsystem is not
 *   identifiable from the available context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_stack_and_query_six_ids_1049d54e(int param_1)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int iVar5;
  
  piVar1 = (int *)get_or_create_singleton_object_10516ff2();
  iVar3 = param_1 + 0xb4;
  iVar5 = 8;
  do {
    iVar4 = iVar5 + -4;
    *(uint32_t *)(iVar4 + param_1 + 0xd4) = *(uint32_t *)(&stack0xffffffec + iVar5);
    iVar5 = iVar4;
  } while (iVar4 != 0);
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
