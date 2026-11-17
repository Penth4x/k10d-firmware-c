/* @k10d dispatch_state_change_request @ 0x000cb886
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Processes a state change request based on the input parameter and updates internal
 *   status flags.
 * summary:
 *   The function branches on param_1 to handle specific state transitions (values 8, 9,
 *   0xa, 0xb). It modifies global status flags at DAT_0003ce06 and DAT_0003ce08, calls
 *   various initialization or update routines (e.g., compute_and_dispatch_adjusted_value,
 *   check_and_clear_state_flags_000ce88c), and finally calls
 *   poll_event_and_dispatch_000cbe84 to apply the state change, returning true if the
 *   operation succeeds (return value 0).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_state_change_request(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 1;
  if (param_1 == 10) {
    DAT_0003ce08 = DAT_0003ce08 & 0xdf;
    DAT_0003ce01 = DAT_0003ce01 & 0x7f;
    if ((DAT_0003ce06 & 0x10) == 0) {
      compute_and_dispatch_adjusted_value();
      FUN_000cd58c();
      DAT_0003ce06 = DAT_0003ce06 | 0x10;
      set_flag_bits_in_dat_0003ce00();
    }
    check_and_clear_state_flags_000ce88c();
  }
  else if (param_1 != 0xb) {
    if (param_1 == 8) {
      clear_state_flags_and_call_initializers();
      clear_bit1_of_dat_0003ce01();
      clear_bit_and_dispatch_state();
    }
    else if (param_1 != 9) goto LAB_000cb936;
    DAT_0003ce06 = DAT_0003ce06 | 2;
    if ((((DAT_0003f283 & 0x10) == 0) && ((DAT_0003c127 & 0x20) != 0)) &&
       ((DAT_0003c128 & 0x80) == 0)) {
      read_bytes_if_enabled(0x60,(void *)&DAT_0003c12c,1);
      wait_for_bit4_flag();
    }
    if ((DAT_000000ed & 0x40) == 0) {
      clear_and_set_status_flags_000cb73c(2);
      uVar2 = 0;
    }
    goto LAB_000cb936;
  }
  update_ce06_status_flags(-1 < (int)((uint)DAT_0003ce08 << 0x1b));
  DAT_0003ce06 = DAT_0003ce06 | 2;
  uVar2 = 2;
LAB_000cb936:
  iVar1 = poll_event_and_dispatch_000cbe84(1,uVar2);
  return iVar1 == 0;
}
