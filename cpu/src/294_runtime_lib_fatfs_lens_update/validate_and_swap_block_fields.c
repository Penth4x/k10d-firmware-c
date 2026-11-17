/* @k10d validate_and_swap_block_fields @ 0x1053ac8a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int validate_and_swap_block_fields(void *param_1,int *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  uintptr_t sp;
  char acStack_2bc [18];
  uint auStack_2aa [163];
  uint uStack_1c;
  
  iVar2 = dispatch_param2_command((int)param_1,param_2,acStack_2bc);
  if (iVar2 == 0) {
    iVar2 = validate_block_sequence(acStack_2bc,param_2[2],&uStack_1c);
    if (iVar2 == 0) {
      iVar2 = param_2[2] + -1;
      if ((acStack_2bc[iVar2 * 0x20] == -0x1b) || (acStack_2bc[iVar2 * 0x20] == '\0')) {
        iVar2 = -0x38f;
      }
      else {
        *(ushort *)((int)auStack_2aa + (iVar2 * 0x10 + 3) * 2) =
             *(ushort *)((int)param_3 + 0xc) << 8 | *(ushort *)((int)param_3 + 0xc) >> 8;
        *(ushort *)(auStack_2aa + iVar2 * 8 + 1) =
             *(ushort *)((int)param_3 + 0xe) << 8 | *(ushort *)((int)param_3 + 0xe) >> 8;
        *(ushort *)(auStack_2aa + iVar2 * 8) =
             *(ushort *)((int)param_3 + 0xc) << 8 | *(ushort *)((int)param_3 + 0xc) >> 8;
        uVar1 = *(uint *)((int)param_3 + 0x10);
        *(uint *)((int)auStack_2aa + (iVar2 * 0x10 + 5) * 2) =
             uVar1 << 0x18 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18 | (uVar1 & 0xff00) << 8;
        uVar1 = *(uint *)((int)param_3 + 0x14) & 0xffff;
        *(ushort *)(auStack_2aa + iVar2 * 8 + 2) = (ushort)(uVar1 << 8) | (ushort)(uVar1 >> 8);
        *(ushort *)((int)auStack_2aa + (iVar2 * 0x10 + 1) * 2) =
             (ushort)((*(uint *)((int)param_3 + 0x14) >> 0x10) << 8) |
             (ushort)(byte)(*(uint *)((int)param_3 + 0x14) >> 0x18);
        iVar2 = write_data_block_to_buffer(param_1,param_2,acStack_2bc);
      }
    }
    else {
      iVar2 = -0x38f;
    }
  }
  return iVar2;
}
