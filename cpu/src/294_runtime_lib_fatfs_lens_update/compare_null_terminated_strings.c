/* @k10d compare_null_terminated_strings @ 0x105452da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compare_null_terminated_strings(void *param_1,void *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    pbVar1 = (byte *)(iVar3 + (int)param_2);
    iVar2 = (uint)*(byte *)(iVar3 + (int)param_1) - (uint)*pbVar1;
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar3 = iVar3 + 1;
  } while (*pbVar1 != 0);
  return 0;
}
