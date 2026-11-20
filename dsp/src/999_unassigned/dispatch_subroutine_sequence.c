/* @k10d dispatch_subroutine_sequence @ 0x000f2714
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls four helper functions in sequence, passing param_1 to the third and returning its
 *   result.
 * summary:
 *   The function invokes FUN_000f29e8 and wait_if_flag_is_two with no arguments, then calls
 *   toggle_bit3_and_call_helpers with param_1, capturing its return value. It then calls
 *   set_ram_flags_and_counters with no arguments before returning the value from
 *   toggle_bit3_and_call_helpers. No memory writes or register state changes are visible
 *   beyond the call sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_subroutine_sequence(uint32_t param_1)

{
  uint32_t uVar1;
  
  FUN_000f29e8();
  wait_if_flag_is_two();
  uVar1 = toggle_bit3_and_call_helpers(param_1);
  set_ram_flags_and_counters();
  return uVar1;
}
