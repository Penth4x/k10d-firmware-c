/* @k10d find_first_nonzero_in_table @ 0x1047590a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint find_first_nonzero_in_table(int *param_1,short param_2)

{
  int iVar1;
  
  iVar1 = (int)(short)(param_2 + -99);
  if (iVar1 < 900) {
    do {
      if (*(int *)(iVar1 * 4 + *param_1) != 0) {
        return iVar1 + 100U & 0xffff;
      }
      iVar1 = (int)(short)((short)iVar1 + 1);
    } while (iVar1 < 900);
  }
  return 0;
}
