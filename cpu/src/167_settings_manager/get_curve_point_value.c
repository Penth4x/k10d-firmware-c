/* @k10d get_curve_point_value @ 0x10475376
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a value from a 100-point lookup table based on an index, using a cached value
 *   if the index matches.
 * summary:
 *   The function first calls get_bounded_array_element on a pointer at offset 0xc of the
 *   input structure to check validity. If valid, it compares the input index (param_2)
 *   against a cached index stored at offset 0x28 (adjusted by +100). If they match, it
 *   returns the cached value from offset 0x2a (adjusted by +100). Otherwise, it calls
 *   find_last_nonzero_index to compute the value for the given index. The +100 offset
 *   suggests the table indices or values are stored with a bias, possibly to handle signed
 *   values or a specific range.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint get_curve_point_value(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = get_bounded_array_element((int *)(param_1 + 0xc));
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_2 == ((int)*(short *)(param_1 + 0x28) + 100U & 0xffff)) {
      uVar2 = (int)*(short *)(param_1 + 0x2a) + 100U & 0xffff;
    }
    else {
      uVar2 = find_last_nonzero_index((int *)(param_1 + 0xc),param_2);
    }
  }
  return uVar2;
}
