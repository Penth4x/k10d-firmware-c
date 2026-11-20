/* @k10d update_status_flags_and_call_helpers @ 0x000e0b78
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Modifies several global flag bytes based on bit tests and calls four helper functions
 *   with specific arguments.
 * summary:
 *   The function clears and sets bits in DAT_00000403 and DAT_00000503. It calls
 *   write_byte_to_ram_and_call_two_routines and write_masked_field_and_call_two_routines
 *   with arguments derived from DAT_0003c008. It then updates DAT_0003c129 by testing bits
 *   in DAT_00000003 and DAT_0003c002, and finally masks it with DAT_0003c004. It calls
 *   write_nibble_to_ram_region twice and conditionally calls busy_wait_on_mode_flag if
 *   DAT_00000484 is 2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flags_and_call_helpers(void)

{
  DAT_00000403 = DAT_00000403 & 0x6f;
  DAT_00000503 = DAT_00000503 | 0x90;
  write_byte_to_ram_and_call_two_routines(7,DAT_0003c008 & 3 | 4);
  write_masked_field_and_call_two_routines(0x18,0xd0);
  if ((DAT_00000003 & 0x1f) >> 4 == 0) {
    DAT_0003c129 = DAT_0003c129 & 0xfd;
  }
  else {
    DAT_0003c129 = DAT_0003c129 | 2;
  }
  if ((char)DAT_00000003 < '\0') {
    DAT_0003c129 = DAT_0003c129 | 4;
  }
  else {
    DAT_0003c129 = DAT_0003c129 & 0xfb;
  }
  write_nibble_to_ram_region(0x14);
  write_masked_field_and_call_two_routines(7,DAT_0003c008 | 0xc);
  write_nibble_to_ram_region(0x12);
  write_masked_field_and_call_two_routines(0x18,0xf0);
  if ((DAT_0003c002 & 0x20) == 0) {
    DAT_0003c129 = DAT_0003c129 & 0xfe;
  }
  else {
    DAT_0003c129 = DAT_0003c129 | 1;
  }
  DAT_0003c129 = DAT_0003c004 & 0x70 | DAT_0003c129 & 7;
  if ((DAT_00000484 & 3) == 2) {
    busy_wait_on_mode_flag(0x34);
  }
  write_nibble_to_ram_region(0x14);
  return;
}
