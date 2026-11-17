/* @k10d check_bit7_of_dat_0003c003 @ 0x000e65a4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Reads bit 7 of DAT_0003c003 and returns true if it is clear, after calling three helper
 *   functions.
 * summary:
 *   The function calls write_masked_field_and_call_two_routines(6,0xc),
 *   call_d5678_with_0x14(), and write_nibble_to_ram_region(0x13) in sequence. It then reads
 *   the byte at DAT_0003c003, masks it with 0x80 to test bit 7, and calls
 *   write_masked_field_and_call_two_routines(6,0). It returns true if bit 7 was 0, false
 *   otherwise. The roles of the callees and the DAT global are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_bit7_of_dat_0003c003(void)

{
  byte bVar1;
  
  write_masked_field_and_call_two_routines(6,0xc);
  call_d5678_with_0x14();
  write_nibble_to_ram_region(0x13);
  bVar1 = DAT_0003c003 & 0x80;
  write_masked_field_and_call_two_routines(6,0);
  return bVar1 == 0;
}
