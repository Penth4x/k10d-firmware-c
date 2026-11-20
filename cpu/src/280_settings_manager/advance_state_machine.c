/* @k10d advance_state_machine @ 0x10521d78
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int advance_state_machine(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1[1] == 3) {
    if (*param_1 == param_2) {
      param_1[1] = 4;
      iVar1 = (((vtbl_entry*)(param_1[3]))[13].fn)((int)((vtbl_entry*)(param_1[3]))[13].adj + (int)param_1);
    }
  }
  else if ((param_1[1] == 2) &&
          (iVar1 = (((vtbl_entry*)(param_1[3]))[10].fn)
                             ((int)((vtbl_entry*)(param_1[3]))[10].adj + (int)param_1,param_2,0),
          iVar1 != 0)) {
    param_1[1] = 4;
  }
  return iVar1;
}
