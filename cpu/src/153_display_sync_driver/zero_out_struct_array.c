/* @k10d zero_out_struct_array @ 0x1046c7fe
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Zeroes 132 consecutive 32-bit words starting at param_1+8.
 * summary:
 *   The function takes a base pointer in param_1, offsets it by 8, and then loops 132 times
 *   (0x84) writing four zeroed 32-bit words per iteration. This clears a total of 2112
 *   bytes (0x840) of memory. No callees are invoked, and the specific data structure being
 *   cleared is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_out_struct_array(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x84;
  iVar1 = 0;
  param_1 = param_1 + 8;
  do {
    *(uint32_t *)(iVar1 + param_1) = 0;
    *(uint32_t *)(iVar1 + 4 + param_1) = 0;
    *(uint32_t *)(iVar1 + 8 + param_1) = 0;
    *(uint32_t *)(param_1 + iVar1 + 0xc) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x10;
  } while (-1 < iVar2);
  return;
}
