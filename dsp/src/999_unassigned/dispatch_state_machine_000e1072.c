/* @k10d dispatch_state_machine_000e1072 @ 0x000e1072
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Routes execution to specific handler functions based on the value of a global state
 *   variable.
 * summary:
 *   The function checks the value of _DAT_0003c126 to determine which branch to execute. It
 *   calls different subroutines (set_flag_based_on_byte, set_state_flag_by_char,
 *   update_state_flags_on_condition, etc.) depending on whether the state is 4, 1, or other
 *   values. It also manipulates flags in DAT_0003c023 and DAT_0000000d based on bit
 *   patterns in the state variable and other globals.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_machine_000e1072(void)

{
  if (_DAT_0003c126 == 4) {
    set_flag_based_on_byte();
  }
  else if (_DAT_0003c126 == 1) {
    set_state_flag_by_char();
    set_flag_if_state_matches();
  }
  else {
    update_state_flags_on_condition();
    set_flag_if_state_matches();
    DAT_0003c023 = DAT_0003c023 & 0x7f;
    if (((((_DAT_0003c126 & 0x80) != 0) || ((_DAT_0003c126 & 0x20) != 0)) &&
        ((DAT_0003f505 & 0x80) != 0)) && ((DAT_00000484 & 3) != 2)) {
      if ((DAT_0003c021 & 0x80) != 0) {
        DAT_0000000d = DAT_0000000d | 1;
      }
      busy_wait_on_mode_flag(0x14);
      infinite_loop_000e79ec();
      DAT_0003c023 = DAT_0003c023 | 0x80;
    }
    if ((_DAT_0003c126 & 0x80) == 0) {
      if ((_DAT_0003c126 & 0x2000) == 0) {
        if ((_DAT_0003c126 & 0x20) == 0) {
          if (((_DAT_0003c126 & 0x10) == 0) && ((_DAT_0003c126 & 8) != 0)) {
            dispatch_on_state_bits();
          }
        }
        else {
          FUN_000e1268();
        }
      }
      else {
        poll_byte_until_change();
      }
    }
    else {
      FUN_000e1210();
    }
    if ((DAT_0003c023 & 0x80) != 0) {
      if (((DAT_0003c021 & 0x80) != 0) && ((DAT_0003f50e & 2) != 0)) {
        DAT_0000000d = DAT_0000000d & 0xfe;
      }
      DAT_00000484 = 0x78;
    }
  }
  if (((_DAT_0003c126 == 1) || (_DAT_0003c126 == 4)) || (_DAT_0003c126 == 2)) {
    clear_32_byte_buffer_000e13f0();
    clear_32_byte_buffer_000e1404();
  }
  return;
}
