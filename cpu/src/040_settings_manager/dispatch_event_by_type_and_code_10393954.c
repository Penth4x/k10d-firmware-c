/* @k10d dispatch_event_by_type_and_code_10393954 @ 0x10393954
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_event_by_type_and_code_10393954(int *param_1,int *param_2)

{
  int iVar1;
  
  param_1[0xd] = (int)param_1;
  iVar1 = *param_2;
  if (iVar1 == 3) {
    if (param_2[1] == 0x11) {
      store_value_at_offset_0x34(param_1);
    }
    else if (param_2[1] == 0xc) {
      store_result_at_offset_0x34(param_1);
    }
  }
  else if (iVar1 == 7) {
    iVar1 = get_or_create_singleton_object_10396af8();
    param_1[0xd] = iVar1;
  }
  else if (iVar1 == 8) {
    iVar1 = (**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1,0,0);
    param_1[0xd] = iVar1;
  }
  return param_1[0xd];
}
