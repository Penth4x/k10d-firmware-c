/* @k10d compute_and_store_clamped_value @ 0x000c5afc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Calculates a value from global parameters, clamps it against limits, and stores the
 *   result in global variables.
 * summary:
 *   The function retrieves parameters via helper calls and performs arithmetic on
 *   DAT_0003c562 and DAT_0003c576. It clamps the resulting value against limits obtained
 *   from FUN_000c66b0 and call_callee_with_fixed_args, with conditional adjustments based
 *   on DAT_0003c444. The final value is stored in DAT_0003c564 and DAT_0003c565, followed
 *   by calls to compute_and_store_two_byte_result, update_status_flag_bits_000c6958, and
 *   check_counter_delta_and_set_flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_and_store_clamped_value(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint32_t uVar8;
  
  iVar1 = map_state_to_index(3);
  iVar2 = compute_value_from_mode_flags(0x2a);
  iVar3 = adjust_param_by_flag(0);
  uVar4 = compute_mode_adjusted_value(DAT_0003c576);
  uVar5 = clamp_value_to_limit(DAT_0003c576,uVar4);
  iVar6 = FUN_000c5de0(0x1c);
  iVar1 = clamp_value_to_range_000c5e50((((uint)_DAT_0003c562 * iVar1 >> 3) + iVar2) - iVar3,iVar6);
  uVar7 = FUN_000c66b0(iVar1);
  if (((((int)uVar7 <= (int)uVar4) && (iVar1 = call_callee_with_fixed_args(uVar4), uVar7 = uVar4, iVar1 <= iVar6))
      && (uVar7 = FUN_000c66b0(iVar6), iVar1 = iVar6, (int)uVar7 <= (int)uVar5)) &&
     (iVar1 = call_callee_with_fixed_args(uVar5), uVar7 = uVar5, iVar1 < 0x1d)) {
    iVar1 = 0x1c;
    uVar7 = FUN_000c66b0(0x1c);
  }
  if (DAT_0003c444 == '\0') {
    uVar4 = (((int)(uint)_DAT_0003c562 >> 2) + (uint)(DAT_0003c577 >> 1)) - 0x12;
    if ((int)uVar4 < (int)(uint)DAT_0003c576) {
      uVar4 = (uint)DAT_0003c576;
    }
    if (((int)uVar4 < (int)uVar7) && (iVar1 = call_callee_with_fixed_args(uVar4), uVar7 = uVar4, iVar1 < 0x1d)) {
      iVar1 = 0x1c;
      uVar7 = FUN_000c66b0(0x1c);
    }
  }
  uVar8 = conditional_override_param2(iVar1,uVar7);
  DAT_0003c564 = conditional_param_override(uVar8,iVar1);
  DAT_0003c565 = (uint8_t)uVar8;
  if (((DAT_0003c440 == '\x06') && ((DAT_0003c3be == '\x01' || (DAT_0003c3be == '\x02')))) ||
     ((DAT_0003c440 == '\0' && ((DAT_0003c3bd == '\x01' || (DAT_0003c3bd == '\x02')))))) {
    compute_and_store_two_byte_result();
  }
  update_status_flag_bits_000c6958();
  check_counter_delta_and_set_flag(0);
  return;
}
