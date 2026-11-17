/* @k10d clear_seven_byte_block @ 0x000dbbce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Masks the high byte of DAT_0003c805 and zeroes a contiguous 7-byte region at
 *   0x0003c88a.
 * summary:
 *   The function performs a bitwise AND of DAT_0003c805 with 0xc0, preserving only the top
 *   two bits. It then sets DAT_0003c88a through DAT_0003c892 to zero. No other memory
 *   locations are modified and no functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_seven_byte_block(void)

{
  DAT_0003c805 = DAT_0003c805 & 0xc0;
  DAT_0003c88a = 0;
  DAT_0003c88b = 0;
  DAT_0003c88c = 0;
  DAT_0003c88d = 0;
  _DAT_0003c890 = 0;
  _DAT_0003c892 = 0;
  return;
}
