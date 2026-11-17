/* @k10d poll_flag_until_timeout @ 0x104753e2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Polls a status flag via a callee until it clears or a 16-bit timeout counter expires.
 * summary:
 *   The function first checks the status returned by get_bounded_array_element on the
 *   object at param_1+0xc. If non-zero, it enters a loop that increments a 16-bit counter
 *   starting from *(short*)(param_1+0x28)+100, re-polling get_bounded_array_element each
 *   iteration until the counter exceeds param_2. It counts how many times the flag was non-
 *   zero and stores that count in *param_3. Returns 1 if the polling loop executed, 0
 *   otherwise. The specific hardware or subsystem being polled is not identifiable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_flag_until_timeout(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar2 = get_bounded_array_element((int *)(param_1 + 0xc));
  iVar4 = 0;
  if (iVar2 != 0) {
    for (uVar1 = (int)*(short *)(param_1 + 0x28) + 100; (int)(uVar1 & 0xffff) <= param_2;
        uVar1 = (uVar1 & 0xffff) + 1) {
      iVar2 = get_bounded_array_element((int *)(param_1 + 0xc));
      iVar4 = iVar4 + (uint)(iVar2 != 0);
    }
    uVar3 = 1;
    *param_3 = iVar4;
  }
  return uVar3;
}
