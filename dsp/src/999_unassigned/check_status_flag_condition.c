/* @k10d check_status_flag_condition @ 0x000e6ad2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns 1 if any of three global status bits are set or a helper function returns 1,
 *   else 0.
 * summary:
 *   The function checks bit 2 of DAT_0003c000, bit 2 of DAT_00000001, and bit 1 of
 *   DAT_0003c021. If any are set, it returns 1. Otherwise, it calls
 *   check_and_clear_state_flags_000e6ca2 and returns 1 if that function returns 1, else 0.
 *   The specific meaning of the global variables and the helper function is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_status_flag_condition(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if (((((DAT_0003c000 & 4) != 0) || ((DAT_00000001 & 4) != 0)) || ((DAT_0003c021 & 2) != 0)) ||
     (iVar1 = check_and_clear_state_flags_000e6ca2(), iVar1 == 1)) {
    uVar2 = 1;
  }
  return uVar2;
}
