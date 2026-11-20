/* @k10d build_buffer_with_virtual_prefix @ 0x104e3650
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int build_buffer_with_virtual_prefix(cls_105c0074 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = param_1->field_0x10;
  if (iVar1 == 0) {
    iVar2 = copy_and_clamp_byte_value((void*)(param_1->field_0x4),&iStack_c);
    iVar1 = iVar2;
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *(uint8_t *)(iVar1 + param_2) = *(uint8_t *)(iVar1 + iStack_c);
    }
  }
  else {
    iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 0x18)))[11].fn)
                      (((vtbl_entry*)(*(int *)(iVar1 + 0x18)))[11].adj + iVar1,param_2);
    iVar3 = copy_and_clamp_byte_value((void*)(param_1->field_0x4),&iStack_c);
    *(uint8_t *)(param_2 + iVar2) = 0x5c;
    iVar1 = iVar3;
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      *(uint8_t *)(iVar1 + param_2 + iVar2 + 1) = *(uint8_t *)(iVar1 + iStack_c);
    }
    iVar2 = iVar3 + 1 + iVar2;
  }
  return iVar2;
}
