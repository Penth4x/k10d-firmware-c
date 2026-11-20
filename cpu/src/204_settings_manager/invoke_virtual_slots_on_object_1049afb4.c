/* @k10d invoke_virtual_slots_on_object_1049afb4 @ 0x1049afb4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int invoke_virtual_slots_on_object_1049afb4(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    iVar1 = (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1,0);
    if ((iVar1 == 0) ||
       (iVar1 = (((vtbl_entry*)(*param_1))[3].fn)((int)((vtbl_entry*)(*param_1))[3].adj + (int)param_1,0),
       iVar1 == 0)) {
      return 0;
    }
    (((vtbl_entry*)(*param_1))[5].fn)((int)((vtbl_entry*)(*param_1))[5].adj + (int)param_1);
  }
  return param_1[1];
}
