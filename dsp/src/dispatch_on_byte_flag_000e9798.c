/* @k10d dispatch_on_byte_flag_000e9798 @ 0x000e9798
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Branches on the value of DAT_0003c219 to call one of several handler functions.
 * summary:
 *   Reads the byte at DAT_0003c219 and performs a switch-like dispatch: 0 calls
 *   FUN_000e9a62, 1 calls write_three_values_to_dat_0003c21e, 8 calls
 *   poll_status_bit_sequence twice then write_byte_to_ram_and_call_two_routines with values
 *   from _DAT_0003c21e, 9 calls poll_status_bit_sequence, FUN_000e2fc2, and FUN_000e9d46,
 *   and 10 calls update_low_address_byte_state, configure_timer_channels, and
 *   update_state_machine_flags. No other branches are present. The role of the flag and the
 *   callees is not determinable from the given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_on_byte_flag_000e9798(void)

{
  ushort uVar1;
  byte bVar2;
  
  if (DAT_0003c219 == '\0') {
    FUN_000e9a62();
  }
  else if (DAT_0003c219 == '\x01') {
    write_three_values_to_dat_0003c21e();
  }
  else if (DAT_0003c219 == '\b') {
    poll_status_bit_sequence();
    uVar1 = _DAT_0003c21e;
    poll_status_bit_sequence();
    write_byte_to_ram_and_call_two_routines(uVar1,_DAT_0003c21e);
  }
  else if (DAT_0003c219 == '\t') {
    poll_status_bit_sequence();
    bVar2 = FUN_000e2fc2(_DAT_0003c21e);
    _DAT_0003c21e = (ushort)bVar2;
    FUN_000e9d46();
  }
  else if (DAT_0003c219 == '\n') {
    update_low_address_byte_state();
    configure_timer_channels();
    update_state_machine_flags();
  }
  return;
}
