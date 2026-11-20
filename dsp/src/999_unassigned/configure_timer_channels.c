/* @k10d configure_timer_channels @ 0x000e59e4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Configures multiple timer channels by writing control values and copying state
 *   registers.
 * summary:
 *   The function checks a flag in DAT_0003c395 and, if clear, calls
 *   write_masked_field_and_call_two_routines and write_byte_to_ram_and_call_two_routines
 *   with various parameters to configure timer-like hardware. It copies several
 *   DAT_0003c0xx values to other locations and calls FUN_000e2fc2 with indices 0, 1, and 2.
 *   The specific hardware subsystem is not identified in the brief, so the name reflects
 *   the mechanical pattern of configuring multiple channels.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_timer_channels(void)

{
  if ((DAT_0003c395 & 8) == 0) {
    write_masked_field_and_call_two_routines(6,0xf);
    write_byte_to_ram_and_call_two_routines(8,0xdf);
    write_masked_field_and_call_two_routines(0x16,0x50);
    write_masked_field_and_call_two_routines(0x15,DAT_0003c006 & 0xef | 0x60);
    call_d5678_with_0x14();
    DAT_0003c03b = DAT_0003c000;
    DAT_0003c03c = DAT_0003c001;
    DAT_0003c03d = DAT_0003c003;
    DAT_0003c039 = DAT_0003c035;
    DAT_0003c03a = DAT_0003c036;
    FUN_000e2fc2(0);
    FUN_000e2fc2(1);
    DAT_0003c035 = DAT_0003c001;
    write_nibble_to_ram_region(0x13);
    FUN_000e2fc2(2);
    if ((DAT_0003c002 & 0x20) == 0) {
      DAT_0003c129 = DAT_0003c129 & 0xfe;
    }
    else {
      DAT_0003c129 = DAT_0003c129 | 1;
    }
    write_masked_field_and_call_two_routines(0x15,DAT_0003c006 & 0xdf | 0x50);
    call_d5678_with_0x14();
    FUN_000e2fc2(1);
    DAT_0003c036 = DAT_0003c001;
    write_masked_field_and_call_two_routines(0x15,DAT_0003c006 & 0xbf | 0x30);
    call_d5678_with_0x14();
    FUN_000e2fc2(1);
    if ((((DAT_0003c001 & 7) >> 2 ^ 0xffffffff) & 1) == 0) {
      DAT_0003c037 = DAT_0003c001 & 0xfb;
    }
    else {
      DAT_0003c037 = DAT_0003c001 | 4;
    }
    write_masked_field_and_call_two_routines(0x15,DAT_0003c006 & 0x9f | 0x10);
    write_masked_field_and_call_two_routines(6,0);
    write_masked_field_and_call_two_routines(0x16,0x50);
    write_byte_to_ram_and_call_two_routines(8,0xff);
    if ((DAT_0003c000 & 4) != 0) {
      DAT_0003c05d = DAT_0003c05d & 0xdf;
    }
  }
  return;
}
