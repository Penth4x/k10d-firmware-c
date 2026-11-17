/* @k10d send_two_word_command_pair @ 0x1053ad94
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Sends a 3-element command array and a byte-swapped 32-bit value via two sequential
 *   helper calls.
 * summary:
 *   The function constructs a 3-element array [param_2, 2, 1] and passes it to
 *   dispatch_param2_command. If that call succeeds (returns 0), it byte-swaps the 32-bit
 *   param_3 into two 16-bit stack variables and calls write_data_block_to_buffer with the
 *   same array. The callees are unnamed, so the specific protocol role is not determinable
 *   from this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int send_two_word_command_pair(void *param_1,int param_2,uint param_3)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_44 [20];
  ushort uStack_30;
  ushort uStack_2a;
  int aiStack_24 [3];
  
  aiStack_24[1] = 2;
  aiStack_24[2] = 1;
  aiStack_24[0] = param_2;
  iVar1 = dispatch_param2_command((int)param_1,aiStack_24,auStack_44);
  if (iVar1 == 0) {
    uStack_2a = (ushort)((param_3 & 0xffff) << 8) | (ushort)((param_3 & 0xffff) >> 8);
    uStack_30 = (ushort)(byte)(param_3 >> 0x18) | (ushort)((param_3 >> 0x10) << 8);
    iVar1 = write_data_block_to_buffer(param_1,aiStack_24,auStack_44);
  }
  return iVar1;
}
