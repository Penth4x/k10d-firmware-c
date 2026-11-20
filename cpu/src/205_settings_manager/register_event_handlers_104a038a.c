/* @k10d register_event_handlers_104a038a @ 0x104a038a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_event_handlers_104a038a(int param_1)

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
