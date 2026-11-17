/* @k10d compute_division_quotient_remainder @ 0x10409ea4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Computes the quotient and remainder of a division using helper functions and stores
 *   results in output pointers.
 * summary:
 *   The function takes two parameters (param_2 and param_3) and processes them through a
 *   series of helper calls (compute_log2_index, compute_float_division,
 *   compare_version_fields, count_leading_zeros). The final result is split into a quotient
 *   (divided by 10) and a remainder (modulo 10), which are stored in the memory locations
 *   pointed to by param_4 and param_5 respectively. If param_3 is zero, the result is
 *   initialized to zero before the final split.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_division_quotient_remainder(void *param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = compute_log2_index(param_2);
    uVar2 = compute_float_division(iVar1,0x41200000);
    iVar1 = compute_log2_index(param_3);
    uVar3 = compare_version_fields(uVar2,iVar1);
  }
  uVar3 = count_leading_zeros(uVar3);
  *param_4 = uVar3 / 10;
  *param_5 = uVar3 % 10;
  return;
}
