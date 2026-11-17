/* @k10d check_and_update_byte_flag @ 0x000f6f8a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Reads a byte at DAT_0003c12e, conditionally calls poll_input_and_fill_buffer if bit 6
 *   of DAT_0003c128 is set, and restores the byte if bits 2-3 are both set.
 * summary:
 *   The function saves the current value of DAT_0003c12e. If bit 6 (0x40) of DAT_0003c128
 *   is set, it calls poll_input_and_fill_buffer with arguments 0x82, 3, a pointer to
 *   DAT_0003c12e, and 1. After the call, if bits 2 and 3 of DAT_0003c12e are both set
 *   (value 0xc), it restores the original saved value. The role of DAT_0003c128 and
 *   DAT_0003c12e is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_update_byte_flag(void)

{
  byte bVar1;
  
  bVar1 = DAT_0003c12e;
  DAT_0003c12e = bVar1;
  if ((DAT_0003c128 & 0x40) != 0) {
    poll_input_and_fill_buffer(0x82,3,(void *)&DAT_0003c12e,1);
    if ((DAT_0003c12e & 0xc) == 0xc) {
      DAT_0003c12e = bVar1;
    }
  }
  return;
}
