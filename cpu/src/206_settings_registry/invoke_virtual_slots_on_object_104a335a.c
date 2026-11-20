/* @k10d invoke_virtual_slots_on_object_104a335a @ 0x104a335a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int invoke_virtual_slots_on_object_104a335a(int *param_1)

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
