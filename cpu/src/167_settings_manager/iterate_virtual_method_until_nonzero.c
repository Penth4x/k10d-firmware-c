/* @k10d iterate_virtual_method_until_nonzero @ 0x10476fce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int iterate_virtual_method_until_nonzero(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  param_1[2] = 0;
  uVar2 = 0;
  do {
    iVar1 = (**(code **)(*param_1 + 0x1c))((int)*(short *)(*param_1 + 0x18) + (int)param_1,uVar2);
    if (iVar1 != 0) {
      iVar1 = param_1[2];
      param_1[2] = iVar1 + 1;
      return iVar1;
    }
    uVar2 = param_1[2] + 1;
    param_1[2] = uVar2;
  } while (uVar2 < 0x10);
  return -1;
}
