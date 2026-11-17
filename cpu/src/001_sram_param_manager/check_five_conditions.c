/* @k10d check_five_conditions @ 0x100f0ea4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls five helper functions in sequence and returns -1 if any returns -1, otherwise 0.
 * summary:
 *   The function invokes check_status_flag_once, poll_status_until_bit5_set (twice),
 *   check_and_clear_error_flags, poll_status_with_retry_100f142a, and
 *   retry_single_operation_with_status_check. It checks the return value of each call; if
 *   any call returns -1, the function immediately returns -1 (0xffffffff). If all calls
 *   succeed (return non-negative values), it returns 0. The specific roles of the callees
 *   are unknown, so the overall purpose is a generic multi-step validation or
 *   initialization sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_five_conditions(void)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = check_status_flag_once();
  if ((((iVar1 == -1) || (iVar1 = poll_status_until_bit5_set(), iVar1 == -1)) ||
      (iVar1 = check_and_clear_error_flags(0), iVar1 == -1)) ||
     (((iVar1 = poll_status_until_bit5_set(), iVar1 == -1 || (iVar1 = poll_status_with_retry_100f142a(), iVar1 == -1)) ||
      (iVar1 = retry_single_operation_with_status_check(), iVar1 == -1)))) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
