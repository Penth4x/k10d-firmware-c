/* @k10d alloc_and_init_lens_fw_buffer @ 0x10546eea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int alloc_and_init_lens_fw_buffer(int param_1,int param_2,int param_3,code *param_4,code *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_6 != 0)) {
    if (param_1 == 0) {
      iVar1 = param_2 * param_3 + _DAT_80014a74/*SDRAM*/;
      if (param_5 == (code *)0x0) {
        param_1 = heap_alloc_2(iVar1);
      }
      else {
        param_1 = (*param_5)(iVar1);
      }
      if (param_1 != 0) {
        param_1 = param_1 + _DAT_80014a74/*SDRAM*/;
      }
      if (param_1 == 0) {
        return 0;
      }
    }
    *(int *)(param_1 - _DAT_80014a74/*SDRAM*/) = param_2;
  }
  if ((param_4 != (code *)0x0) && (iVar2 = 0, iVar1 = param_1, 0 < param_2)) {
    do {
      (*param_4)(iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + param_3;
    } while (iVar2 < param_2);
  }
  return param_1;
}
