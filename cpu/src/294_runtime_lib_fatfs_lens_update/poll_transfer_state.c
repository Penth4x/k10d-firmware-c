/* @k10d poll_transfer_state @ 0x10547144
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Polls a transfer state structure, advances progress counters based on callee results,
 *   and resets the structure to idle upon completion.
 * summary:
 *   The function operates on a state structure where the first field is a handle (-1
 *   indicates idle) and fields 2-5 track progress. It calls return_zero_stub_1045bc08 to
 *   check for progress; if incomplete, it updates counters and calls
 *   copy_bytes_forward_or_backward. If return_zero_stub_1045bc04 indicates completion (high
 *   word is 0), it optionally calls insert_into_sorted_block_list and resets the structure
 *   to idle. The module context suggests a firmware update, but the function itself only
 *   manages generic state transitions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_transfer_state(int *param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  
  if (*param_1 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    if ((*(byte *)(param_1 + 1) & 0x10) == 0) {
      iVar3 = param_1[4] - param_1[2];
      if (0 < iVar3) {
        iVar2 = return_zero_stub_1045bc08(*param_1,param_1[2],iVar3);
        if (iVar2 < iVar3) {
          if (iVar2 < 1) {
            if (iVar2 < 0) {
              *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 4;
            }
          }
          else {
            copy_bytes_forward_or_backward(param_1[2],param_1[2] + iVar2,iVar3 - iVar2);
            param_1[4] = param_1[4] - iVar2;
            param_1[5] = param_1[5] + iVar2;
          }
          return 0xffffffff;
        }
        param_1[4] = param_1[2];
        param_1[5] = param_1[3];
      }
    }
    uVar4 = return_zero_stub_1045bc04(*param_1);
    if ((int)((ulonglong)uVar4 >> 0x20) == 0) {
      if ((*(byte *)(param_1 + 1) & 0x20) != 0) {
        insert_into_sorted_block_list((int *)param_1[2],(int *)uVar4);
      }
      *param_1 = -1;
      param_1[4] = 0;
      param_1[2] = 0;
      *(uint8_t *)(param_1 + 1) = 0;
      param_1[3] = 0;
      param_1[5] = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}
