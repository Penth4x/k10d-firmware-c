/* @k10d dispatch_on_flag_bits_000e0d92 @ 0x000e0d92
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Calls a setup routine then branches to one of three handlers based on bits in two flag
 *   bytes.
 * summary:
 *   First calls set_ram_flags_and_counters unconditionally. Then inspects bit 7 of
 *   DAT_0003c127; if set, calls write_masked_field_and_call_two_routines(0x17,0xf0). If bit
 *   7 is clear, checks bit 5 of DAT_0003c127 and bit 5 of DAT_0003c126 plus bit 6 of
 *   DAT_0003c143 to select between FUN_000e0944 and clear_and_set_flag_bits_000e00cc. The
 *   DAT globals are unknown flag/state bytes; no MMIO or known subsystem is touched
 *   directly.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_flag_bits_000e0d92(void)

{
  set_ram_flags_and_counters();
  if ((DAT_0003c127 & 0x80) == 0) {
    if ((DAT_0003c127 & 0x20) == 0) {
      if (((DAT_0003c126 & 0x20) == 0) || ((DAT_0003c143 & 0x40) == 0)) {
        FUN_000e0944();
      }
      else {
        clear_and_set_flag_bits_000e00cc();
      }
    }
    else {
      clear_and_set_flag_bits_000e00cc();
    }
  }
  else {
    write_masked_field_and_call_two_routines(0x17,0xf0);
  }
  return;
}
