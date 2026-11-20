/* @k10d copy_stack_and_query_six_ids_1049ea1e @ 0x1049ea1e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies four stack words to a struct offset and queries six integer IDs from a virtual
 *   object.
 * summary:
 *   The function first copies four 32-bit values from the stack into the memory region
 *   starting at param_1 + 0xd4. It then retrieves a pointer to an object via
 *   get_or_create_singleton_object_10516ff2 and invokes virtual slot 3 (offset 0x24) six
 *   times with integer arguments 0x103, 0x11a, 0x11b, 0x128, 0x201, and 0x202. The return
 *   value of each virtual call is passed to forward_two_params_to_helper_104a874a along
 *   with the address param_1 + 0xb4. The specific subsystem is not identifiable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_stack_and_query_six_ids_1049ea1e(int param_1)

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
