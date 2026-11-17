/* @k10d compute_pair_difference_10409fb6 @ 0x10409fb6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Returns the result of a binary operation on two values derived from param_2 and
 *   param_3, or zero if param_3 is zero.
 * summary:
 *   The function checks if param_3 is zero; if so, it returns 0. Otherwise, it calls
 *   negate_signed_integer on both param_2 and param_3 to obtain two intermediate values,
 *   then passes those to compare_version_fields to compute a final result. The specific
 *   nature of the transformation in negate_signed_integer and the operation in
 *   compare_version_fields is unknown, but the structure suggests a comparison or
 *   difference calculation between two parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_pair_difference_10409fb6(void *param_1,uint param_2,uint param_3)

{
  uint32_t uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = negate_signed_integer(param_2);
    uVar3 = negate_signed_integer(param_3);
    uVar1 = compare_version_fields(uVar2,uVar3);
  }
  return uVar1;
}
