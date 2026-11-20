/* @k10d invoke_virtual_on_range_items_10493858 @ 0x10493858
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_on_range_items_10493858(cls_105b4dac *param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  invoke_virtual_method_on_range_10494388((cls_105b48dc *)param_1,param_2);
  piVar1 = *(int **)&param_1->field_0x48;
  if ((uint32_t)(piVar1) != param_1->field_0x4c) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      (((vtbl_entry*)(iVar2))[21].fn)(*piVar1 + (int)((vtbl_entry*)(iVar2))[21].adj,param_2);
      piVar1 = piVar1 + 1;
    } while ((uint32_t)(piVar1) != param_1->field_0x4c);
  }
  return;
}
