/* @k10d dispatch_object_handler_by_type @ 0x10396e46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_object_handler_by_type(cls_10562fec *param_1,int *param_2)

{
  uint32_t uVar1;
  
  param_1->field_0x2c = (uint32_t)(param_1);
  if (*param_2 == 7) {
    uVar1 = get_or_create_singleton_object_10396af8();
    param_1->field_0x2c = uVar1;
  }
  else if (*param_2 == 8) {
    uVar1 = (((vtbl_entry*)(param_1->field_0x0))[13].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[13].adj,0,0);
    param_1->field_0x2c = uVar1;
  }
  return param_1->field_0x2c;
}
