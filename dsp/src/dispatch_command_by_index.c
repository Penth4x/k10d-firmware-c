/* @k10d dispatch_command_by_index @ 0x000db2c6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Dispatches to one of thirteen sub-functions based on the value of param_1.
 * summary:
 *   The function acts as a switch dispatcher, calling a specific callee for each case from
 *   0 to 12. For cases 1, 2, and 8, it masks the return value of the callee to 16 bits. For
 *   cases 3 and 4, it calls a function and then returns the value of a specific global data
 *   pointer. The other cases simply call their respective functions and return 0 or the
 *   callee's return value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_command_by_index(uint32_t param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
    FUN_000db338();
    break;
  case 1:
    uVar1 = FUN_000db802();
    uVar1 = uVar1 & 0xffff;
    break;
  case 2:
    uVar1 = update_state_flag_and_dispatch_000db35a();
    uVar1 = uVar1 & 0xffff;
    break;
  case 3:
    read_and_classify_two_samples();
    uVar1 = (uint)DAT_0003c19a;
    break;
  case 4:
    FUN_000db604();
    uVar1 = (uint)DAT_0003c199;
    break;
  case 5:
    set_flag_bit3_clear_counter();
    break;
  case 6:
    toggle_bit7_and_check_state();
    break;
  case 7:
    clear_flag_and_reset_state();
    break;
  case 8:
    uVar1 = set_flag_and_call_helper_000db7a8();
    uVar1 = uVar1 & 0xffff;
    break;
  case 9:
    repeat_two_byte_sequence_ten_times();
    break;
  case 10:
    FUN_000dba0a();
    break;
  case 0xb:
    uVar1 = poll_until_flag_or_timeout();
    break;
  case 0xc:
    poll_flag_in_loop();
  }
  return uVar1;
}
