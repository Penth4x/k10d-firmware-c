/* @k10d iterate_struct_array_for_nonzero @ 0x10516a26
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over an array of 12-byte structs and returns the first element's first field
 *   if the callee returns non-zero.
 * summary:
 *   The function reads a count from offset 0x7c of the input structure. It loops through an
 *   array of 12-byte elements starting at the base of the structure, calling
 *   set_flag_and_return_was_zero on each element. If set_flag_and_return_was_zero returns a
 *   non-zero value, the function returns the first 4 bytes of the current element. If the
 *   loop completes without a match, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_struct_array_for_nonzero(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    iVar3 = 0;
    do {
      iVar1 = set_flag_and_return_was_zero(param_1 + iVar3);
      if (iVar1 != 0) {
        return *(uint32_t *)(iVar2 * 0xc + param_1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 0x7c));
  }
  return 0;
}
