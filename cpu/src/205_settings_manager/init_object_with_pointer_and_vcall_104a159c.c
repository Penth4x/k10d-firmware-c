/* @k10d init_object_with_pointer_and_vcall_104a159c @ 0x104a159c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_pointer_and_vcall_104a159c(cls_105b5d3c *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  
  param_1->field_0x4 = (uint32_t)(param_2);
  puVar3 = (uint32_t *)*param_2;
  param_1->field_0xc = (uint32_t)(puVar3);
  param_1->field_0x10 = puVar3[4];
  iVar1 = invoke_virtual_method_on_object_104a15f8(__frv_reg_unset(4));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((vtbl_entry*)(param_1->field_0x1c))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x1c))[8].adj);
  }
  return uVar2;
}
