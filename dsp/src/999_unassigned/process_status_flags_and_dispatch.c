/* @k10d process_status_flags_and_dispatch @ 0x000cf10a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks multiple global status flags and conditionally calls a series of handler
 *   functions based on their state.
 * summary:
 *   The function evaluates bits in DAT_0003ce09, DAT_0003c18d, and other globals to
 *   determine which subsystems need updating. It calls check_condition_flag and
 *   poll_event_and_dispatch_000cbe84 first, then branches into several other functions
 *   (clear_high_bits_in_buffer, update_status_flags_and_counters_000cdcf4, etc.) depending
 *   on specific flag combinations. It also manages the state of DAT_0003cfc7 based on
 *   conditions involving DAT_0003f485 and DAT_0003cb80.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t process_status_flags_and_dispatch(void)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  if ((DAT_0003ce09 & 0x80) == 0) {
    uVar1 = check_condition_flag();
    iVar2 = poll_event_and_dispatch_000cbe84(0xc,uVar1);
    if (iVar2 == 0) {
      clear_high_bits_in_buffer();
      if ((DAT_0003ce09 & 0x40) == 0) {
        update_status_flags_and_counters_000cdcf4();
        compute_clamped_parameter_value();
        copy_two_record_blocks();
        clamp_dat_0003ce30_non_negative();
      }
      if ((DAT_0003c18d & 0x40) != 0) {
        FUN_000d04ba(0);
      }
      FUN_000d10a0();
      poll_status_and_clear_flags(0x12);
    }
  }
  if ((DAT_0003ce09 & 0x20) == 0) {
    clear_flag_and_call_helpers();
  }
  if (((DAT_0003f485 != 0) && ((DAT_0003ce01 & 1) == 0)) && ((DAT_0003ce02 & 0x80) == 0)) {
    if (((DAT_0003cb80 & 1) == 0) || ((DAT_0003ce01 & 0x40) != 0)) {
      DAT_0003cfc7 = 0;
    }
    else if (DAT_0003cfc7 == 0) {
      if (((DAT_0003cb9b & 0x80) != 0) && (_DAT_0003cc30 < 0x100)) {
        DAT_0003cfc7 = DAT_0003f485;
        uVar3 = dispatch_state_change_request(1);
      }
    }
    else if ((((char)DAT_0003cfc7 < '\0') && ((DAT_0003cbef & 0x40) != 0)) ||
            ((DAT_0003cb80 & 8) == 0)) {
      DAT_0003cfc7 = 0;
    }
    else {
      DAT_0003cfc7 = DAT_0003cfc7 | 0x80;
    }
  }
  return uVar3;
}
