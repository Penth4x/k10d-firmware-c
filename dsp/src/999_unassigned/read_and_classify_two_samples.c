/* @k10d read_and_classify_two_samples @ 0x000db4ac
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Reads two values via average_four_reads, classifies each against three thresholds, and
 *   returns a status code.
 * summary:
 *   Toggles bit 6 of DAT_0003c193 and clears bit 7 if bit 7 was set. Calls
 *   toggle_bit7_and_check_state and a sequence of
 *   conditional_call_on_flag_bit2/FUN_000d5642 if bit 7 is clear. Reads a value into
 *   DAT_0003c19a, compares it to DAT_0003f508, DAT_0003f50b, and DAT_0003f509 to produce a
 *   1-3 classification. Repeats the read/classify after busy_wait_on_mode_flag(0x14).
 *   Returns 4 if the two classifications differ, otherwise returns the classification
 *   value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char read_and_classify_two_samples(void)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  
  if (((DAT_0003c193 >> 7 ^ 0xff) & 1) == 0) {
    DAT_0003c193 = DAT_0003c193 & 0xbf;
  }
  else {
    DAT_0003c193 = DAT_0003c193 | 0x40;
  }
  if ((DAT_0003c193 & 0x80) == 0) {
    toggle_bit7_and_check_state();
    conditional_call_on_flag_bit2();
    FUN_000d5642(1);
    conditional_call_on_flag_bit2();
    FUN_000d5642(1);
    conditional_call_on_flag_bit2();
    FUN_000d5642(1);
    conditional_call_on_flag_bit2();
    FUN_000d5642(1);
  }
  write_masked_field_and_call_two_routines(0xf,2);
  conditional_call_on_flag_bit2();
  FUN_000d5642(1);
  conditional_call_on_flag_bit2();
  DAT_0003c19a = average_four_reads();
  uVar4 = (uint)DAT_0003c19a;
  cVar2 = DAT_0003f508 <= DAT_0003c19a;
  if (DAT_0003f50b <= DAT_0003c19a) {
    cVar2 = '\x02';
  }
  if (DAT_0003f509 <= DAT_0003c19a) {
    cVar2 = '\x03';
  }
  busy_wait_on_mode_flag(0x14);
  DAT_0003c19a = average_four_reads();
  uVar1 = (uint)DAT_0003c19a;
  cVar3 = DAT_0003f508 <= DAT_0003c19a;
  if (DAT_0003f50b <= DAT_0003c19a) {
    cVar3 = '\x02';
  }
  if (DAT_0003f509 <= DAT_0003c19a) {
    cVar3 = '\x03';
  }
  write_masked_field_and_call_two_routines(0xf,0);
  write_nibble_to_ram_region(4);
  if ((DAT_0003c193 & 0x40) != 0) {
    clear_flag_and_reset_state();
  }
  if (cVar2 != cVar3) {
    cVar2 = '\x04';
  }
  map_byte_to_three_level_code();
  select_entry_by_threshold_000db89a((int)(uVar4 + uVar1) >> 1);
  return cVar2;
}
