/* @k10d copy_two_byte_value @ 0x000c5986
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies a 16-bit value from DAT_0003f328 into two adjacent bytes at DAT_0003c49e.
 * summary:
 *   The function reads the 16-bit value at DAT_0003f328 and writes it to the two
 *   consecutive byte locations DAT_0003c49e and DAT_0003c49f. It has no callees and
 *   performs no other operations. The specific roles of these data symbols are not
 *   determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_byte_value(void)

{
  DAT_0003c49e = DAT_0003f328;
  DAT_0003c49f = DAT_0003f328;
  return;
}
