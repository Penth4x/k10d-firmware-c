/* @k10d store_and_dispatch_event @ 0x000c6430
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Stores two byte parameters into global state variables and calls a dispatch function
 *   with a mode code.
 * summary:
 *   The function writes param_1 and param_2 to DAT_0003c564 and DAT_0003c565, potentially
 *   overwriting them with return values from FUN_000c66b0 or call_callee_with_fixed_args
 *   based on flags in DAT_0003c4df and range checks. It then calls
 *   check_counter_delta_and_set_flags with either 1 or 2, followed by either
 *   update_byte_from_two_callees or update_state_pointer. The specific logic branches on
 *   bit 1 and bit 2 of DAT_0003c4df and compares param_2 against values in DAT_0003c576 and
 *   DAT_0003c577.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_and_dispatch_event(uint param_1,uint param_2)

{
  uint32_t uVar1;
  uint8_t uVar2;
  byte bVar3;
  
  bVar3 = (byte)param_1;
  if ((DAT_0003c4df & 2) == 0) {
    uVar2 = (uint8_t)param_2;
    if ((DAT_0003c4df & 4) == 0) {
      if (((uint)DAT_0003c576 < (param_2 & 0xff)) && ((param_2 & 0xff) < (uint)DAT_0003c577)) {
        if ((bVar3 < 0x1d) || ((uint)DAT_0003c578 <= (param_1 & 0xff))) {
          DAT_0003c564 = bVar3;
          DAT_0003c565 = uVar2;
          uVar1 = FUN_000c66b0(param_1 & 0xff);
          DAT_0003c565 = (uint8_t)uVar1;
          check_counter_delta_and_set_flags(1);
          update_byte_from_two_callees();
        }
        else {
          DAT_0003c564 = bVar3;
          DAT_0003c565 = uVar2;
          uVar1 = FUN_000c66b0(param_1 & 0xff);
          DAT_0003c565 = (uint8_t)uVar1;
          check_counter_delta_and_set_flags(1);
          update_byte_from_two_callees();
        }
      }
      else {
        DAT_0003c564 = bVar3;
        DAT_0003c565 = uVar2;
        uVar1 = call_callee_with_fixed_args(param_2 & 0xff);
        DAT_0003c564 = (byte)uVar1;
        check_counter_delta_and_set_flags(2);
        update_state_pointer();
      }
    }
    else {
      uVar1 = call_callee_with_fixed_args(param_2);
      DAT_0003c564 = (byte)uVar1;
      DAT_0003c565 = uVar2;
      check_counter_delta_and_set_flags(2);
      update_state_pointer();
    }
  }
  else {
    uVar1 = FUN_000c66b0(param_1);
    DAT_0003c565 = (uint8_t)uVar1;
    DAT_0003c564 = bVar3;
    check_counter_delta_and_set_flags(1);
    update_byte_from_two_callees();
  }
  return;
}
