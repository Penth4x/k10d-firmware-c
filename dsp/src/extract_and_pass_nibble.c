/* @k10d extract_and_pass_nibble @ 0x000cdcd4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Extracts the upper nibble of a byte and passes it to a helper function.
 * summary:
 *   The function reads the global variable DAT_0003ce02, masks it with 0x3f, and shifts it
 *   right by 4 bits to isolate bits 4-5. This 2-bit value is then passed as an argument to
 *   the callee xor_with_low_nibble_shifted. The role of DAT_0003ce02 and
 *   xor_with_low_nibble_shifted is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t extract_and_pass_nibble(void)

{
  uint32_t uVar1;
  
  uVar1 = xor_with_low_nibble_shifted((DAT_0003ce02 & 0x3f) >> 4);
  return uVar1;
}
