/* @k10d get_field_at_offset_four_1042ff1c @ 0x1042ff1c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls read_struct_field_by_index_1042fe92 and returns the 32-bit value at offset 4 of
 *   the returned pointer, or 0 if the call returns 0.
 * summary:
 *   The function invokes read_struct_field_by_index_1042fe92 with two integer parameters.
 *   If the callee returns 0, this function returns 0. Otherwise, it dereferences the
 *   returned pointer plus 4 and returns that 32-bit value. The specific role of
 *   read_struct_field_by_index_1042fe92 and the data structure it returns are not provided,
 *   so the semantic meaning of the field at offset 4 cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_field_at_offset_four_1042ff1c(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = read_struct_field_by_index_1042fe92(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint32_t *)(iVar1 + 4);
  }
  return uVar2;
}
