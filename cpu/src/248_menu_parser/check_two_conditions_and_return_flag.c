/* @k10d check_two_conditions_and_return_flag @ 0x104de56e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions with the given parameters and returns 1 only if both
 *   succeed, otherwise 0.
 * summary:
 *   The function first calls retry_operation_until_success_104de540 with param_1 and
 *   param_2. If that returns non-zero, it then calls validate_and_copy_string with param_2
 *   and param_3. It returns 1 if both calls return non-zero, and 0 if either fails. The
 *   specific roles of the callees are unknown, so the operation is described mechanically
 *   as a two-step conditional check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_conditions_and_return_flag(int *param_1,void *param_2,char *param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = retry_operation_until_success_104de540(param_1,param_2);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = validate_and_copy_string(param_2,param_3);
    uVar1 = 1;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
