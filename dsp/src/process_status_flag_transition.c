/* @k10d process_status_flag_transition @ 0x000ebb46
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks specific status bits and executes a sequence of state updates and function calls
 *   if conditions are met.
 * summary:
 *   The function tests bits in DAT_0003c181 and DAT_0003c588. If the condition is true, it
 *   modifies DAT_0003c00d and DAT_0003c00c, waits on DAT_0000004f with delays via
 *   update_status_flags_and_counters_000de274, and calls several other functions
 *   (busy_wait_on_mode_flag, write_byte_to_ram_and_call_two_routines, etc.) to update
 *   internal state. It also conditionally sets bits in bRam00000000 and DAT_0003c38c based
 *   on DAT_0003c493.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_status_flag_transition(void)

{
  if (((DAT_0003c181 & 0x80) != 0) || ((DAT_0003c588 & 0x40) != 0)) {
    _DAT_0003c010 = _DAT_0003c56e & 0x3ff;
    DAT_0003c00d = DAT_0003c00d & 0xdf;
    if ((_DAT_0003c56e & 0x8000) != 0) {
      DAT_0003c00d = DAT_0003c00d | 0x20;
    }
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
      update_status_flags_and_counters_000de274(1000);
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
      update_status_flags_and_counters_000de274(1000);
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
      update_status_flags_and_counters_000de274(1000);
    }
    else {
      FUN_000d5642(3);
    }
    DAT_0003c00c = 0xf;
    write_byte_to_ram_and_call_two_routines(0xb,0xf);
    call_e30ec_with_e_and_dat_3c010();
    call_e31d6_with_0x1c();
    busy_wait_on_mode_flag(0x168);
    DAT_0003c00c = DAT_0003c00c & 0xf7;
    write_masked_field_and_call_two_routines(0xb,DAT_0003c00c);
    write_masked_field_and_call_two_routines(0x1b,0);
    bRam00000000 = bRam00000000 & 0xbf;
    busy_wait_on_mode_flag(0x14);
    busy_wait_on_mode_flag(0xf);
    busy_wait_on_mode_flag(1);
    if ((DAT_0003c493 == '\t') && ((DAT_0003c588 & 0x20) != 0)) {
      DAT_0003c00c = DAT_0003c00c | 0x20;
      FUN_000ec718();
    }
    if (DAT_0003c493 == '\0') {
      DAT_0003c38c = DAT_0003c38c | 4;
      busy_wait_on_mode_flag(1);
      bRam00000000 = bRam00000000 | 0x40;
    }
    else {
      busy_wait_on_mode_flag(1);
      bRam00000000 = bRam00000000 | 0x40;
    }
  }
  return;
}
