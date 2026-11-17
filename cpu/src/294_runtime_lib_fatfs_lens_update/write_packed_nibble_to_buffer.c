/* @k10d write_packed_nibble_to_buffer @ 0x1053b7e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_packed_nibble_to_buffer(uint32_t param_1,void *param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)param_2 + 0x24);
  *(uint32_t *)(iVar1 + 0xc) = 1;
  iVar2 = *(int *)(iVar1 + 8);
  iVar1 = param_3 + (param_3 >> 1);
  if ((param_3 & 1) == 0) {
    *(char *)(iVar1 + iVar2) = (char)param_4;
    *(byte *)(iVar1 + 1 + iVar2) = *(byte *)(iVar1 + 1 + iVar2) & 0xf0 | (byte)(param_4 >> 8) & 0xf;
  }
  else {
    *(byte *)(iVar1 + iVar2) = *(byte *)(iVar1 + iVar2) & 0xf | (byte)(param_4 << 4);
    *(char *)(iVar1 + 1 + iVar2) = (char)(param_4 >> 4);
  }
  return 0;
}
