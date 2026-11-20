/* @k10d poll_virtual_method_until_nonzero @ 0x10477018
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_virtual_method_until_nonzero(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[2];
  while( true ) {
    if (0xf < uVar2) {
      return -1;
    }
    iVar1 = (((vtbl_entry*)(*param_1))[3].fn)((int)((vtbl_entry*)(*param_1))[3].adj + (int)param_1);
    if (iVar1 != 0) break;
    uVar2 = param_1[2] + 1;
    param_1[2] = uVar2;
  }
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  return iVar1;
}
