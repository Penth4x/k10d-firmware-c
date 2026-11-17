/* @k10d check_two_conditions @ 0x103fee34
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Returns 1 if either of two helper checks on the given parameters is non-zero.
 * summary:
 *   Calls is_printable_ascii_byte(param_1, param_2) and, if that returns 0, calls
 *   check_byte_in_range(param_1, param_2). If either call yields a non-zero result, the
 *   function returns 1; otherwise it returns 0. No other side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_conditions(void *param_1,byte *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = is_printable_ascii_byte(param_1,param_2);
  if ((iVar1 != 0) || (iVar1 = check_byte_in_range(param_1,param_2), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
