/* @k10d clear_state_flags_and_dispatch @ 0x000da48a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears specific bits in state variables based on mode checks and calls a sequence of
 *   handler functions.
 * summary:
 *   The function modifies DAT_0003c58b and DAT_0003c181 by clearing bits 6 and 7
 *   respectively, conditional on the value of DAT_0003c492. It calls
 *   update_status_flag_bits_000c35c2, FUN_000c20ac, and FUN_000da752 unconditionally. If
 *   DAT_0003c193 bit 0 is set, it calls busy_wait_on_mode_flag with arguments 0x1ae and
 *   0x15e, along with configure_state_and_dispatch and FUN_000dac3e. It finishes by calling
 *   set_flag_bits_and_clear_counters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_state_flags_and_dispatch(void)

{
  bool bVar1;
  
  DAT_0003c58b = DAT_0003c58b & 0xbd;
  update_status_flag_bits_000c35c2();
  FUN_000c20ac();
  if (DAT_0003c492 != '\x02') {
    bVar1 = false;
    if ((DAT_0003c492 == '\x04') && ((DAT_0003c181 & 0x40) != 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      DAT_0003c181 = DAT_0003c181 & 0xbf;
    }
  }
  if ((DAT_0003c492 != '\x03') && (DAT_0003c492 != '\x05')) {
    bVar1 = false;
    if ((DAT_0003c492 == '\x04') && ((DAT_0003c181 & 0x80) != 0)) {
      bVar1 = true;
    }
    if (!bVar1) {
      DAT_0003c181 = DAT_0003c181 & 0x7f;
    }
  }
  FUN_000da752();
  if ((DAT_0003c193 & 1) != 0) {
    busy_wait_on_mode_flag(0x1ae);
    configure_state_and_dispatch();
    if ((DAT_0003c589 & 1) != 0) {
      busy_wait_on_mode_flag(0x15e);
      FUN_000dac3e();
    }
  }
  set_flag_bits_and_clear_counters();
  return;
}
