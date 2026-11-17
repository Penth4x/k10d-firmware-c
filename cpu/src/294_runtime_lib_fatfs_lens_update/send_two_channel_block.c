/* @k10d send_two_channel_block @ 0x1053e2b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Sends a block of data through two virtual channel operations, handling timeout and
 *   error codes.
 * summary:
 *   The function loops param_4 times, calling two virtual methods on the object at param_1
 *   (slots at offsets 0x58 and 0x5c) to send data from param_2 and param_3. It tracks the
 *   offset in iVar1 (starting from *(param_1+0x70)) and increments it by 4 each iteration.
 *   If a call returns -1000, it sets bit 0 of a status word at *(param_1+100)+0xe and
 *   returns 0xfffffffa; other non-zero returns yield 0xfffffffb. Success returns 0 after
 *   all blocks are sent.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_two_channel_block(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x70);
  while( true ) {
    iVar2 = (**(code **)(param_1 + 0x58))(*(uint32_t *)(param_1 + 0x60),param_2,1,iVar1 + 4);
    if (iVar2 != 0) {
      if (iVar2 == -1000) {
        *(ushort *)(*(int *)(param_1 + 100) + 0xe) = *(ushort *)(*(int *)(param_1 + 100) + 0xe) | 1;
        return 0xfffffffa;
      }
      return 0xfffffffb;
    }
    iVar2 = (**(code **)(param_1 + 0x5c))(*(uint32_t *)(param_1 + 0x60),param_3,1,iVar1 + 4);
    if (iVar2 != 0) break;
    param_2 = param_2 + 1;
    param_4 = param_4 + -1;
    param_3 = param_3 + 1;
    if (param_4 == 0) {
      return 0;
    }
  }
  if (iVar2 == -1000) {
    *(ushort *)(*(int *)(param_1 + 100) + 0xe) = *(ushort *)(*(int *)(param_1 + 100) + 0xe) | 1;
    return 0xfffffffa;
  }
  return 0xfffffffb;
}
