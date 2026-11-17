/* @k10d try_two_checks_on_pair @ 0x103fee5a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Calls two helper functions with the same arguments and returns 1 if either returns non-
 *   zero.
 * summary:
 *   The function invokes check_byte_above_0x9f and, if that returns zero, invokes
 *   check_whitespace_and_high_byte with the same two parameters. It sets the return value
 *   to 1 if either call yields a non-zero result, otherwise it returns 0. The specific
 *   roles of the two callees are unknown, so the operation is described mechanically as a
 *   two-step check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t try_two_checks_on_pair(void *param_1,byte *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = check_byte_above_0x9f(param_1,param_2);
  if ((iVar1 != 0) || (iVar1 = check_whitespace_and_high_byte((int)param_1,param_2), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
