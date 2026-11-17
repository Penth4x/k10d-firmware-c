/* @k10d check_and_run_state_transitions_000e6426 @ 0x000e6426
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates a complex set of bit flags in DAT_0003c0xx globals to determine if a state
 *   transition is allowed, and if so, calls a sequence of transition functions.
 * summary:
 *   The function checks multiple conditions involving bits in DAT_0003c030, DAT_0003c05d,
 *   DAT_0003c066, DAT_0003c000, DAT_0003c081, and DAT_0003c067. If the conditions are met,
 *   it conditionally calls FUN_000e786a, then unconditionally calls
 *   initialize_global_state, configure_gpio_port_bits, and clear_and_reset_flag_bytes, and
 *   returns 1. It always clears bit 1 of DAT_0003c05d before returning. The specific
 *   meaning of the flags and the callees is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_run_state_transitions_000e6426(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (((((((DAT_0003c030 & 4) == 0) || ((DAT_0003c05d & 2) != 0)) && ((DAT_0003c066 & 0x10) == 0))
       && ((DAT_0003c066 & 0x20) == 0)) ||
      (((((DAT_0003c030 & 4) == 0 && ((DAT_0003c066 & 0x10) != 0)) && ((DAT_0003c000 & 8) != 0)) &&
       ((((DAT_0003c030 & 1) == 0 || ((DAT_0003c000 & 0x10) == 0)) || ((DAT_0003c000 & 0x20) == 0)))
       ))) || ((DAT_0003c081 == '\x01' || ((DAT_0003c067 & 0x10) != 0)))) {
    if (((DAT_0003c066 & 1) == 0) && ((DAT_0003c05d & 2) == 0)) {
      FUN_000e786a();
    }
    initialize_global_state();
    configure_gpio_port_bits();
    clear_and_reset_flag_bytes();
    uVar1 = 1;
  }
  DAT_0003c05d = DAT_0003c05d & 0xfd;
  return uVar1;
}
