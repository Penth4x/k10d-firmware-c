/* @k10d compute_pair_difference_10409f4a @ 0x10409f4a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Returns the result of a binary operation on two values derived from param_2 and
 *   param_3, or 0 if param_3 is zero.
 * summary:
 *   Checks if param_3 is zero; if so, returns 0. Otherwise, calls compute_log2_index on
 *   both param_2 and param_3 to obtain intermediate values, then passes them to
 *   compare_version_fields to compute the final result. The specific nature of the
 *   transformation in compute_log2_index and the operation in compare_version_fields is
 *   unknown, but the structure suggests a comparison or difference calculation between two
 *   parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_pair_difference_10409f4a(void *param_1,uint param_2,uint param_3)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = compute_log2_index(param_2);
    iVar3 = compute_log2_index(param_3);
    uVar1 = compare_version_fields(iVar2,iVar3);
  }
  return uVar1;
}
