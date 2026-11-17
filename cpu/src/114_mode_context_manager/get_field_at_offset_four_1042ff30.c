/* @k10d get_field_at_offset_four_1042ff30 @ 0x1042ff30
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls a lookup function and returns the 4-byte value at offset 4 of the returned
 *   pointer, or 0 if the lookup fails.
 * summary:
 *   Invokes read_struct_field_by_index_1042fea4 with the two input parameters. If that call
 *   returns 0, this function returns 0. Otherwise it dereferences the returned pointer plus
 *   4 and returns that word. No other side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_field_at_offset_four_1042ff30(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = read_struct_field_by_index_1042fea4(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint32_t *)(iVar1 + 4);
  }
  return uVar2;
}
