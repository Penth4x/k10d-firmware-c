/* @k10d dispatch_state_transition_000dfe8e @ 0x000dfe8e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a state variable and branches to different handler sequences based on flag bits
 *   in DAT_0003c022 and DAT_0003c126.
 * summary:
 *   The function saves the current value of DAT_00000420, sets it to 6, and then executes
 *   one of two main branches depending on bit 0 of DAT_0003c022. Each branch clears
 *   specific bits in DAT_0003c023 and calls various subroutines (e.g.,
 *   update_status_flags_000e0010, read_bytes_if_enabled, dispatch_key_event) based on the
 *   state of DAT_0003c126 and other flags. It restores DAT_00000420 from the saved value
 *   before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_transition_000dfe8e(void)

{
  int iVar1;
  
  DAT_0003c042 = DAT_00000420;
  DAT_00000420 = 6;
  if ((DAT_0003c022 & 1) == 0) {
    DAT_0003c023 = DAT_0003c023 & 0xef;
    iVar1 = update_status_flags_000e0010();
    if (((iVar1 != 0) || (_DAT_0003c126 == 4)) ||
       ((_DAT_0003c126 == 2 || ((_DAT_0003c126 == 0 || ((DAT_0003c123 & 7) != 0)))))) {
      if (((DAT_0003f505 & 0x40) != 0) && ((DAT_00000484 & 3) != 2)) {
        if ((DAT_0003c021 & 0x80) != 0) {
          DAT_0000000d = DAT_0000000d | 1;
        }
        busy_wait_on_mode_flag(0x14);
        infinite_loop_000e79ec();
        DAT_0003c023 = DAT_0003c023 | 0x10;
      }
      update_state_machine_flags();
    }
    if ((_DAT_0003c126 & 0x80) == 0) {
      if (((_DAT_0003c126 & 0x20) == 0) || ((DAT_0003c128 & 0x80) == 0)) {
        if (((_DAT_0003c126 & 0x2000) != 0) && ((DAT_0003c143 & 0x40) != 0)) {
          clear_flag_and_set_bit_on_condition();
          FUN_000e06f6();
        }
      }
      else {
        read_bytes_if_enabled(0x61,(void *)&DAT_0003c12c,1);
        check_and_set_state_flag_000e01b0();
        check_two_flag_conditions_000e06a0();
      }
    }
    else {
      dispatch_key_event(0x71,(int)&DAT_0003c12d);
      check_two_state_flags_and_act();
      FUN_000e074e();
      update_status_flag_bits_000e0776();
    }
    if (((DAT_0003c023 & 0x20) != 0) || ((DAT_0003c07e & 0x20) == 0)) {
      clear_flags_when_condition_met();
    }
    if ((DAT_0003c023 & 0x10) != 0) {
      if (((DAT_0003c021 & 0x80) != 0) && ((DAT_0003f50e & 2) != 0)) {
        DAT_0000000d = DAT_0000000d & 0xfe;
      }
      DAT_00000484 = 0x78;
    }
  }
  else {
    DAT_0003c023 = DAT_0003c023 & 0xcf;
    if ((((DAT_0003ce01 & 1) == 0) || ((DAT_0003ce05 & 1) != 0)) && ((DAT_0003ce06 & 1) == 0)) {
      dispatch_status_branch();
    }
    if ((_DAT_0003c126 & 0x80) == 0) {
      if (((_DAT_0003c126 & 0x2000) == 0) || ((DAT_0003c143 & 0x40) == 0)) {
        if ((_DAT_0003c126 & 0x20) != 0) {
          read_bytes_if_enabled(0x60,(void *)&DAT_0003c12c,1);
          check_and_set_state_flag_000e01b0();
          check_two_flag_conditions_000e06a0();
        }
      }
      else {
        clear_flag_and_set_bit_on_condition();
        FUN_000e06f6();
      }
    }
    else {
      dispatch_key_event(0x70,(int)&DAT_0003c12d);
      update_status_byte_and_send_000e1b62();
      check_two_state_flags_and_act();
      FUN_000e074e();
      update_status_flag_bits_000e0776();
    }
  }
  DAT_00000420 = DAT_0003c042;
  return;
}
