/* @k10d iterate_vtable_call_on_range_1049343a @ 0x1049343a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 197_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_vtable_call_on_range_1049343a(cls_105b4dac *param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)0x10494170/*ROM*/)();
  piVar1 = *(int **)&param_1->field_0x48;
  if ((uint32_t)(piVar1) != param_1->field_0x4c) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      (((vtbl_entry*)(iVar2))[12].fn)(*piVar1 + (int)((vtbl_entry*)(iVar2))[12].adj,param_2);
      piVar1 = piVar1 + 1;
    } while ((uint32_t)(piVar1) != param_1->field_0x4c);
  }
  return;
}
