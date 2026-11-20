/* @k10d advance_seven_state_counter @ 0x000e9eda
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Reads a value, subtracts 6, and advances a 0-6 counter if a helper call succeeds.
 * summary:
 *   Calls clear_bits_in_ram_byte and stores the result minus 6 into DAT_0003c018. If the
 *   value is less than 7, it writes two shifted constants (0x20 and 0x30) to DAT_0003c01a
 *   and DAT_0003c01c, then calls verify_two_byte_checksum with a masked shift of 0xfff. If
 *   verify_two_byte_checksum returns non-zero, the counter is incremented; otherwise it
 *   remains. If the initial value is 7 or greater, the counter resets to 0. Returns the
 *   final counter value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte advance_seven_state_counter(void)

{
  char cVar2;
  int iVar1;
  
  cVar2 = clear_bits_in_ram_byte();
  DAT_0003c018 = cVar2 - 6;
  if (DAT_0003c018 < 7) {
    _DAT_0003c01a = (uint16_t)(0x20 << (DAT_0003c018 & 0xf));
    _DAT_0003c01c = (uint16_t)(0x30 << (DAT_0003c018 & 0xf));
    iVar1 = verify_two_byte_checksum(0xfffU >> (6 - DAT_0003c018 & 0x1f) & 0xffff);
    if (iVar1 != 0) {
      DAT_0003c018 = DAT_0003c018 + 1;
    }
  }
  else {
    DAT_0003c018 = 0;
  }
  return DAT_0003c018;
}
