/* @k10d dispatch_object_event_by_type_10392f08 @ 0x10392f08
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_object_event_by_type_10392f08(int *param_1,int *param_2)

{
  int iVar1;
  
  param_1[0x3c] = (int)param_1;
  iVar1 = *param_2;
  if (iVar1 == 3) {
    iVar1 = param_2[1];
    if (iVar1 == 0x11) {
      dispatch_on_four_status_codes(param_1);
    }
    else if (iVar1 == 0xc) {
      store_value_if_status_in_set(param_1);
    }
    else if (iVar1 == 0xd) {
      dispatch_on_status_code(param_1);
    }
  }
  else if (iVar1 == 7) {
    iVar1 = get_or_create_singleton_object_10396af8();
    param_1[0x3c] = iVar1;
  }
  else if (iVar1 == 8) {
    iVar1 = (**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1,0,0);
    param_1[0x3c] = iVar1;
  }
  return param_1[0x3c];
}
