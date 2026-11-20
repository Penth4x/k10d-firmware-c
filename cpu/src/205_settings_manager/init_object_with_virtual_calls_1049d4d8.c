/* @k10d init_object_with_virtual_calls_1049d4d8 @ 0x1049d4d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_virtual_calls_1049d4d8(int param_1)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  int iVar4;
  
  piVar1 = (int *)get_or_init_sram_object_104a7cf2();
  iVar4 = 8;
  do {
    iVar3 = iVar4 + -4;
    *(uint32_t *)(iVar3 + param_1 + 0x9c) = *(uint32_t *)(&stack0xffffffec + iVar4);
    iVar4 = iVar3;
  } while (iVar3 != 0);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,1);
  forward_two_params_to_helper_104a874a(param_1 + 0x7c,uVar2);
  uVar2 = (((vtbl_entry*)(*piVar1))[4].fn)((int)((vtbl_entry*)(*piVar1))[4].adj + (int)piVar1,2);
  forward_two_params_to_helper_104a874a(param_1 + 0x7c,uVar2);
  return;
}
