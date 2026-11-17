/* @k10d compute_range_from_two_values @ 0x10409f80
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Computes a value from two parameters via helper calls, returning zero if the second
 *   parameter is zero.
 * summary:
 *   The function calls negate_signed_integer on both param_2 and param_3 to obtain
 *   intermediate values. If param_3 is zero, it returns zero directly. Otherwise, it passes
 *   the two intermediate values to compare_version_fields and returns the result. The
 *   specific roles of the helpers and the overall subsystem are not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_range_from_two_values(void *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar1 = negate_signed_integer(param_2);
  uVar2 = negate_signed_integer(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = compare_version_fields(uVar1,uVar2);
  }
  return uVar3;
}
