/* @k10d check_and_run_shutdown_sequence @ 0x000e64ae
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks status flags and, if active, executes a sequence of cleanup calls before
 *   returning a status code.
 * summary:
 *   The function evaluates three conditions: bit 2 of DAT_0003c030, the return value of
 *   check_and_set_state_flag_000e6376, and bit 6 of DAT_0003c066. If any condition is true,
 *   it calls a series of functions (clear_flag_bits_in_globals_000e5f86,
 *   clear_flag_4_and_call_helper, FUN_000db802, etc.) that appear to perform system cleanup
 *   or state transitions. It returns 2 if the sequence was executed, or 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_run_shutdown_sequence(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if ((((DAT_0003c030 & 4) != 0) || (iVar1 = check_and_set_state_flag_000e6376(), iVar1 != 0)) ||
     ((DAT_0003c066 & 0x40) != 0)) {
    clear_flag_bits_in_globals_000e5f86();
    clear_flag_4_and_call_helper();
    FUN_000db802();
    if ((DAT_0003c030 & 4) != 0) {
      dispatch_pending_status_flags();
    }
    update_low_three_bits_if_flag_set(0);
    update_low_nibble_if_flags_set(0);
    call_four_unnamed_helpers();
    configure_gpio_port_bits();
    initialize_global_state();
    clear_status_flag_bits_000e6514();
    uVar2 = 2;
  }
  return uVar2;
}
