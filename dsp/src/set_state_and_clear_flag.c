/* @k10d set_state_and_clear_flag @ 0x000c44c0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets a global counter to 6 and clears bit 3 of another global byte.
 * summary:
 *   The function writes the constant 6 to DAT_0003c492 and performs a bitwise AND with 0xdf
 *   on DAT_0003c589, which clears bit 3 (value 0x08). No other operations or memory
 *   accesses are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_state_and_clear_flag(void)

{
  DAT_0003c492 = 6;
  DAT_0003c589 = DAT_0003c589 & 0xdf;
  return;
}
