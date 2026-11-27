/* @k10d iterate_and_count_successes @ 0x10476dc0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Loops over a range of indices, calling a helper for each and counting how many return
 *   non-zero.
 * summary:
 *   Reads a 16-bit count from param_1+0x10 and iterates from 0 to param_2 inclusive. For
 *   each index, it calls read_bounded_array_element_10477358 with param_1+0xc and the
 *   index, accumulating a success count. Stores the final count in *param_3 and returns 1
 *   if the initial check passed, else 0. The specific role of
 *   read_bounded_array_element_10477358 is unknown, so the subsystem is indeterminate.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_and_count_successes(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar1 = read_bounded_array_element_10477358((uint32_t)param_1, (uint32_t)param_2);
  iVar4 = 0;
  if (iVar1 != 0) {
    for (uVar3 = (uint)*(ushort *)(param_1 + 0x10); (int)uVar3 <= param_2;
        uVar3 = uVar3 + 1 & 0xffff) {
      iVar1 = read_bounded_array_element_10477358(param_1 + 0xc,uVar3);
      iVar4 = iVar4 + (uint)(iVar1 != 0);
    }
    uVar2 = 1;
    *param_3 = iVar4;
  }
  return uVar2;
}
