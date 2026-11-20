/* @k10d set_three_flag_bits_and_notify @ 0x000e8f60
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Sets bit 0 of two byte globals, masks a third to 2 bits, and calls two notification
 *   functions with the updated values.
 * summary:
 *   The function ORs 1 into DAT_0003c009 and DAT_0003c00b, ANDs DAT_0003c00a with 3, then
 *   calls write_byte_to_ram_and_call_two_routines with arguments (8, DAT_0003c009) and (9,
 *   DAT_0003c00a), and write_masked_field_and_call_two_routines with (10, DAT_0003c00b).
 *   The callees' roles are unknown, so the specific subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_three_flag_bits_and_notify(void)

{
  DAT_0003c009 = DAT_0003c009 | 1;
  write_byte_to_ram_and_call_two_routines(8,DAT_0003c009);
  DAT_0003c00b = DAT_0003c00b | 1;
  write_masked_field_and_call_two_routines(10,DAT_0003c00b);
  DAT_0003c00a = DAT_0003c00a & 3;
  write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a);
  return;
}
