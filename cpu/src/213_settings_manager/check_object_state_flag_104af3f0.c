/* @k10d check_object_state_flag_104af3f0 @ 0x104af3f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_object_state_flag_104af3f0(int *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1[4] == 0) {
    uVar1 = 4;
  }
  else {
    iVar2 = *(int *)(*param_1 + 4);
    iVar2 = (((vtbl_entry*)(iVar2))[9].fn)(*param_1 + (int)((vtbl_entry*)(iVar2))[9].adj);
    if ((iVar2 == 0) || (param_1[4] == 1)) {
      uVar1 = 3;
    }
  }
  return uVar1;
}
