/* @k10d clear_flags_and_update_state @ 0x000e7a70
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Clears three state bytes, modifies two control registers, and calls two helper
 *   functions with derived parameters.
 * summary:
 *   The function zeroes DAT_0003c060, DAT_0003c064, and DAT_0003c065. It reads bits 3-5
 *   from DAT_0003c00b, sets bit 3 in that register, and calls
 *   write_byte_to_ram_and_call_two_routines with 10 and the modified value. It then clears
 *   bit 5 in DAT_0000000a, clears bit 7 in DAT_0003c006, calls
 *   write_masked_field_and_call_two_routines with 0x15 and the modified DAT_0003c006, and
 *   sets bit 3 in DAT_0000000a. Finally, it conditionally calls FUN_000d5642(5) if bit 0 of
 *   DAT_0003c066 is set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flags_and_update_state(void)

{
  byte bVar1;
  
  DAT_0003c060 = 0;
  DAT_0003c064 = 0;
  DAT_0003c065 = 0;
  bVar1 = DAT_0003c00b & 0x38;
  DAT_0003c00b = DAT_0003c00b | 8;
  write_byte_to_ram_and_call_two_routines(10,bVar1 | 8);
  DAT_0000000a = DAT_0000000a & 0xfb;
  DAT_0003c006 = DAT_0003c006 & 0x7f;
  write_masked_field_and_call_two_routines(0x15,DAT_0003c006);
  DAT_0000000a = DAT_0000000a & 0xfd | 8;
  if ((DAT_0003c066 & 1) != 0) {
    FUN_000d5642(5);
  }
  return;
}
