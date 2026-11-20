/* @k10d dispatch_object_event_by_type_10397436 @ 0x10397436
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_object_event_by_type_10397436(cls_10563098 *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  param_1->field_0x44 = (uint32_t)(param_1);
  iVar1 = *param_2;
  if (iVar1 == 3) {
    if (param_2[1] == 0x11) {
      store_result_at_offset_0x44(param_1);
    }
  }
  else if (iVar1 == 7) {
    uVar2 = get_or_create_singleton_object_10396af8();
    param_1->field_0x44 = uVar2;
  }
  else if (iVar1 == 8) {
    uVar2 = (((vtbl_entry*)(param_1->field_0x0))[13].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[13].adj,0,0);
    param_1->field_0x44 = uVar2;
  }
  return param_1->field_0x44;
}
