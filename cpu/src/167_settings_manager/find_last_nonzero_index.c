/* @k10d find_last_nonzero_index @ 0x10475944
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint find_last_nonzero_index(int *param_1,short param_2)

{
  int iVar1;
  
  iVar1 = (int)(short)(param_2 + -0x65);
  if (-1 < iVar1) {
    do {
      if (*(int *)(iVar1 * 4 + *param_1) != 0) {
        return iVar1 + 100U & 0xffff;
      }
      iVar1 = (int)(short)((short)iVar1 + -1);
    } while (-1 < iVar1);
  }
  return 0;
}
