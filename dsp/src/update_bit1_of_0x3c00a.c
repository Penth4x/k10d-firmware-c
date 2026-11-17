/* @k10d update_bit1_of_0x3c00a @ 0x000e36e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Conditionally sets or clears bit 1 of DAT_0003c00a based on a call to
 *   check_two_flag_bits_000c5838 and bit 6 of DAT_0003c4d3.
 * summary:
 *   Gated by bit 0 of DAT_0003c086, the function calls check_two_flag_bits_000c5838 with a
 *   value derived from bit 1 of DAT_0003c00a. It then sets or clears bit 1 of DAT_0003c00a
 *   based on the return value and bit 6 of DAT_0003c4d3. Finally, it calls
 *   write_byte_to_ram_and_call_two_routines with arguments 9 and the updated value of
 *   DAT_0003c00a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_bit1_of_0x3c00a(void)

{
  uint uVar1;
  
  if ((DAT_0003c086 & 1) == 0) {
    uVar1 = check_two_flag_bits_000c5838((DAT_0003c00a & 3) >> 1 ^ 0xffffffff);
    if ((uVar1 & 1) == 0) {
      DAT_0003c00a = DAT_0003c00a & 0xfd;
    }
    else {
      DAT_0003c00a = DAT_0003c00a | 2;
    }
    if (((uVar1 & 1 ^ 0xffffffff) & 1) == 0) {
      DAT_0003c00a = DAT_0003c00a & 0xfd;
    }
    else {
      DAT_0003c00a = DAT_0003c00a | 2;
    }
    if ((DAT_0003c4d3 & 0x40) != 0) {
      DAT_0003c00a = DAT_0003c00a & 0xfd;
    }
    write_byte_to_ram_and_call_two_routines(9,DAT_0003c00a);
  }
  return;
}
