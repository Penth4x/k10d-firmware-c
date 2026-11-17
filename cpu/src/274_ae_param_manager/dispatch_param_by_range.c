/* @k10d dispatch_param_by_range @ 0x1051707a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param_by_range(uint32_t param_1,uint param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((int)param_2 < 0x100) {
    uVar1 = construct_specialized_object(param_1,param_2);
  }
  else if ((int)param_2 < 0x200) {
    uVar1 = dispatch_event_to_class_ctor(param_1,param_2);
  }
  else if ((int)param_2 < 0x300) {
    uVar1 = dispatch_param2_to_cls_constructor(param_1,param_2);
  }
  else if (((int)param_2 < 0x8000) || (0x8fff < (int)param_2)) {
    if (((int)param_2 < 0x9000) || (0x9fff < (int)param_2)) {
      if ((0xbfff < (int)param_2) && ((int)param_2 < 0xd000)) {
        uVar1 = query_status_if_magic_id(param_1,param_2);
      }
    }
    else {
      uVar1 = return_zero_stub_1051746e();
    }
  }
  else {
    uVar1 = dispatch_class_constructor_by_id_10517404(param_1,param_2);
  }
  return uVar1;
}
