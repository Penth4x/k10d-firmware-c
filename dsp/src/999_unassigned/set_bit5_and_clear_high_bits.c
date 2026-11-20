/* @k10d set_bit5_and_clear_high_bits @ 0x000c458a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bit 5 of DAT_0003c588 and clears bits 6-7 of DAT_0003c181.
 * summary:
 *   The function performs two independent bitwise operations on global variables. It sets
 *   bit 5 (0x20) of DAT_0003c588 while preserving other bits, and masks DAT_0003c181 to
 *   keep only the lower 6 bits. No callees are invoked, and the roles of these specific
 *   global variables are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit5_and_clear_high_bits(void)

{
  DAT_0003c588 = DAT_0003c588 & 0xbf | 0x20;
  DAT_0003c181 = DAT_0003c181 & 0x3f;
  return;
}
