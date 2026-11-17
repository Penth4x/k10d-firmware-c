/* @k10d dispatch_mode_update_request_10507fb0 @ 0x10507fb0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Routes a mode change request based on the value in param_2, calling a handler for mode
 *   1.
 * summary:
 *   Checks the integer pointed to by param_2. If it is 0, returns 0. If it is 1, calculates
 *   an offset into a structure at param_1 (using a count at offset 0x8c) and calls an
 *   unknown function at 0x10507092 with the calculated address and the second element of
 *   param_2. Returns 1 for all other cases. The caller is a virtual method, suggesting this
 *   is part of an object-oriented state machine or event handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_update_request_10507fb0(int param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 1;
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else if (*param_2 == 1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x8c) < 2) {
      iVar1 = param_1 + 0x24 + *(int *)(param_1 + 0x8c) * 0x34;
    }
    (*(code *)0x10507092/*ROM*/)(iVar1 + 0x1c,param_2[1]);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
