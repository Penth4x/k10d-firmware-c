/* @k10d dispatch_by_param_range @ 0x104a7dac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_by_param_range(cls_105b69b0 *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x1000) {
    uVar1 = dispatch_class_constructor_by_id_104a7e56((uint32_t)param_1,param_2);
  }
  else if ((param_2 < 0x8000) || (0x8fff < param_2)) {
    if ((param_2 < 0x9000) || (0x9fff < param_2)) {
      if ((0x9fff < param_2) && (param_2 < 0xb000)) {
        uVar1 = dispatch_event_to_object_ctor_104a81de((uint32_t)param_1,param_2);
      }
    }
    else {
      uVar1 = dispatch_event_to_object_ctor_104a7f1c((uint32_t)param_1,param_2);
    }
  }
  else {
    uVar1 = dispatch_event_by_code_104a7e90((uint32_t)param_1,param_2);
  }
  return uVar1;
}
