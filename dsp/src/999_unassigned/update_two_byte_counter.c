/* @k10d update_two_byte_counter @ 0x000eb66a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Increments a byte counter and resets a second byte to 4 based on bit flags in two
 *   global variables.
 * summary:
 *   Calls write_nibble_to_ram_region with argument 0x13. Checks bit 0 of DAT_0003c1f4 and
 *   bit 5 of DAT_0003c003 to decide whether to increment DAT_0003c1f4 or decrement
 *   DAT_0003c1f5. If DAT_0003c1f5 was not decremented, it is set to 4. The function
 *   manipulates two adjacent global bytes that appear to form a 16-bit state or counter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_two_byte_counter(void)

{
  bool bVar1;
  
  bVar1 = false;
  write_nibble_to_ram_region(0x13);
  if ((DAT_0003c1f4 & 1) == 0) {
    if ((DAT_0003c003 & 0x20) == 0) {
      DAT_0003c1f4 = DAT_0003c1f4 + 1;
    }
  }
  else if ((DAT_0003c003 & 0x20) != 0) {
    if (DAT_0003c1f5 == '\0') {
      DAT_0003c1f4 = DAT_0003c1f4 + 1;
    }
    else {
      DAT_0003c1f5 = DAT_0003c1f5 + -1;
      bVar1 = true;
    }
  }
  if (!bVar1) {
    DAT_0003c1f5 = '\x04';
  }
  return;
}
