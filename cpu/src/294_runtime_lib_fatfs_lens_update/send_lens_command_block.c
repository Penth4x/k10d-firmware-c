/* @k10d send_lens_command_block @ 0x1053fab4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Transmits a single command block to the lens controller with retry logic on failure.
 * summary:
 *   The function prepares a command descriptor on the stack using the block ID (param_4)
 *   and a fixed length of 1. It calls allocate_lens_fw_buffer_1053d612 to fetch data and
 *   dispatch_lens_update_step to configure the transfer, then attempts the transmission via
 *   write_buffered_data_block. If the transmission fails with error -5, it executes a
 *   recovery sequence involving merge_lens_fw_block_entry and a reconfiguration call before
 *   retrying. On success, it finalizes the operation with clear_lens_update_entry and
 *   returns the block ID in *param_5. It also writes byte-swapped values to the 0x80014a00
 *   region, likely updating status indicators.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int send_lens_command_block(void *param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_34 [8];
  uint auStack_2c [2];
  uint *puStack_24;
  uint8_t auStack_1c [4];
  
  piVar5 = (int *)auStack_34;
  uRam80014a38 = (ushort)((uint)param_2 >> 8);
  uRam80014a10 = uRam80014a38 | (ushort)(param_2 << 8);
  uRam80014a12 = uRam80014a38 | (ushort)(param_2 << 8);
  uRam80014a18 = uRam80014a38 | (ushort)(param_2 << 8);
  uRam80014a30 = uRam80014a38 | (ushort)(param_2 << 8);
  uRam80014a32 = uRam80014a38 | (ushort)(param_2 << 8);
  uRam80014a38 = uRam80014a38 | (ushort)(param_2 << 8);
  uRam80014a36 = (ushort)((uint)param_3 >> 8);
  uRam80014a0e = uRam80014a36 | (ushort)(param_3 << 8);
  uRam80014a16 = uRam80014a36 | (ushort)(param_3 << 8);
  uRam80014a2e = uRam80014a36 | (ushort)(param_3 << 8);
  uRam80014a36 = uRam80014a36 | (ushort)(param_3 << 8);
  iVar4 = 1;
  if ((*(int *)((int)param_1 + 0x48) == 4) && (param_4 == *(uint *)((int)param_1 + 0x28))) {
    uRam80014a3a = 0;
    uRam80014a34 = 0;
    piVar5 = (int *)auStack_34;
  }
  else {
    uRam80014a3a = (ushort)(param_4 >> 8) & 0xff | (ushort)((param_4 & 0xffff) << 8);
    uRam80014a34 = (ushort)(byte)(param_4 >> 0x18) | (ushort)((param_4 >> 0x10) << 8);
  }
  do {
    puStack_24 = auStack_2c;
    iVar2 = allocate_lens_fw_buffer_1053d612(param_1,1,puStack_24);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = dispatch_lens_update_step((int)param_1,auStack_2c[0],*(int *)((int)param_1 + 0x54));
    if (iVar2 != 0) {
      return iVar2;
    }
    uRam80014a1a = (ushort)((auStack_2c[0] & 0xffff) << 8) | (ushort)((auStack_2c[0] & 0xffff) >> 8)
    ;
    uRam80014a14 = (ushort)((auStack_2c[0] >> 0x10) << 8) | (ushort)(byte)(auStack_2c[0] >> 0x18);
    *piVar5 = (int)auStack_1c;
    uVar1 = auStack_2c[0];
    piVar5[1] = 1;
    iVar2 = write_buffered_data_block((int)param_1,uVar1,-0x7ffeb600,&DAT_00000040,(int *)*piVar5,
                         *(char *)((int)piVar5 + 7));
    if (iVar2 != 0) {
      if (iVar2 != -5) {
        return iVar2;
      }
      iVar3 = merge_lens_fw_block_entry(param_1,(int *)puStack_24);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = dispatch_lens_update_step((int)param_1,auStack_2c[0],*(int *)((int)param_1 + 0x50));
      if (iVar3 != 0) {
        return iVar3;
      }
      if (iVar4 == 0) {
        return -0x38a;
      }
      iVar4 = iVar4 + -1;
    }
    if (iVar2 == 0) {
      clear_lens_update_entry(param_1,auStack_2c[0]);
      *param_5 = auStack_2c[0];
      return 0;
    }
  } while( true );
}
