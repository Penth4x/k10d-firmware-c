/* @k10d check_lens_fw_id_in_list @ 0x105390ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_lens_fw_id_in_list(int param_1,int *param_2)

{
  char *pcVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (_DAT_80014980/*SDRAM*/ == 0) {
    uVar2 = 0xfffffda7;
  }
  else {
    *param_2 = param_1 << 2;
    iVar4 = 0;
    do {
      pcVar1 = (char *)(_DAT_80014980/*SDRAM*/ + iVar4 * 0x80);
      if (*pcVar1 != '\0') {
        iVar3 = *(int *)(*(int *)(pcVar1 + 100) + 0x14);
        while (iVar3 != 0) {
          bVar5 = iVar3 == *param_2;
          iVar3 = *(int *)(iVar3 + 4);
          if (bVar5) {
            return 0;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    uVar2 = 0xfffffff7;
  }
  return uVar2;
}
