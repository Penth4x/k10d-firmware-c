/* @k10d init_object_with_three_refs_1049a906 @ 0x1049a906
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_three_refs_1049a906(cls_105b573c *param_1)

{
  int iVar1;
  int iVar2;
  
  alloc_pool_and_init_task((int *)&param_1->field_0x8,0x14,0x2000,4);
  iVar2 = (uintptr_t)(cls_105b56ec_new((cls_105b56ec *)0x0));
  param_1->field_0x3c = iVar2;
  (((vtbl_entry*)(*(int *)(iVar2 + 0x10)))[2].fn)(iVar2 + ((vtbl_entry*)(*(int *)(iVar2 + 0x10)))[2].adj,0);
  iVar1 = 1;
  iVar2 = 0;
  do {
    *(int *)(&param_1->field_0x24 + iVar2) = param_1->field_0x3c;
    *(int *)(&param_1->field_0x28 + iVar2) = param_1->field_0x3c;
    *(int *)(&param_1->field_0x2c + iVar2) = param_1->field_0x3c;
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + 0xc;
  } while (-1 < iVar1);
  return;
}
