/* @k10d set_multiple_status_flags @ 0x000e7b8c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets specific bits in several global status variables and calls helper functions with
 *   those values.
 * summary:
 *   The function performs a series of bitwise OR operations on global variables
 *   (DAT_0000000a, DAT_0003c006, DAT_0003c00b, etc.) to set specific flags. It interleaves
 *   these updates with calls to write_masked_field_and_call_two_routines, FUN_000d5642,
 *   write_byte_to_ram_and_call_two_routines, and configure_timer_channels, passing the
 *   modified values or constants as arguments. It also conditionally sets bits in
 *   DAT_00000403 and DAT_00000003 based on the state of DAT_0003c035.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_multiple_status_flags(void)

{
  DAT_0000000a = DAT_0000000a | 8;
  DAT_0003c006 = DAT_0003c006 | 0x80;
  write_masked_field_and_call_two_routines(0x15,DAT_0003c006);
  FUN_000d5642(3);
  DAT_0003c00b = DAT_0003c00b | 0x40;
  write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
  FUN_000d5642(2);
  DAT_0000000a = DAT_0000000a | 4;
  configure_timer_channels();
  if ((DAT_0003c035 & 0x80) == 0) {
    DAT_00000403 = DAT_00000403 | 1;
    DAT_00000003 = DAT_00000003 | 1;
  }
  FUN_000d5642(10);
  DAT_0000000a = DAT_0000000a | 2;
  DAT_0003c066 = DAT_0003c066 | 1;
  DAT_0003c067 = DAT_0003c067 | 1;
  return;
}
