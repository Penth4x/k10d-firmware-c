/* @k10d invoke_virtual_method_on_object_10427008 @ 0x10427008
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */

uint32_t invoke_virtual_method_on_object_10427008(cls_105bb314 *param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  
  piVar1 = (int *)param_1->field_0x3c;
  uVar3 = 0;
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (((vtbl_entry*)(*piVar1))[2].fn)
                        ((void *)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1)), iVar2 != 0))
  {
    iVar2 = *(int *)param_1->field_0x3c;
    uVar3 = (((vtbl_entry*)(iVar2))[3].fn)
                      ((void *)((int)param_1->field_0x3c + (int)((vtbl_entry*)(iVar2))[3].adj),
                       param_2);
  }
  return uVar3;
}
