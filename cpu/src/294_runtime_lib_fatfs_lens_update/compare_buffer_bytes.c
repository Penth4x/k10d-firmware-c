/* @k10d compare_buffer_bytes @ 0x1054532e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compare_buffer_bytes(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  while( true ) {
    iVar2 = iVar2 + 1;
    if (param_3 < 1) {
      return 0;
    }
    iVar1 = (uint)*(byte *)(iVar2 + (int)param_1) - (uint)*(byte *)(iVar2 + (int)param_2);
    if (iVar1 != 0) break;
    param_3 = param_3 + -1;
    if (*(byte *)(iVar2 + (int)param_2) == 0) {
      return 0;
    }
  }
  return iVar1;
}
