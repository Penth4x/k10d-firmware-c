/* @k10d compare_byte_arrays @ 0x10545108
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compare_byte_arrays(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < param_3) {
    iVar2 = 0;
    do {
      iVar1 = (uint)*(byte *)(iVar2 + (int)param_1) - (uint)*(byte *)(iVar2 + (int)param_2);
      if (param_3 < 1 || param_3 + -1 == 0) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      param_3 = param_3 + -1;
    } while (iVar1 == 0);
  }
  return iVar1;
}
