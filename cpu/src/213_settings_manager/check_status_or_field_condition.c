/* @k10d check_status_or_field_condition @ 0x104af672
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a status code from a helper, or 5 if the helper returns 0 and a struct field
 *   check fails.
 * summary:
 *   Calls dispatch_state_based_on_flag_104af61a to get a base status. If that status is 0,
 *   it inspects param_1 at offsets 0x10 and 0x14. If the int at 0x10 is not 3 or the byte
 *   at 0x14 is not 0, it overrides the return value to 5. Otherwise, it returns the
 *   original status from the helper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int check_status_or_field_condition(int param_1)

{
  int iVar1;
  
  iVar1 = dispatch_state_based_on_flag_104af61a((int *)__frv_reg_unset(4),__frv_reg_unset(5),__frv_reg_unset(6));
  if ((iVar1 == 0) && ((*(int *)(param_1 + 0x10) != 3 || (*(char *)(param_1 + 0x14) != '\0')))) {
    iVar1 = 5;
  }
  return iVar1;
}
