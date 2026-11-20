/* @k10d write_via_virtual_interface @ 0x1053e24c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t write_via_virtual_interface(void *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar2 = 8;
    if (param_3 < 8) {
      uVar2 = param_3;
    }
    iVar1 = (((vtbl_entry*)((int)param_1))[11].fn)
                      (*(uint32_t *)((int)param_1 + 0x60),param_2,uVar2,_DAT_8005b2b0/*SDRAM*/);
    if (iVar1 != 0) break;
    param_2 = param_2 + uVar2;
    param_3 = param_3 - uVar2;
  }
  if (iVar1 == -1000) {
    *(ushort *)(*(int *)((int)param_1 + 100) + 0xe) =
         *(ushort *)(*(int *)((int)param_1 + 100) + 0xe) | 1;
    return 0xfffffffa;
  }
  return 0xfffffffb;
}
