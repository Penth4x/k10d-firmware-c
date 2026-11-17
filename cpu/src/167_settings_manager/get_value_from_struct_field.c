/* @k10d get_value_from_struct_field @ 0x10475336
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a 16-bit value from a struct based on a parameter match or a helper lookup.
 * summary:
 *   The function first calls get_bounded_array_element on a pointer offset by 0xc from
 *   param_1. If the result is non-zero, it checks if param_2 matches the value at offset
 *   0x2a (plus 100). If it matches, it returns the value at offset 0x28 (plus 100).
 *   Otherwise, it calls find_first_nonzero_in_table with the offset pointer and param_2,
 *   returning that result. If the initial check fails, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint get_value_from_struct_field(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = get_bounded_array_element((int *)(param_1 + 0xc));
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_2 == ((int)*(short *)(param_1 + 0x2a) + 100U & 0xffff)) {
      uVar2 = (int)*(short *)(param_1 + 0x28) + 100U & 0xffff;
    }
    else {
      uVar2 = find_first_nonzero_in_table((int *)(param_1 + 0xc),param_2);
    }
  }
  return uVar2;
}
