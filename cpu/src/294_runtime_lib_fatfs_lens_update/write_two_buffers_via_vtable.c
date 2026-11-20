/* @k10d write_two_buffers_via_vtable @ 0x1053e1b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_two_buffers_via_vtable(int param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x70);
  iVar2 = (((vtbl_entry*)(param_1))[11].fn)(*(uint32_t *)(param_1 + 0x60),param_2,1,iVar4 + 4);
  if (iVar2 == 0) {
    fill_byte_array((void *)(iVar4 + 4 + param_4),0,0x200 - param_4);
    iVar2 = (((vtbl_entry*)(param_1))[11].fn)(*(uint32_t *)(param_1 + 0x60),param_3,1,iVar4 + 4);
    uVar3 = 0;
    if (iVar2 != 0) {
      if (iVar2 == -1000) {
        puVar1 = (ushort *)(*(int *)(param_1 + 100) + 0xe);
        *puVar1 = *puVar1 | 1;
        uVar3 = 0xfffffffa;
      }
      else {
        uVar3 = 0xfffffffb;
      }
    }
  }
  else if (iVar2 == -1000) {
    puVar1 = (ushort *)(*(int *)(param_1 + 100) + 0xe);
    *puVar1 = *puVar1 | 1;
    uVar3 = 0xfffffffa;
  }
  else {
    uVar3 = 0xfffffffb;
  }
  return uVar3;
}
